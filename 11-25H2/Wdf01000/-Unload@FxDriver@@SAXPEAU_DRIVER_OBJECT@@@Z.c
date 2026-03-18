/*
 * XREFs of ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x14004A6C0
 * Callers:
 *     imp_WdfDriverMiniportUnload @ 0x140094180 (imp_WdfDriverMiniportUnload.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?GetFxDriver@FxDriver@@SAPEAV1@PEAU_DRIVER_OBJECT@@@Z @ 0x14004A7E0 (-GetFxDriver@FxDriver@@SAPEAV1@PEAU_DRIVER_OBJECT@@@Z.c)
 *     FxDestroy @ 0x140081CD8 (FxDestroy.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxDriver::Unload(_DRIVER_OBJECT *DriverObject)
{
  unsigned __int64 FxDriver; // rax
  _QWORD *v3; // rbx
  _FX_DRIVER_GLOBALS *v4; // rdi
  unsigned __int16 *v5; // rsi
  const void *_a1; // rcx
  void (__fastcall *v7)(const void *); // rax
  unsigned __int64 v8; // rbp
  const void *v9; // rbp
  const void *v10; // rcx

  FxDriver = (unsigned __int64)FxDriver::GetFxDriver(DriverObject);
  v3 = (_QWORD *)FxDriver;
  if ( FxDriver )
  {
    v4 = *(_FX_DRIVER_GLOBALS **)(FxDriver + 16);
    v5 = (unsigned __int16 *)(FxDriver + 10);
    if ( v4->FxVerboseOn )
    {
      _a1 = (const void *)(FxDriver ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*v5 )
        _a1 = 0LL;
      WPP_IFR_SF_qq(v4, 5u, 0x11u, 0xDu, WPP_FxDriver_cpp_Traceguids, _a1, DriverObject);
    }
    v7 = (void (__fastcall *)(const void *))v3[45];
    if ( v7 )
    {
      v8 = (unsigned __int64)v3;
      if ( *v5 )
        v8 = (unsigned __int64)v3;
      v9 = (const void *)(v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v10 = v9;
      if ( !*v5 )
        v10 = 0LL;
      v7(v10);
      if ( v4->FxVerboseOn )
      {
        if ( !*v5 )
          v9 = 0LL;
        WPP_IFR_SF_qq(v4, 5u, 0x11u, 0xEu, WPP_FxDriver_cpp_Traceguids, v9, DriverObject);
      }
    }
    (*(void (__fastcall **)(_QWORD *))(*v3 + 48LL))(v3);
    v4->Driver = 0LL;
    FxDestroy(v4);
  }
}
