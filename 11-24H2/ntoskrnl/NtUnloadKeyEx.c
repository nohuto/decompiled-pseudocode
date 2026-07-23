/*
 * XREFs of NtUnloadKeyEx @ 0x140A93CE0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x14092D238 (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  LARGE_INTEGER v2; // r9
  __int64 v3; // r10
  NTSTATUS v4; // r8d
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  CmUnloadKey(v3, 0, 1, v2);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v6);
  return v4;
}
