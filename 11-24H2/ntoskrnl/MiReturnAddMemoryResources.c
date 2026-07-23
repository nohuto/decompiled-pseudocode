/*
 * XREFs of MiReturnAddMemoryResources @ 0x14066FA80
 * Callers:
 *     MiAddPhysicalMemory @ 0x1407E8C3C (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1407EA37C (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiDeletePartitionPageNodes @ 0x14068B150 (MiDeletePartitionPageNodes.c)
 *     MiReleaseAddMemoryLocks @ 0x1407EA32C (MiReleaseAddMemoryLocks.c)
 *     MiUnlinkHotAddFlight @ 0x1407EA69C (MiUnlinkHotAddFlight.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReturnAddMemoryResources(__int64 a1)
{
  PVOID *v2; // rdi
  __int64 v3; // rsi
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  MiUnlinkHotAddFlight(a1);
  MiReleaseAddMemoryLocks(a1);
  v2 = (PVOID *)(a1 + 160);
  v3 = 2LL;
  do
  {
    if ( *v2 )
      ExFreePoolWithTag(*v2, 0);
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = (_QWORD **)(a1 + 136);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    ExFreePoolWithTag(v5, 0);
  }
  return MiDeletePartitionPageNodes(a1 + 104);
}
