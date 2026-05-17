/*
 * XREFs of LdrDeleteEnclave @ 0x180132C60
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceEnclave @ 0x180003B50 (LdrpDereferenceEnclave.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x1800D8D60 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800D8E80 (LdrpUnlockAndDereferenceEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D8F88 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x180160874 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     NtTerminateEnclave @ 0x1801656A0 (NtTerminateEnclave.c)
 */

__int64 __fastcall LdrDeleteEnclave(unsigned __int64 a1)
{
  unsigned __int64 locked; // rax
  _QWORD *v2; // rbx
  int v3; // esi
  int v4; // edi
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v9 = a1;
  v10 = 0LL;
  locked = LdrpObtainLockedEnclave(a1, 1);
  v2 = (_QWORD *)locked;
  if ( !locked )
    goto LABEL_9;
  v3 = *(_DWORD *)(locked + 56);
  v4 = NtTerminateEnclave(*(_QWORD *)(locked + 72), 4LL);
  if ( v4 >= 0 )
  {
    v2[14] = 0LL;
    LdrpCleanupEnclaveLoadState((__int64)v2, -1073741823);
    v2[9] = 0LL;
    RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
    v5 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v6 = (_QWORD *)v2[1], (_QWORD *)*v6 != v2) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
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
    v4 = ZwFreeVirtualMemory(-1LL, &v9, &v10, 0x8000LL);
  if ( v2 )
    LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry((unsigned int)v4);
  return (unsigned int)v4;
}
