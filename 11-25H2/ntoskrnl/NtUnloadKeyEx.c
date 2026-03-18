/*
 * XREFs of NtUnloadKeyEx @ 0x140863E60
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 */

__int64 NtUnloadKeyEx()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // r10
  unsigned int v3; // r8d
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v5);
  LOBYTE(v0) = 1;
  CmUnloadKey(v2, 0LL, v0, v1);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v5);
  return v3;
}
