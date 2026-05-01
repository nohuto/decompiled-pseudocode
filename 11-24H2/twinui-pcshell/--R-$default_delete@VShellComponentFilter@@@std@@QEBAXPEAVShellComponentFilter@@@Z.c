/*
 * XREFs of ??R?$default_delete@VShellComponentFilter@@@std@@QEBAXPEAVShellComponentFilter@@@Z @ 0x1803EBB64
 * Callers:
 *     ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x180248C80 (-CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@.c)
 *     ??1?$unique_ptr@VShellComponentFilter@@U?$default_delete@VShellComponentFilter@@@std@@@std@@QEAA@XZ @ 0x1802CE7D0 (--1-$unique_ptr@VShellComponentFilter@@U-$default_delete@VShellComponentFilter@@@std@@@std@@QEAA.c)
 *     _dynamic_atexit_destructor_for__shellComponentFilter___0 @ 0x1807076D0 (_dynamic_atexit_destructor_for__shellComponentFilter___0.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802CEB60 (--1-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-$int.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<ShellComponentFilter>::operator()(__int64 a1, HMODULE *a2)
{
  if ( a2 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x10);
  }
}
