/*
 * XREFs of LdrDeleteEnclave @ 0x180130E90
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x1800D40D0 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800D41F0 (LdrpUnlockAndDereferenceEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D42F8 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpDereferenceEnclave @ 0x1800DC130 (LdrpDereferenceEnclave.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x18015EC34 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     ZwFreeVirtualMemory @ 0x180160410 (ZwFreeVirtualMemory.c)
 *     NtTerminateEnclave @ 0x180163A60 (NtTerminateEnclave.c)
 */

NTSTATUS __cdecl LdrDeleteEnclave(PVOID BaseAddress)
{
  __int64 *v1; // rax
  __int64 *v2; // rbx
  int v3; // esi
  int v4; // edi
  __int64 v5; // rdx
  __int64 **v6; // rax
  __int64 *v7; // rax
  PVOID BaseAddressa; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF

  BaseAddressa = BaseAddress;
  RegionSize = 0LL;
  v1 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 1);
  v2 = v1;
  if ( !v1 )
    goto LABEL_9;
  v3 = *((_DWORD *)v1 + 14);
  v4 = NtTerminateEnclave((PVOID)v1[9], 4u);
  if ( v4 >= 0 )
  {
    v2[14] = 0LL;
    LdrpCleanupEnclaveLoadState((__int64)v2, -1073741823);
    v2[9] = 0LL;
    RtlEnterCriticalSection(&LdrpEnclaveListLock);
    v5 = *v2;
    if ( *(__int64 **)(*v2 + 8) != v2 || (v6 = (__int64 **)v2[1], *v6 != v2) )
      __fastfail(3u);
    *v6 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    RtlLeaveCriticalSection(&LdrpEnclaveListLock);
    LdrpDereferenceEnclave((__int64)v2);
    v4 = 0;
  }
  LdrpUnlockAndDereferenceEnclave((__int64)v2);
  v7 = 0LL;
  if ( v3 == 16 )
    v7 = v2;
  v2 = v7;
  if ( v4 >= 0 )
LABEL_9:
    v4 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  if ( v2 )
    LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry((unsigned int)v4);
  return v4;
}
