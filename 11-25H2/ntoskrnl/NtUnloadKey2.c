/*
 * XREFs of NtUnloadKey2 @ 0x1407C1CD0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 */

__int64 NtUnloadKey2()
{
  unsigned int v0; // r10d
  __int64 v1; // r11
  unsigned int v2; // r8d
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v4);
  CmUnloadKey(v1, v0, 0LL, 0LL);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v4);
  return v2;
}
