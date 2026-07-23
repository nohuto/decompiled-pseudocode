/*
 * XREFs of PfpPartitionCanDoNameLoggingCallback @ 0x14045AA10
 * Callers:
 *     PfFileInfoNotify @ 0x14022A7B0 (PfFileInfoNotify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpPartitionCanDoNameLoggingCallback(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 608);
  v3 = *(_DWORD *)(a1 + 612);
  result = v2 >= v3 ? 0xC0000189 : 0;
  *a2 = v2 < v3;
  return result;
}
