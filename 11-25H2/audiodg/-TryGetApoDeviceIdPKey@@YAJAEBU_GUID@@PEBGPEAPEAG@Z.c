/*
 * XREFs of ?TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z @ 0x140026C04
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140033590 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x140026A60 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140026D74 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TryGetApoDeviceIdPKey(const struct _GUID *a1, const unsigned __int16 *a2, const wchar_t **a3)
{
  int FxPropertyStore; // eax
  struct IPropertyStore *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  size_t v9; // rcx
  unsigned int v10; // ebx
  int v12; // eax
  struct IPropertyStore *v13; // [rsp+20h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  int v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *a3 = 0LL;
  v13 = 0LL;
  FxPropertyStore = TryGetFxPropertyStore(a2, &v13);
  v6 = v13;
  if ( FxPropertyStore >= 0 && v13 )
  {
    *(_OWORD *)pvar = 0LL;
    v15 = 0LL;
    v16 = 0uLL;
    v16 = (__int128)*a1;
    v17 = 100;
    v7 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, PROPVARIANT *))v13->lpVtbl->GetValue)(
           v13,
           &v16,
           pvar);
    v10 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v7);
      PropVariantClear(pvar);
      if ( v13 )
        ((void (__fastcall *)(struct IPropertyStore *))v13->lpVtbl->Release)(v13);
      return v10;
    }
    if ( LOWORD(pvar[0]) == 31 )
    {
      v12 = _AllocString<CTCoAllocPolicy>(v9, v8, (const wchar_t *)pvar[1], a3);
      v10 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x32,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
          (const char *)(unsigned int)v12);
        PropVariantClear(pvar);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v13);
        return v10;
      }
    }
    PropVariantClear(pvar);
    v6 = v13;
  }
  if ( v6 )
    ((void (__fastcall *)(struct IPropertyStore *))v6->lpVtbl->Release)(v6);
  return 0LL;
}
