/*
 * XREFs of ??1InputInfoMetadata@InfoMetadata@@QEAA@XZ @ 0x180055798
 * Callers:
 *     ??0InfoMetadata@@QEAA@XZ @ 0x1800554E0 (--0InfoMetadata@@QEAA@XZ.c)
 *     ?AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z @ 0x1800556E0 (-AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@@@std@@YAXPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@0@QEAU10@AEAV?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@0@@Z @ 0x18009A6B0 (--$_Destroy_range@V-$allocator@U-$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@std@.c)
 *     _InfoMetadata::InfoMetadata_::_1_::dtor$7 @ 0x1801CB496 (_InfoMetadata--InfoMetadata_--_1_--dtor$7.c)
 *     _InfoMetadata::AddInput_::_1_::dtor$0 @ 0x1801CB4A8 (_InfoMetadata--AddInput_--_1_--dtor$0.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18000A430 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 */

void __fastcall InfoMetadata::InputInfoMetadata::~InputInfoMetadata(InfoMetadata::InputInfoMetadata *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx

  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 320, a2);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 256, v3);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 192, v4);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 128, v5);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 64, v6);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this, v7);
}
