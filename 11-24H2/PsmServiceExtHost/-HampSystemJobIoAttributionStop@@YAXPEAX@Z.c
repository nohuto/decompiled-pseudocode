/*
 * XREFs of ?HampSystemJobIoAttributionStop@@YAXPEAX@Z @ 0x18001D80C
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x18001A728 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001C1EC (-HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall HampSystemJobIoAttributionStop(HANDLE JobHandle)
{
  _DWORD JobInformation[20]; // [rsp+20h] [rbp-68h] BYREF

  memset_0(JobInformation, 0, 0x48uLL);
  JobInformation[0] = 2;
  NtSetInformationJobObject(JobHandle, JobObjectJobSetInformation|0x20, JobInformation, 0x48u);
}
