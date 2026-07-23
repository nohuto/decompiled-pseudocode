/*
 * XREFs of NtUnloadKey2 @ 0x1407D18E0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x14092D238 (CmUnloadKey.c)
 */

NTSTATUS __cdecl NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  unsigned int v2; // r10d
  __int64 v3; // r11
  NTSTATUS v4; // r8d
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  CmUnloadKey(v3, v2, 0LL, 0LL);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v6);
  return v4;
}
