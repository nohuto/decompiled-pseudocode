/*
 * XREFs of MiAdvanceVadView @ 0x1402A4550
 * Callers:
 *     MiPerformVadSplitting @ 0x1402A3F44 (MiPerformVadSplitting.c)
 *     MiInitializePartialVad @ 0x140902310 (MiInitializePartialVad.c)
 * Callees:
 *     MiLocateSubsectionNode @ 0x140219A20 (MiLocateSubsectionNode.c)
 *     MiLocatePagefileSubsection @ 0x1402BC3A0 (MiLocatePagefileSubsection.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     MiComputeContiguousSubsectionPte @ 0x14043EAA0 (MiComputeContiguousSubsectionPte.c)
 */

__int64 __fastcall MiAdvanceVadView(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  bool v9; // zf
  _DWORD *SubsectionNode; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 24);
  v5 = a2 + (result | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32));
  if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
  {
    v6 = *(__int64 **)(a1 + 72);
    v7 = *v6;
    v8 = (a2 << 12) + MiStartingOffset(v6, *(_QWORD *)(a1 + 80), 0xFFFFFFFFLL);
    v9 = *(_QWORD *)(v7 + 64) == 0LL;
    v13 = v8 >> 12;
    if ( v9 )
      SubsectionNode = (_DWORD *)MiLocatePagefileSubsection(v7 + 128, &v13);
    else
      SubsectionNode = MiLocateSubsectionNode(v7, v8, 0);
    v11 = v13 - ((unsigned int)SubsectionNode[9] | ((unsigned __int64)(SubsectionNode[8] & 0xFFC0) << 26));
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
