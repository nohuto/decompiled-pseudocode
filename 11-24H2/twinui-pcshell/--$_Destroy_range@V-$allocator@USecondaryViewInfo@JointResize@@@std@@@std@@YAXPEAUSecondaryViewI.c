/*
 * XREFs of ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x18029F17C
 * Callers:
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x18017C390 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ??1JointResize@@UEAA@XZ @ 0x18029F018 (--1JointResize@@UEAA@XZ.c)
 *     ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x18053830C (--$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@.c)
 *     ??$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAPEAUSecondaryViewInfo@JointResize@@QEAU12@0PEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x1805384A0 (--$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@JointR.c)
 *     _std::vector_JointResize::SecondaryViewInfo_std::allocator_JointResize::SecondaryViewInfo___::_Emplace_reallocate_JointResize::SecondaryViewInfo__::_1_::catch$0 @ 0x1806F21E2 (_std--vector_JointResize--SecondaryViewInfo_std--allocator_JointResize--SecondaryViewInfo___--_E.c)
 * Callees:
 *     ??1SecondaryViewInfo@JointResize@@QEAA@XZ @ 0x1802CD64C (--1SecondaryViewInfo@JointResize@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(
        JointResize::SecondaryViewInfo *this,
        JointResize::SecondaryViewInfo *a2)
{
  JointResize::SecondaryViewInfo *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      JointResize::SecondaryViewInfo::~SecondaryViewInfo(v3);
      v3 = (JointResize::SecondaryViewInfo *)((char *)v3 + 96);
    }
    while ( v3 != a2 );
  }
}
