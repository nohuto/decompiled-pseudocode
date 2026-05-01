/*
 * XREFs of ?ClearOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1802E4808
 * Callers:
 *     ?RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802EB360 (-RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CReportWindowVisibilityChange::ClearOverrideImmuneApplication(
        CReportWindowVisibilityChange *this,
        struct IUnknown *a2)
{
  struct IUnknown **v4; // r14
  struct IUnknown **v5; // rsi
  BOOL v6; // r15d
  __int64 *v7; // r14
  __int64 *i; // rbx
  __int64 v9; // rcx
  const char *v10; // r9
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *v13; // [rsp+50h] [rbp+8h] BYREF
  struct IUnknown **v14; // [rsp+58h] [rbp+10h]

  v4 = (struct IUnknown **)*((_QWORD *)this + 7);
  v5 = (struct IUnknown **)*((_QWORD *)this + 6);
  try
  {
    while ( v5 != v4 )
    {
      v13 = *v5;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
      v14 = &v13;
      v6 = SHIsSameObject(a2, v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
      if ( v6 )
        break;
      ++v5;
    }
    v7 = (__int64 *)*((_QWORD *)this + 7);
    for ( i = (__int64 *)(v5 + 1); i != v7; ++i )
    {
      v9 = 0LL;
      if ( v11 != i )
      {
        v9 = *i;
        *i = 0LL;
      }
      v11[0] = *(i - 1);
      *(i - 1) = v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*((_QWORD *)this + 7) - 8LL));
    *((_QWORD *)this + 7) -= 8LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x8C,
      (int)"pcshell\\twinui\\appmanager\\lib\\amcommon.h",
      v10);
  }
}
