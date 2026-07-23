/*
 * XREFs of ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x140445120
 * Callers:
 *     KeInitializeMutant @ 0x1405BA830 (KeInitializeMutant.c)
 *     NtdllRunOnceInitMuiCrits @ 0x1405E5410 (NtdllRunOnceInitMuiCrits.c)
 *     DifKeInitializeMutantWrapper @ 0x14062BF40 (DifKeInitializeMutantWrapper.c)
 *     DifKeInitializeMutexWrapper @ 0x14062C0B0 (DifKeInitializeMutexWrapper.c)
 *     PnpInitializeDeviceEvents @ 0x140C273AC (PnpInitializeDeviceEvents.c)
 *     ViInitSystemPhase0 @ 0x140C3D83C (ViInitSystemPhase0.c)
 *     WmipDriverEntry @ 0x140C3EB10 (WmipDriverEntry.c)
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 *     EtwpInitializeRegistration @ 0x140C40338 (EtwpInitializeRegistration.c)
 *     ExpProfileInitialization @ 0x140C45828 (ExpProfileInitialization.c)
 *     sub_140C5E95C @ 0x140C5E95C (sub_140C5E95C.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiInitializeMutant(struct _KMUTANT *a1, __int64 a2, unsigned __int8 a3, char a4)
{
  char v7; // r14
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v12; // esi
  struct _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_MutantListEntry; // rax
  _QWORD *v15; // rax

  v7 = a2;
  *(_OWORD *)&a1->Header.Lock = 0LL;
  *(_OWORD *)&a1->Header.WaitListHead.Blink = 0LL;
  *(_OWORD *)&a1->MutantListEntry.Blink = 0LL;
  *(_QWORD *)&a1->MutantFlags = 0LL;
  v8 = 2LL;
  a1->Header.Type = 2;
  if ( (_BYTE)a2 )
  {
    CurrentThread = KeGetCurrentThread();
    a1->OwnerThread = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(v8) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v8, a2);
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
          HvlNotifyLongSpinWait(v12);
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
    if ( v7 )
    {
      v15 = KeAbPreAcquire((__int64)a1, 0LL);
      if ( v15 )
        *((_BYTE *)v15 + 10) = 1;
    }
  }
}
