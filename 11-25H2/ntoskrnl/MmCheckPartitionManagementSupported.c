/*
 * XREFs of MmCheckPartitionManagementSupported @ 0x14093A0B0
 * Callers:
 *     NtManagePartition @ 0x14093B600 (NtManagePartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmCheckPartitionManagementSupported(__int64 a1, unsigned int a2)
{
  int v3; // eax

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 0x80u) == 0 )
    return 0LL;
  if ( a2 <= 0xC && (v3 = 4579, _bittest(&v3, a2)) )
    return 0LL;
  else
    return a2 != 14 ? 0xC00000BB : 0;
}
