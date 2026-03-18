/*
 * XREFs of ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x14009495C
 * Callers:
 *     imp_WdfControlDeviceInitAllocate @ 0x14008FD90 (imp_WdfControlDeviceInitAllocate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140020EC0 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140031510 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x140040BD4 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x14007CE60 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 */

WDFDEVICE_INIT *__fastcall WDFDEVICE_INIT::_AllocateControlDeviceInit(
        FxDriver *Driver,
        const _UNICODE_STRING *SDDLString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  void *v3; // rax
  FX_POOL **v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  WDFDEVICE_INIT *v10; // rbx
  FX_POOL **v11; // rax
  FxString *v12; // rax
  __m128i v14; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  m_Globals = Driver->m_Globals;
  v14.m128i_i64[0] = 0LL;
  v14.m128i_i64[1] = 64LL;
  v3 = retaddr;
  if ( !m_Globals->FxPoolTrackingOn )
    v3 = 0LL;
  v6 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v14, 0x3B0uLL, m_Globals->Tag, v3);
  if ( v6 )
  {
    WDFDEVICE_INIT::WDFDEVICE_INIT((WDFDEVICE_INIT *)v6, Driver);
    v10 = (WDFDEVICE_INIT *)v7;
    if ( v7 )
    {
      *(_DWORD *)(v7 + 56) |= 0x80u;
      *(_DWORD *)(v7 + 36) = 2;
      v11 = FxObjectHandleAlloc2(m_Globals, v8, 0x78uLL, v9, 0LL, 0, FxObjectTypeExternal);
      if ( v11 )
        FxString::FxString((FxString *)v11, m_Globals);
      else
        v12 = 0LL;
      v10->Security.Sddl = v12;
      if ( v12 )
      {
        if ( FxString::Assign(v12, SDDLString) >= 0 )
          return v10;
      }
      else
      {
        WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxDeviceInit_cpp_Traceguids, Driver, -1073741670);
      }
      WDFDEVICE_INIT::`scalar deleting destructor'(v10);
      return 0LL;
    }
  }
  WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xBu, WPP_FxDeviceInit_cpp_Traceguids, Driver);
  return 0LL;
}
