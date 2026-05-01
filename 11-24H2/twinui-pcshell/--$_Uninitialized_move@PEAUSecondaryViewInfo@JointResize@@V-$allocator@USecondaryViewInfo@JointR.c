/*
 * XREFs of ??$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAPEAUSecondaryViewInfo@JointResize@@QEAU12@0PEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x1805384A0
 * Callers:
 *     ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x18053830C (--$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x18029F17C (--$_Destroy_range@V-$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewI.c)
 *     ??$construct@USecondaryViewInfo@JointResize@@U12@@?$_Default_allocator_traits@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@SAXAEAV?$allocator@USecondaryViewInfo@JointResize@@@1@QEAUSecondaryViewInfo@JointResize@@$$QEAU34@@Z @ 0x180538A08 (--$construct@USecondaryViewInfo@JointResize@@U12@@-$_Default_allocator_traits@V-$allocator@USeco.c)
 */

JointResize::SecondaryViewInfo *__fastcall std::_Uninitialized_move<JointResize::SecondaryViewInfo *>(
        __int64 a1,
        __int64 a2,
        JointResize::SecondaryViewInfo *a3)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9

  v4 = a1;
  if ( a1 != a2 )
  {
    do
    {
      std::_Default_allocator_traits<std::allocator<JointResize::SecondaryViewInfo>>::construct<JointResize::SecondaryViewInfo,JointResize::SecondaryViewInfo>(
        a1,
        a3,
        v4);
      a3 = (JointResize::SecondaryViewInfo *)((char *)a3 + 96);
      v4 = v5 + 96;
    }
    while ( v4 != v6 );
  }
  std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(a3, a3);
  return a3;
}
