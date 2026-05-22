/*
 * XREFs of _std::vector_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata__std::allocator_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata_____::_Emplace_reallocate_enum_InputType_&_InfoMetadata::InputInfoMetadata_&__::_1_::catch$1 @ 0x1801D28C5
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@@@std@@YAXPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x18009A850 (--$_Destroy_range@V-$allocator@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@.c)
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata__std::allocator_std::pair_enum_InputType_InfoMetadata::InputInfoMetadata_____::_Emplace_reallocate_enum_InputType___InfoMetadata::InputInfoMetadata____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(char **)(a2 + 40), (const struct std::nothrow_t *)(392LL * *(_QWORD *)(a2 + 120)));
  throw;
}
