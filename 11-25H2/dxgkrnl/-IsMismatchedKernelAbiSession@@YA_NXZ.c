/*
 * XREFs of ?IsMismatchedKernelAbiSession@@YA_NXZ @ 0x14039ECD0
 * Callers:
 *     DxgkDDisplayEnumInternal @ 0x14039E730 (DxgkDDisplayEnumInternal.c)
 * Callees:
 *     <none>
 */

bool IsMismatchedKernelAbiSession(void)
{
  NTSTATUS InformationJobObject; // eax
  _OWORD JobInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v3; // [rsp+50h] [rbp-18h]

  if ( !(unsigned __int8)PsIsCurrentThreadInServerSilo() )
    return 0;
  v3 = 0LL;
  memset(JobInformation, 0, sizeof(JobInformation));
  InformationJobObject = ZwQueryInformationJobObject(
                           0LL,
                           JobObjectEndOfJobTimeInformation|0x20,
                           JobInformation,
                           0x28u,
                           0LL);
  if ( InformationJobObject < 0 )
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, InformationJobObject, 0LL, 0LL);
    WdLogGlobalForLineNumber = 432;
    return 0;
  }
  return HIDWORD(v3) != (_DWORD)v3;
}
