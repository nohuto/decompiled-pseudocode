/*
 * XREFs of ??1KeyboardModifierState@@EEAA@XZ @ 0x180198E64
 * Callers:
 *     ??_EKeyboardModifierState@@EEAAPEAXI@Z @ 0x180198EB0 (--_EKeyboardModifierState@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x180027BAC (--1-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 */

void __fastcall KeyboardModifierState::~KeyboardModifierState(KeyboardModifierState *this)
{
  bool v1; // zf

  v1 = KeyboardModifierState::s_pKeyboardModifierState == 0LL;
  *(_QWORD *)this = &KeyboardModifierState::`vftable';
  if ( !v1 )
    KeyboardModifierState::s_pKeyboardModifierState = 0LL;
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::~_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>((__int64)this + 16);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
