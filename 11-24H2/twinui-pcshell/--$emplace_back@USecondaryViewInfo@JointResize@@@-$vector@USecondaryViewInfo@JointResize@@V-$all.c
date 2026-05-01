/*
 * XREFs of ??$emplace_back@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAA?A_T$$QEAUSecondaryViewInfo@JointResize@@@Z @ 0x1802B2054
 * Callers:
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x1800EB8DC (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x18053830C (--$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@.c)
 */

__int64 __fastcall std::vector<JointResize::SecondaryViewInfo>::emplace_back<JointResize::SecondaryViewInfo>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)(a1 + 16) )
    return std::vector<JointResize::SecondaryViewInfo>::_Emplace_reallocate<JointResize::SecondaryViewInfo>(a1, v3, a2);
  v4 = *a2;
  *a2 = 0LL;
  *(_QWORD *)v3 = v4;
  *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(v3 + 16) = a2[2];
  *(_OWORD *)(v3 + 24) = *(_OWORD *)(a2 + 3);
  *(_BYTE *)(v3 + 40) = *((_BYTE *)a2 + 40);
  v5 = a2[6];
  a2[6] = 0LL;
  *(_QWORD *)(v3 + 48) = v5;
  *(_QWORD *)(v3 + 56) = a2[7];
  *(_DWORD *)(v3 + 64) = *((_DWORD *)a2 + 16);
  *(_QWORD *)(v3 + 68) = *(__int64 *)((char *)a2 + 68);
  *(_DWORD *)(v3 + 76) = *((_DWORD *)a2 + 19);
  *(_OWORD *)(v3 + 80) = *((_OWORD *)a2 + 5);
  v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v6 + 96;
  return v6;
}
