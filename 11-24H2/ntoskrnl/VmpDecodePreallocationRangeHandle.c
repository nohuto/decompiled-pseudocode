/*
 * XREFs of VmpDecodePreallocationRangeHandle @ 0x14079F2EC
 * Callers:
 *     VmCreateMemoryRange @ 0x14079EB10 (VmCreateMemoryRange.c)
 *     VmFreePreallocationForRangeCreate @ 0x14079ED00 (VmFreePreallocationForRangeCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpDecodePreallocationRangeHandle(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx

  if ( _InterlockedDecrement64((volatile signed __int64 *)(a1 + 112)) == -1 )
    NT_ASSERT("NewCount != 0xffffffffffffffffui64");
  v2 = a2 ^ a1;
  if ( *(_QWORD *)(v2 + 16) != -1LL )
    NT_ASSERT("VaMemoryRange->VaTreeNode.ParentValue == 0xffffffffffffffffui64");
  if ( *(_QWORD *)(v2 + 24) )
    NT_ASSERT("VaMemoryRange->StartVpn == 0");
  if ( *(_QWORD *)(v2 + 32) )
    NT_ASSERT("VaMemoryRange->LastVpn == 0");
  if ( *(_DWORD *)(v2 + 72) )
    NT_ASSERT("VaMemoryRange->AllFlags == 0");
  v3 = *(_QWORD **)(v2 + 40);
  if ( v3 == (_QWORD *)(v2 + 40) )
    NT_ASSERT("IsListEmpty(&VaMemoryRange->GpaRangeList) == 0");
  if ( *v3 != v2 + 40 )
    NT_ASSERT("VaMemoryRange->GpaRangeList.Flink->Flink == &VaMemoryRange->GpaRangeList");
  return v2;
}
