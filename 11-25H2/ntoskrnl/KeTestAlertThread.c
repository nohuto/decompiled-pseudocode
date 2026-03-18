/*
 * XREFs of KeTestAlertThread @ 0x140261EE0
 * Callers:
 *     KiContinueEx @ 0x140260E20 (KiContinueEx.c)
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     DbgkpSendErrorMessage @ 0x1408B6DA4 (DbgkpSendErrorMessage.c)
 *     NtTestAlert @ 0x140A224D0 (NtTestAlert.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall KeTestAlertThread(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rbp
  unsigned __int8 CurrentIrql; // si
  unsigned int v5; // edi
  unsigned __int8 v6; // di

  CurrentThread = KeGetCurrentThread();
  v3 = (char)a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( CurrentThread->ThreadLock );
  }
  v6 = CurrentThread->Alerted[v3];
  if ( v6 )
  {
    CurrentThread->Alerted[v3] = 0;
  }
  else if ( (_BYTE)v3 == 1
         && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    CurrentThread->ApcState.UserApcPendingAll |= 2u;
  }
  CurrentThread->ThreadLock = 0LL;
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
  }
  __writecr8(CurrentIrql);
  return v6;
}
