/*
 * XREFs of KeRaiseUserException @ 0x1404CDA80
 * Callers:
 *     ExHandleLogBadReference @ 0x14043AC30 (ExHandleLogBadReference.c)
 *     ObpCloseHandle @ 0x14084A770 (ObpCloseHandle.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 * Callees:
 *     KiSetupForInstrumentationReturn @ 0x140452ED0 (KiSetupForInstrumentationReturn.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
    {
      LOBYTE(a2) = 1;
      KiRaiseIrqlProcessIrqlFlags(v5, a2);
    }
  }
  TrapFrame = (__int64)CurrentThread->TrapFrame;
  if ( TrapFrame )
  {
    if ( (*(_BYTE *)(TrapFrame + 368) & 1) != 0 )
    {
      *((_DWORD *)CurrentThread->Teb + 176) = a1;
      *(_WORD *)(TrapFrame + 368) = 51;
      *(_QWORD *)(TrapFrame + 360) = qword_140FC6470;
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
