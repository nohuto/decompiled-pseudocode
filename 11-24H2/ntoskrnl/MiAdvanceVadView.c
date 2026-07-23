/*
 * XREFs of MiAdvanceVadView @ 0x1403C8DEC
 * Callers:
 *     MiPerformVadSplitting @ 0x1403C877C (MiPerformVadSplitting.c)
 *     MiInitializePartialVad @ 0x14091A104 (MiInitializePartialVad.c)
 * Callees:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiLocatePagefileSubsection @ 0x1403D2A80 (MiLocatePagefileSubsection.c)
 *     MiLocateSubsectionNode @ 0x14040FCF0 (MiLocateSubsectionNode.c)
 *     MiComputeContiguousSubsectionPte @ 0x140435270 (MiComputeContiguousSubsectionPte.c)
 */

__int64 __fastcall MiAdvanceVadView(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  bool v9; // zf
  __int64 SubsectionNode; // rax
  unsigned __int64 v11; // rdx
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
      SubsectionNode = MiLocatePagefileSubsection(v7 + 128, &v13);
    else
      SubsectionNode = MiLocateSubsectionNode(v7, v8, 0LL);
    v11 = v13
        - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_DWORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
    v12 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
    *(_QWORD *)(a1 + 72) = SubsectionNode;
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(SubsectionNode + 8) + 8 * v11;
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
