/*
 * XREFs of ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@@Z @ 0x1C01F37DC
 * Callers:
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01F2D30 (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ?IVSerializeFullKeyboardStates@@YAJAEAVCIVGenericSerializer@@@Z @ 0x1C01ED2D4 (-IVSerializeFullKeyboardStates@@YAJAEAVCIVGenericSerializer@@@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01FD200 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SerializeFullKeyboardStatesForContainer(
        IVRootDeliver::Keyboard::Detail *this,
        struct CIVGenericSerializer *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  SGDGetUserSessionState(this, a2, a3, a4);
  *((_DWORD *)this + 2) += 64;
  SGDGetUserSessionState(v6, v5, v7, v8);
  *((_DWORD *)this + 2) += 64;
  result = CIVSerializer::ExtendByMeasuredExtra(this);
  if ( (int)result >= 0 )
    return IVSerializeFullKeyboardStates(this, v10, v11, v12);
  return result;
}
