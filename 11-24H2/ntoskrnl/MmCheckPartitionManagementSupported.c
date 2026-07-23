/*
 * XREFs of MmCheckPartitionManagementSupported @ 0x1408F7C48
 * Callers:
 *     NtManagePartition @ 0x1408F6B10 (NtManagePartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmCheckPartitionManagementSupported(__int64 a1, unsigned int a2)
{
  int v2; // eax

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 0x80u) == 0 )
    return 0LL;
  if ( a2 <= 0xC && (v2 = 4579, _bittest(&v2, a2)) )
    return 0LL;
  else
    return a2 != 14 ? 0xC00000BB : 0;
}
