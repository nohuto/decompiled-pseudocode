/*
 * XREFs of imp_WdfPdoInitAddDeviceText @ 0x140075910
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140052C6C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14007DBAC (-FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x140083284 (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall imp_WdfPdoInitAddDeviceText(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *DeviceDescription,
        const _UNICODE_STRING *DeviceLocation,
        unsigned int LocaleId)
{
  _FX_DRIVER_GLOBALS *v8; // rbx
  _FX_DRIVER_GLOBALS *v9; // rcx
  __int64 result; // rax
  unsigned int _a1; // edi
  bool v12; // zf
  ULONG Tag; // ecx
  void *v14; // rax
  FX_POOL **v15; // rax
  FxDeviceText *v16; // rsi
  unsigned __int16 v17; // r9
  wchar_t *v18; // rax
  unsigned __int16 v19; // r9
  wchar_t *v20; // rax
  unsigned int v21; // edx
  __m128i v22; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v8 = DeviceInit->DriverGlobals;
  v9 = DeviceInit->DriverGlobals;
  if ( !DeviceDescription )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( !DeviceLocation )
    FxVerifierNullBugCheck(v9, retaddr);
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(v8, DeviceDescription);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(v8, DeviceLocation);
      _a1 = result;
      if ( (int)result >= 0 )
      {
        if ( DeviceInit->InitType == FxDeviceInitTypePdo )
        {
          v12 = v8->FxPoolTrackingOn == 0;
          Tag = v8->Tag;
          v22.m128i_i64[0] = 0LL;
          v22.m128i_i64[1] = 256LL;
          if ( v12 )
            v14 = 0LL;
          else
            v14 = retaddr;
          v15 = FxPoolAllocator(v8, &v8->FxPoolFrameworks, &v22, 0x20uLL, Tag, v14);
          v16 = (FxDeviceText *)v15;
          if ( v15 )
          {
            v15[1] = 0LL;
            v15[2] = 0LL;
            *v15 = 0LL;
            *((_DWORD *)v15 + 6) = LocaleId;
            v18 = FxDuplicateUnicodeStringToString(v8, DeviceDescription);
            v16->m_Description = v18;
            if ( v18 )
            {
              v20 = FxDuplicateUnicodeStringToString(v8, DeviceLocation);
              v16->m_LocationInformation = v20;
              if ( v20 )
              {
                *DeviceInit->Pdo.LastDeviceTextEntry = (_SINGLE_LIST_ENTRY *)v16;
                DeviceInit->Pdo.LastDeviceTextEntry = (_SINGLE_LIST_ENTRY **)v16;
                return _a1;
              }
              v19 = 68;
            }
            else
            {
              v19 = 67;
            }
            _a1 = -1073741670;
            WPP_IFR_SF_D(v8, 2u, 0x12u, v19, WPP_FxDeviceInitApi_cpp_Traceguids, 0xC000009A);
            FxDeviceText::`scalar deleting destructor'(v16, v21);
            return _a1;
          }
          _a1 = -1073741670;
          v17 = 66;
        }
        else
        {
          _a1 = -1073741808;
          v17 = 65;
        }
        WPP_IFR_SF_D(v8, 2u, 0x12u, v17, WPP_FxDeviceInitApi_cpp_Traceguids, _a1);
        return _a1;
      }
    }
  }
  return result;
}
