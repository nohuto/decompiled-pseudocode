/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Do_call @ 0x1800F8E00
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Do_call(
        __int64 a1,
        __int64 a2)
{
  const unsigned __int16 *v2; // rax
  const struct Microsoft::WRL::WeakRef *v3; // r9
  CAudioResourceManager *v4; // rcx

  v2 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)(a1 + 16), a2);
  v4 = 0LL;
  if ( g_AudioResourceManager )
    v4 = (struct IAudioResourceManager *)((char *)g_AudioResourceManager - 8);
  CAudioResourceManager::DeleteAuxiliaryInputForStreamGroup(v4, v3, v2);
}
