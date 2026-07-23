/*
 * XREFs of NtUnloadKey2 @ 0x1407C1CD0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  unsigned int v2; // r10d
  __int64 v3; // r11
  NTSTATUS v4; // r8d
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  CmUnloadKey(v3, v2, 0LL, 0LL);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v6);
  return v4;
}
