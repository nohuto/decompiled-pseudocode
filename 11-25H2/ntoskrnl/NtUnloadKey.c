/*
 * XREFs of NtUnloadKey @ 0x1408644B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 */

__int64 NtUnloadKey()
{
  __int64 v0; // r10
  unsigned int v1; // r8d
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v3);
  CmUnloadKey(v0, 0LL, 0LL, 0LL);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v3);
  return v1;
}
