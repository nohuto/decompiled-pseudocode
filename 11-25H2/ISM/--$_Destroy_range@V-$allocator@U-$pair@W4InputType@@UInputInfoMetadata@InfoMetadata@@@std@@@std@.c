/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@@@std@@YAXPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x18009A6B0
 * Callers:
 *     ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@AEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x180055248 (--$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@-$vector@U-$pair@W4I.c)
 *     ??$_Uninitialized_move@PEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@YAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x18005591C (--$_Uninitialized_move@PEAU-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$allocat.c)
 *     ??1?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAA@XZ @ 0x18019C324 (--1-$vector@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V-$allocator@U-$pair@W4I.c)
 *     _std::vector_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata__std::allocator_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata_____::_Emplace_reallocate_enum_InputType_&_InfoMetadata::InputInfoMetadata_&__::_1_::catch$1 @ 0x1801CB425 (_std--vector_std--pair_enum_InputType_InfoMetadata--InputInfoMetadata__std--allocator_std--pair_.c)
 * Callees:
 *     ??1InputInfoMetadata@InfoMetadata@@QEAA@XZ @ 0x180055798 (--1InputInfoMetadata@InfoMetadata@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      InfoMetadata::InputInfoMetadata::~InputInfoMetadata((InfoMetadata::InputInfoMetadata *)(v3 + 8), a2);
      v3 += 392LL;
    }
    while ( v3 != a2 );
  }
}
