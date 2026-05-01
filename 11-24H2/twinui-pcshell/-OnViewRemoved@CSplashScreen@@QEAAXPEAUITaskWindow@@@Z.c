/*
 * XREFs of ?OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18029E2C0
 * Callers:
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x1800A0C78 (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?erase@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x18029E358 (-erase@-$vector@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UITaskWindow@@@WR.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSplashScreen::OnViewRemoved(CSplashScreen *this, struct IUnknown *a2)
{
  char *v3; // rsi
  struct IUnknown **v4; // rdi
  struct IUnknown **v5; // r14
  BOOL v6; // ebx
  struct IUnknown *v7; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown **v8; // [rsp+48h] [rbp+10h]

  v3 = (char *)this + 96;
  v4 = (struct IUnknown **)*((_QWORD *)this + 12);
  v5 = (struct IUnknown **)*((_QWORD *)this + 13);
  if ( v4 != v5 )
  {
    v8 = &v7;
    do
    {
      v7 = *v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
      v6 = SHIsSameObject(a2, v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
      if ( v6 )
        break;
      ++v4;
    }
    while ( v4 != v5 );
  }
  std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::erase(v3, &v7, v4);
}
