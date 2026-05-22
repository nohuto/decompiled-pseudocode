/*
 * XREFs of ??$_Destroy_range@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInfo@KeyboardProcessor@@QEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x18002C300
 * Callers:
 *     ??$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@AEAAPEAUTargetingInfo@KeyboardProcessor@@QEAU23@AEAU23@@Z @ 0x18002D39C (--$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@-$vector@UTargetingInfo@KeyboardPro.c)
 *     ??1KeyboardProcessor@@MEAA@XZ @ 0x180095DE4 (--1KeyboardProcessor@@MEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@QEAU12@0PEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x18009608C (--$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V-$allocator@UTargetingInfo@Keyboard.c)
 *     _std::vector_KeyboardProcessor::TargetingInfo_std::allocator_KeyboardProcessor::TargetingInfo___::_Emplace_reallocate_KeyboardProcessor::TargetingInfo_&__::_1_::catch$0 @ 0x1801D1256 (_std--vector_KeyboardProcessor--TargetingInfo_std--allocator_KeyboardProcessor--TargetingInfo___.c)
 * Callees:
 *     ??1TargetingInfo@KeyboardProcessor@@QEAA@XZ @ 0x18002CB04 (--1TargetingInfo@KeyboardProcessor@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<KeyboardProcessor::TargetingInfo>>(
        KeyboardProcessor::TargetingInfo *this,
        KeyboardProcessor::TargetingInfo *a2)
{
  KeyboardProcessor::TargetingInfo *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      KeyboardProcessor::TargetingInfo::~TargetingInfo(v3);
      v3 = (KeyboardProcessor::TargetingInfo *)((char *)v3 + 384);
    }
    while ( v3 != a2 );
  }
}
