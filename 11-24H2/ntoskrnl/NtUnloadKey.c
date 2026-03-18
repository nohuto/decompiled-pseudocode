/*
 * XREFs of NtUnloadKey @ 0x14092AF50
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 */

__int64 NtUnloadKey()
{
  __int64 v0; // r10
  unsigned int v1; // r8d
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v3 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v3);
  CmUnloadKey(v0, 0LL, 0LL, 0LL);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v3);
  return v1;
}
