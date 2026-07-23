/*
 * XREFs of KeInitializeMutantEx @ 0x14043DE68
 * Callers:
 *     NtCreateMutant @ 0x14083AEC0 (NtCreateMutant.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeInitializeMutantEx(__int64 a1, __int64 a2, char a3)
{
  char v4; // r14
  __int64 v5; // rbx
  _QWORD *v6; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v9; // esi
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v11; // rax

  v4 = a2;
  v5 = a1;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)a1 = 2;
  if ( (_BYTE)a2 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(a1 + 40) = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
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
          HvlNotifyLongSpinWait(v9);
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
    if ( v4 )
    {
      v6 = KeAbPreAcquire(v5, 0LL);
      if ( v6 )
        *((_BYTE *)v6 + 10) = 1;
    }
  }
  return (char)v6;
}
