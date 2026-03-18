/*
 * XREFs of KeRaiseUserException @ 0x1404CDCA0
 * Callers:
 *     ExHandleLogBadReference @ 0x14043BEE0 (ExHandleLogBadReference.c)
 *     ObpCloseHandle @ 0x14084E9C0 (ObpCloseHandle.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 * Callees:
 *     KiSetupForInstrumentationReturn @ 0x140451440 (KiSetupForInstrumentationReturn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeRaiseUserException(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rcx
  __int64 TrapFrame; // rcx

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v5);
  }
  TrapFrame = (__int64)CurrentThread->TrapFrame;
  if ( TrapFrame )
  {
    if ( (*(_BYTE *)(TrapFrame + 368) & 1) != 0 )
    {
      *((_DWORD *)CurrentThread->Teb + 176) = a1;
      *(_WORD *)(TrapFrame + 368) = 51;
      *(_QWORD *)(TrapFrame + 360) = qword_140FC64B0;
      if ( *(_BYTE *)(TrapFrame + 43) != 2 )
        KiSetupForInstrumentationReturn(TrapFrame);
    }
  }
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 0;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
    }
    __writecr8(0LL);
  }
  return a1;
}
