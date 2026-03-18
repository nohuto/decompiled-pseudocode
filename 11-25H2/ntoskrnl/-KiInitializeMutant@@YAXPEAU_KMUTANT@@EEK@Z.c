/*
 * XREFs of ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x14044F2EC
 * Callers:
 *     KeInitializeMutant @ 0x1405B9360 (KeInitializeMutant.c)
 *     NtdllRunOnceInitMuiCrits @ 0x1405DBD70 (NtdllRunOnceInitMuiCrits.c)
 *     DifKeInitializeMutantWrapper @ 0x1406219C0 (DifKeInitializeMutantWrapper.c)
 *     DifKeInitializeMutexWrapper @ 0x140621B30 (DifKeInitializeMutexWrapper.c)
 *     PnpInitializeDeviceEvents @ 0x140C142CC (PnpInitializeDeviceEvents.c)
 *     ViInitSystemPhase0 @ 0x140C2A404 (ViInitSystemPhase0.c)
 *     WmipDriverEntry @ 0x140C2B6E0 (WmipDriverEntry.c)
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 *     EtwpInitializeRegistration @ 0x140C2CF08 (EtwpInitializeRegistration.c)
 *     ExpProfileInitialization @ 0x140C3240C (ExpProfileInitialization.c)
 *     sub_140C4B44C @ 0x140C4B44C (sub_140C4B44C.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall KiInitializeMutant(struct _KMUTANT *a1, char a2, unsigned __int8 a3, char a4)
{
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // bp
  int v12; // esi
  struct _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_MutantListEntry; // rax
  __int64 *v15; // rax

  *(_OWORD *)&a1->Header.Lock = 0LL;
  *(_OWORD *)&a1->Header.WaitListHead.Blink = 0LL;
  *(_OWORD *)&a1->MutantListEntry.Blink = 0LL;
  *(_QWORD *)&a1->MutantFlags = 0LL;
  v8 = 2LL;
  a1->Header.Type = 2;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    a1->OwnerThread = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v8);
    }
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
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
    p_MutantListEntry = &a1->MutantListEntry;
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    p_MutantListEntry->Flink = &CurrentThread->MutantListHead;
    a1->MutantListEntry.Blink = Blink;
    Blink->Flink = p_MutantListEntry;
    CurrentThread->MutantListHead.Blink = p_MutantListEntry;
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
    a1->Header.SignalState = 1;
  }
  a1->Header.WaitListHead.Blink = &a1->Header.WaitListHead;
  a1->Header.WaitListHead.Flink = &a1->Header.WaitListHead;
  v9 = a1->MutantFlags & 0xFE;
  a1->ApcDisable = a3;
  a1->MutantFlags = v9;
  if ( (a4 & 1) != 0 )
  {
    a1->MutantFlags = v9 | 2;
    if ( a2 )
    {
      v15 = KeAbPreAcquire((__int64)a1, 0LL);
      if ( v15 )
        *((_BYTE *)v15 + 10) = 1;
    }
  }
}
