/*
 * XREFs of MiAdvanceVadView @ 0x14040663C
 * Callers:
 *     MiPerformVadSplitting @ 0x140405FC8 (MiPerformVadSplitting.c)
 *     MiInitializePartialVad @ 0x140A246FC (MiInitializePartialVad.c)
 * Callees:
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     MiLocateSubsectionNode @ 0x1402C31C0 (MiLocateSubsectionNode.c)
 *     MiLocatePagefileSubsection @ 0x1403E4EE0 (MiLocatePagefileSubsection.c)
 *     MiComputeContiguousSubsectionPte @ 0x14043F300 (MiComputeContiguousSubsectionPte.c)
 */

__int64 __fastcall MiAdvanceVadView(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  bool v9; // zf
  unsigned int *SubsectionNode; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 24);
  v5 = a2 + (result | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32));
  if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
  {
    v6 = *(__int64 **)(a1 + 72);
    v7 = *v6;
    v8 = (a2 << 12) + MiStartingOffset(v6, *(_QWORD *)(a1 + 80), 0xFFFFFFFF);
    v9 = *(_QWORD *)(v7 + 64) == 0LL;
    v13 = v8 >> 12;
    if ( v9 )
      SubsectionNode = MiLocatePagefileSubsection((unsigned int *)(v7 + 128), &v13);
    else
      SubsectionNode = MiLocateSubsectionNode(v7, v8, 0);
    v11 = v13 - (SubsectionNode[9] | ((unsigned __int64)(SubsectionNode[8] & 0xFFC0) << 26));
    v12 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
    *(_QWORD *)(a1 + 72) = SubsectionNode;
    *(_QWORD *)(a1 + 80) = *((_QWORD *)SubsectionNode + 1) + 8 * v11;
    result = MiComputeContiguousSubsectionPte(SubsectionNode, v12 + v11 - v5);
    *(_QWORD *)(a1 + 88) = result;
  }
  if ( a2 )
  {
    *(_DWORD *)(a1 + 24) = v5;
    *(_BYTE *)(a1 + 32) = BYTE4(v5);
  }
  return result;
}
