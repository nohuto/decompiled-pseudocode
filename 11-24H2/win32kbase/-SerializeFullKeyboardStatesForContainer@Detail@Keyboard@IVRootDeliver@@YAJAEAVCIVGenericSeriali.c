/*
 * XREFs of ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@@Z @ 0x14021B01C
 * Callers:
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x14021A530 (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ?IVSerializeFullKeyboardStates@@YAJAEAVCIVGenericSerializer@@@Z @ 0x1402162E4 (-IVSerializeFullKeyboardStates@@YAJAEAVCIVGenericSerializer@@@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1402207AC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SerializeFullKeyboardStatesForContainer(
        IVRootDeliver::Keyboard::Detail *this,
        struct CIVGenericSerializer *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  W32GetUserSessionState(this);
  *((_DWORD *)this + 2) += 64;
  W32GetUserSessionState(v3);
  *((_DWORD *)this + 2) += 64;
  result = CIVSerializer::ExtendByMeasuredExtra(this);
  if ( (int)result >= 0 )
    return IVSerializeFullKeyboardStates(this);
  return result;
}
