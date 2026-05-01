/*
 * XREFs of ?HampWakeContextStart@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180041130
 * Callers:
 *     ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x180040630 (-HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@.c)
 * Callees:
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HampWakeContextStart(HANDLE *a1)
{
  NTSTATUS result; // eax
  _QWORD JobInformation[8]; // [rsp+40h] [rbp-58h] BYREF

  memset_0(JobInformation, 0, sizeof(JobInformation));
  result = NtQueryInformationJobObject(a1[14], (JOBOBJECTINFOCLASS)20, JobInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    result = RtlSubscribeWnfStateChangeNotification(
               a1 + 15,
               JobInformation[0],
               0LL,
               HampWakeContextNotificationCallback,
               a1,
               0LL,
               0,
               0);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
