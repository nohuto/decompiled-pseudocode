/*
 * XREFs of KeInitializeMutantEx @ 0x140449AE8
 * Callers:
 *     NtCreateMutant @ 0x1409F51C0 (NtCreateMutant.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall KeInitializeMutantEx(__int64 a1, char a2, char a3)
{
  __int64 v5; // rbx
  __int64 *v6; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // bp
  int v9; // esi
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v11; // rax

  v5 = a1;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)a1 = 2;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(a1 + 40) = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( CurrentThread->ThreadLock );
    }
    Blink = CurrentThread->MutantListHead.Blink;
    v11 = (struct _LIST_ENTRY *)(v5 + 24);
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    v11->Flink = &CurrentThread->MutantListHead;
    *(_QWORD *)(v5 + 32) = Blink;
    Blink->Flink = v11;
    CurrentThread->MutantListHead.Blink = v11;
    CurrentThread->ThreadLock = 0LL;
    if ( KiIrqlFlags )
    {
      LOBYTE(Blink) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), Blink);
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 1;
  }
  *(_QWORD *)(v5 + 16) = v5 + 8;
  *(_QWORD *)(v5 + 8) = v5 + 8;
  LOBYTE(v6) = *(_BYTE *)(v5 + 48) & 0xFE;
  *(_BYTE *)(v5 + 49) = 0;
  *(_BYTE *)(v5 + 48) = (_BYTE)v6;
  if ( (a3 & 1) != 0 )
  {
    LOBYTE(v6) = (unsigned __int8)v6 | 2;
    *(_BYTE *)(v5 + 48) = (_BYTE)v6;
    if ( a2 )
    {
      v6 = KeAbPreAcquire(v5, 0LL);
      if ( v6 )
        *((_BYTE *)v6 + 10) = 1;
    }
  }
  return (char)v6;
}
