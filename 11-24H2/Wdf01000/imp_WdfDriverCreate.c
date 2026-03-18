/*
 * XREFs of imp_WdfDriverCreate @ 0x14006B960
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U4@U?$_tlgWrapperByVal@$03@@U5@U?$_tlgWrapperByVal@$00@@U6@U6@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@6AEBU?$_tlgWrapperByVal@$03@@7AEBU?$_tlgWrapperByVal@$00@@887@Z @ 0x140001008 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U.c)
 *     _tlgKeywordOn @ 0x1400012F4 (_tlgKeywordOn.c)
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140040EF4 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14004533C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14006BDA4 (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x14006BEB4 (-_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     FxInitialize @ 0x14006BF58 (FxInitialize.c)
 *     ?_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z @ 0x14006CDB4 (-_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z.c)
 *     GetImageName @ 0x14006D0E0 (GetImageName.c)
 *     FxDestroy @ 0x140081CC8 (FxDestroy.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_dddd @ 0x1400933A8 (WPP_IFR_SF_dddd.c)
 */

__int64 __fastcall imp_WdfDriverCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        const _UNICODE_STRING *RegistryPath,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes,
        _WDF_DRIVER_CONFIG *DriverConfig,
        WDFDRIVER__ **Driver)
{
  _FX_DRIVER_GLOBALS *v6; // rbx
  _WDF_DRIVER_CONFIG *v11; // rdi
  unsigned int v12; // edi
  unsigned int DriverInitFlags; // eax
  __int64 result; // rax
  WDFDRIVER__ **v15; // r15
  _WDF_DRIVER_CONFIG *v16; // rdx
  unsigned int DriverPoolTag; // eax
  unsigned int v18; // eax
  _WDF_DRIVER_CONFIG *v19; // r9
  unsigned __int64 v20; // rdx
  __int64 v21; // r9
  FX_POOL **v22; // rax
  FxDriver *v23; // rax
  FxObject *v24; // r14
  int v25; // esi
  FxObject *v26; // rcx
  WDFDRIVER__ *v27; // rdx
  bool v28; // al
  wchar_t *Buffer; // rdi
  const _GUID *v30; // r8
  const _GUID *v31; // r9
  unsigned int DriverFlags; // ecx
  bool v33; // al
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  _tlgWrapperByVal<1> v35; // [rsp+80h] [rbp-29h] BYREF
  _tlgWrapperByVal<4> v36; // [rsp+84h] [rbp-25h] BYREF
  _tlgWrapperByVal<4> v37; // [rsp+88h] [rbp-21h] BYREF
  _tlgWrapperByVal<4> v38; // [rsp+8Ch] [rbp-1Dh] BYREF
  FxAutoString imageName; // [rsp+90h] [rbp-19h] BYREF
  _tlgWrapSz<unsigned short> v40; // [rsp+A0h] [rbp-9h] BYREF
  _tlgWrapSz<unsigned short> v41; // [rsp+A8h] [rbp-1h] BYREF
  _tlgWrapSz<char> v42; // [rsp+B0h] [rbp+7h] BYREF
  _tlgWrapperByRef<16> v43; // [rsp+B8h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+F8h] [rbp+4Fh]
  WDFDRIVER__ *hDriver; // [rsp+100h] [rbp+57h] BYREF
  _tlgWrapperByVal<1> hProvider; // [rsp+108h] [rbp+5Fh] BYREF

  v6 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  hDriver = 0LL;
  if ( !DriverObject )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v6->IsDriverCompanion = 0;
  if ( !RegistryPath )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v11 = DriverConfig;
  if ( !DriverConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( DriverConfig->Size != 32 )
  {
    v12 = -1073741820;
    WPP_IFR_SF_dddd(v6, 2u, 0x11u, 0xAu, WPP_FxDriverApi_cpp_Traceguids, DriverConfig->Size, 32, 32, -1073741820);
    return v12;
  }
  DriverInitFlags = DriverConfig->DriverInitFlags;
  if ( (DriverInitFlags & 0xFFFFFFEC) != 0 )
  {
    WPP_IFR_SF_DDd(
      v6,
      (unsigned __int8)DriverObject,
      0x11u,
      0xBu,
      WPP_FxDriverApi_cpp_Traceguids,
      DriverInitFlags,
      0x13u,
      -1073741811);
    return 3221225485LL;
  }
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( (int)result >= 0 )
  {
    if ( v6->IsDriverCompanion || (result = FxValidateUnicodeString(v6, RegistryPath), (int)result >= 0) )
    {
      if ( v6->Driver || DriverGlobals->Driver )
      {
        v12 = -1073741437;
        WPP_IFR_SF_qd(v6, 2u, 0x11u, 0xDu, WPP_FxDriverApi_cpp_Traceguids, DriverObject, -1073741437);
        return v12;
      }
      v15 = Driver;
      if ( Driver )
        *Driver = 0LL;
      FxDriver::_InitializeDriverName(v6, RegistryPath);
      if ( v11->Size == 32 && (DriverPoolTag = v11->DriverPoolTag) != 0 && DriverPoolTag != 543908932 )
      {
        v6->Tag = DriverPoolTag;
        v6->Public.DriverTag = v11->DriverPoolTag;
      }
      else
      {
        FxDriver::_InitializeTag(v6, v16);
      }
      v18 = v11->DriverInitFlags;
      if ( (v18 & 2) == 0 && (v18 & 1) != 0 && v11->EvtDriverDeviceAdd )
      {
        WPP_IFR_SF_(v6, 2u, 0x11u, 0xEu, WPP_FxDriverApi_cpp_Traceguids);
        return 3221225485LL;
      }
      result = FxValidateObjectAttributes(v6, DriverAttributes, 7);
      if ( (int)result < 0 )
        return result;
      FxInitialize(v6, DriverObject, RegistryPath, v19);
      v22 = FxObjectHandleAlloc2(v6, v20, 0x170uLL, v21, DriverAttributes, 0, FxObjectTypeExternal);
      if ( v22 && (FxDriver::FxDriver((FxDriver *)v22, DriverObject, v11, v6), (v24 = v23) != 0LL) )
      {
        v25 = FxDriver::Initialize(v23, RegistryPath, v11, DriverAttributes);
        v26 = v24;
        if ( v25 >= 0 )
        {
          v25 = FxObject::Commit(v24, DriverAttributes, (void **)&hDriver, 0LL, 1u);
          v26 = v24;
          if ( v25 >= 0 )
          {
            v27 = hDriver;
            DriverGlobals->Driver = hDriver;
            v6->Driver = (FxDriver *)v24;
            v6->Public.DriverFlags |= v11->DriverInitFlags;
            v28 = (v11->DriverInitFlags & 3) == 0 || v11->EvtDriverUnload != 0LL;
            v6->Public.DisplaceDriverUnload = v28;
            if ( v15 )
              *v15 = v27;
            if ( v6->TelemetryContext )
            {
              imageName = 0LL;
              GetImageName(v6, &imageName.m_UnicodeString);
              Buffer = imageName.m_UnicodeString.Buffer;
              if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5
                && tlgKeywordOn(&Tlgg_TelemetryProviderProv, 0x200000000000uLL) )
              {
                DriverFlags = v6->Public.DriverFlags;
                v36.Value = v6->FxEnhancedVerifierOptions;
                v33 = (DriverFlags & 2) != 0;
                hProvider.Value = DriverFlags & 1;
                WdfBindInfo = v6->WdfBindInfo;
                LOBYTE(hDriver) = v33;
                v35.Value = v6->FxVerifierOn;
                v37.Value = WdfBindInfo->Version.Minor;
                v38.Value = WdfBindInfo->Version.Major;
                v40.Psz = L"01.035.0";
                v42.Psz = v6->Public.DriverName;
                v43.Ptr = v6->TelemetryContext;
                v41.Psz = Buffer;
                *(_QWORD *)&imageName.m_UnicodeString.Length = 16779264LL;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
                  (const _tlgProvider_t *)WdfBindInfo,
                  &tlgEvent_0._tlgChannel,
                  v30,
                  v31,
                  (const _tlgWrapperByVal<8> *)&imageName,
                  &v43,
                  &v42,
                  &v41,
                  &v40,
                  &v38,
                  &v37,
                  &v35,
                  &hProvider,
                  (const _tlgWrapperByVal<1> *)&hDriver,
                  &v36);
              }
              if ( Buffer )
                FxPoolFree(Buffer);
            }
            return (unsigned int)v25;
          }
        }
        FxObject::DeleteFromFailedCreate(v26);
      }
      else
      {
        v25 = -1073741670;
      }
      FxDestroy(v6);
      return (unsigned int)v25;
    }
  }
  return result;
}
