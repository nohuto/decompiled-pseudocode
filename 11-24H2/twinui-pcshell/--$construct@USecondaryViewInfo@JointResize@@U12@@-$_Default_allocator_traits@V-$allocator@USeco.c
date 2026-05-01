/*
 * XREFs of ??$construct@USecondaryViewInfo@JointResize@@U12@@?$_Default_allocator_traits@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@SAXAEAV?$allocator@USecondaryViewInfo@JointResize@@@1@QEAUSecondaryViewInfo@JointResize@@$$QEAU34@@Z @ 0x180538A08
 * Callers:
 *     ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x18053830C (--$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@.c)
 *     ??$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAPEAUSecondaryViewInfo@JointResize@@QEAU12@0PEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x1805384A0 (--$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@JointR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<JointResize::SecondaryViewInfo>>::construct<JointResize::SecondaryViewInfo,JointResize::SecondaryViewInfo>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax

  v3 = *a3;
  *a3 = 0LL;
  *(_QWORD *)a2 = v3;
  *(_DWORD *)(a2 + 8) = *((_DWORD *)a3 + 2);
  *(_QWORD *)(a2 + 16) = a3[2];
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a3 + 3);
  *(_BYTE *)(a2 + 40) = *((_BYTE *)a3 + 40);
  v4 = a3[6];
  a3[6] = 0LL;
  *(_QWORD *)(a2 + 48) = v4;
  *(_QWORD *)(a2 + 56) = a3[7];
  *(_DWORD *)(a2 + 64) = *((_DWORD *)a3 + 16);
  *(_QWORD *)(a2 + 68) = *(__int64 *)((char *)a3 + 68);
  result = *((unsigned int *)a3 + 19);
  *(_DWORD *)(a2 + 76) = result;
  *(_OWORD *)(a2 + 80) = *((_OWORD *)a3 + 5);
  return result;
}
