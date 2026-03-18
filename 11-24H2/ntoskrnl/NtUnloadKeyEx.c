/*
 * XREFs of NtUnloadKeyEx @ 0x140A974B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 */

__int64 NtUnloadKeyEx()
{
  LARGE_INTEGER v0; // r9
  __int64 v1; // r10
  unsigned int v2; // r8d
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v4);
  CmUnloadKey(v1, 0, 1, v0);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v4);
  return v2;
}
