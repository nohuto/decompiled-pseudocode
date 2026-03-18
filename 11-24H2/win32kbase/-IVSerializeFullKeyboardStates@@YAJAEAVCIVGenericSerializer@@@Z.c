/*
 * XREFs of ?IVSerializeFullKeyboardStates@@YAJAEAVCIVGenericSerializer@@@Z @ 0x1402162E4
 * Callers:
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@@Z @ 0x14021B01C (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSeriali.c)
 * Callees:
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x140221408 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 */

__int64 __fastcall IVSerializeFullKeyboardStates(struct CIVGenericSerializer *this)
{
  void **v1; // rdi
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  v1 = (void **)*((_QWORD *)this + 2);
  UserSessionState = W32GetUserSessionState(this);
  result = CIVSerializer::Serialize(this, v1, (void *const)(UserSessionState + 14400), 0x40uLL, 0);
  if ( (int)result >= 0 )
  {
    v6 = W32GetUserSessionState(v5);
    return CIVSerializer::Serialize(this, v1 + 1, (void *const)(v6 + 14336), 0x40uLL, 0);
  }
  return result;
}
