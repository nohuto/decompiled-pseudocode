/*
 * XREFs of NtUnloadKeyEx @ 0x140863E60
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  NTSTATUS v5; // r8d
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v7);
  LOBYTE(v2) = 1;
  CmUnloadKey(v4, 0LL, v2, v3);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v7);
  return v5;
}
