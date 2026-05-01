/*
 * XREFs of ??1PinOperationContext@@QEAA@XZ @ 0x1805E39C8
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VPinOperationContext@@@std@@EEAAXXZ @ 0x1805EC270 (-_Destroy@-$_Ref_count_obj2@VPinOperationContext@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x1802C40B8 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 */

void __fastcall PinOperationContext::~PinOperationContext(void **this)
{
  std::_Ref_count_base *v2; // rcx

  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    this + 11,
    0LL);
  std::wstring::_Tidy_deallocate(this + 7);
  std::wstring::_Tidy_deallocate(this + 3);
  v2 = (std::_Ref_count_base *)this[1];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
