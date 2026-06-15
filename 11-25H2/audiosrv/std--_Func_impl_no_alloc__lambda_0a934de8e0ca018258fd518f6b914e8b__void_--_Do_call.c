/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Do_call @ 0x1800F3DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Do_call(__int64 a1)
{
  const unsigned __int16 *v1; // rax
  const struct Microsoft::WRL::WeakRef *v2; // r9
  CAudioResourceManager *v3; // rcx

  v1 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)(a1 + 16));
  v3 = 0LL;
  if ( g_AudioResourceManager )
    v3 = (struct IAudioResourceManager *)((char *)g_AudioResourceManager - 8);
  CAudioResourceManager::DeleteAuxiliaryInputForStreamGroup(v3, v2, v1);
}
