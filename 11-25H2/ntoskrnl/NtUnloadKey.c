/*
 * XREFs of NtUnloadKey @ 0x1408644B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  __int64 v1; // r10
  NTSTATUS v2; // r8d
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v4);
  CmUnloadKey(v1, 0LL, 0LL, 0LL);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v4);
  return v2;
}
