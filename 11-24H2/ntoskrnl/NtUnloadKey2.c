/*
 * XREFs of NtUnloadKey2 @ 0x1407D13F0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 */

__int64 NtUnloadKey2()
{
  unsigned int v0; // r10d
  __int64 v1; // r11
  unsigned int v2; // r8d
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v4);
  CmUnloadKey(v1, v0, 0LL, 0LL);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v4);
  return v2;
}
