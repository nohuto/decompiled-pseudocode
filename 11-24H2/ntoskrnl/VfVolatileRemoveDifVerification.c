/*
 * XREFs of VfVolatileRemoveDifVerification @ 0x1406149E0
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140B82CD0 (MmEnableOrDisableVerifierForDriver.c)
 *     ViSuspectDriversLookupEntry @ 0x140B9B1A4 (ViSuspectDriversLookupEntry.c)
 */

__int64 __fastcall VfVolatileRemoveDifVerification(const UNICODE_STRING *a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( !(_QWORD)ViVerifierDriverAddedThunkListHead || !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0 )
    return 3221228668LL;
  result = ViSuspectDriversLookupEntry(a1);
  v2 = result;
  if ( result )
  {
    if ( (VfOptionFlags & 0x800) == 0 )
      return MmEnableOrDisableVerifierForDriver(v2, &v3, 4LL);
    if ( VfDifRunningWithoutReboot )
      return MmEnableOrDisableVerifierForDriver(v2, &v3, 4LL);
    if ( ViWdmThunksWithIatIndex )
      return MmEnableOrDisableVerifierForDriver(v2, &v3, 4LL);
    ViWdmThunksWithIatIndex = (PVOID)ExAllocatePool2(0x40uLL);
    if ( ViWdmThunksWithIatIndex )
      return MmEnableOrDisableVerifierForDriver(v2, &v3, 4LL);
    else
      return 3221225495LL;
  }
  return result;
}
