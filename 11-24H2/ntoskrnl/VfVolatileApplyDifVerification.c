/*
 * XREFs of VfVolatileApplyDifVerification @ 0x140614864
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     MmEnableOrDisableVerifierForDriver @ 0x140B82CD0 (MmEnableOrDisableVerifierForDriver.c)
 *     VfSuspectDifRemoveEntry @ 0x140B9A640 (VfSuspectDifRemoveEntry.c)
 *     VfSuspectDriversAllocateEntry @ 0x140B9A6A0 (VfSuspectDriversAllocateEntry.c)
 */

__int64 __fastcall VfVolatileApplyDifVerification(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 Entry; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( (_DWORD)InitSafeBootMode )
  {
    return (unsigned int)-1073738742;
  }
  else
  {
    Entry = VfSuspectDriversAllocateEntry();
    if ( Entry )
    {
      v2 = MmEnableOrDisableVerifierForDriver(Entry, &v5, 2LL);
      if ( !v5 )
        VfSuspectDifRemoveEntry(a1);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
