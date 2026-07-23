/*
 * XREFs of VfVolatileRemoveDifVerification @ 0x140612FA0
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140B84CD0 (MmEnableOrDisableVerifierForDriver.c)
 *     ViSuspectDriversLookupEntry @ 0x140B9D1A4 (ViSuspectDriversLookupEntry.c)
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
    ViWdmThunksWithIatIndex = (PVOID)ExAllocatePool2(0x40uLL, 24LL * (unsigned int)ViNumberOfWdmThunks, 0x6D4D7644u);
    if ( ViWdmThunksWithIatIndex )
      return MmEnableOrDisableVerifierForDriver(v2, &v3, 4LL);
    else
      return 3221225495LL;
  }
  return result;
}
