/*
 * XREFs of LdrDeleteEnclave @ 0x180134740
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x1800D8D00 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800D8E20 (LdrpUnlockAndDereferenceEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D8F28 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpDereferenceEnclave @ 0x1800DE050 (LdrpDereferenceEnclave.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x180161DC4 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     NtTerminateEnclave @ 0x180166C30 (NtTerminateEnclave.c)
 */

__int64 __fastcall LdrDeleteEnclave(unsigned __int64 a1)
{
  __int64 locked; // rax
  _QWORD *v2; // rbx
  int v3; // esi
  int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  unsigned __int64 v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  v14 = a1;
  v15 = 0LL;
  locked = LdrpObtainLockedEnclave(a1, 1);
  v2 = (_QWORD *)locked;
  if ( !locked )
    goto LABEL_9;
  v3 = *(_DWORD *)(locked + 56);
  v4 = NtTerminateEnclave(*(_QWORD *)(locked + 72), 4LL);
  if ( v4 >= 0 )
  {
    v2[14] = 0LL;
    LdrpCleanupEnclaveLoadState((__int64)v2, -1073741823, v5, v6);
    v2[9] = 0LL;
    RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
    v7 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v8 = (_QWORD *)v2[1], (_QWORD *)*v8 != v2) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
    LdrpDereferenceEnclave((__int64)v2, v9, v10, v11);
    v4 = 0;
  }
  LdrpUnlockAndDereferenceEnclave((__int64)v2);
  v12 = 0LL;
  if ( v3 == 16 )
    v12 = v2;
  v2 = v12;
  if ( v4 >= 0 )
LABEL_9:
    v4 = ZwFreeVirtualMemory(-1LL, &v14, &v15, 0x8000LL);
  if ( v2 )
    LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry((unsigned int)v4);
  return (unsigned int)v4;
}
