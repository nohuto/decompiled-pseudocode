/*
 * XREFs of imp_WdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x140066410
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x140066694 (--0FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

__int64 __fastcall imp_WdfDeviceInitAssignWdmIrpPreprocessCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        int (__fastcall *EvtDeviceWdmIrpPreprocess)(WDFDEVICE__ *, _IRP *),
        unsigned __int8 MajorFunction,
        unsigned __int8 *MinorFunctions,
        unsigned int NumMinorFunctions)
{
  __int64 v6; // rdi
  _FX_DRIVER_GLOBALS *v9; // rbx
  FxIrpPreprocessInfo *PreprocessInfo; // rax
  ULONG v11; // ecx
  void *v12; // rax
  unsigned __int8 *v13; // rcx
  unsigned __int16 v15; // r9
  ULONG Tag; // ecx
  void *v17; // rax
  FX_POOL **v18; // rax
  __m128i v19; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v6 = MajorFunction;
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v9 = DeviceInit->DriverGlobals;
  if ( !EvtDeviceWdmIrpPreprocess )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( NumMinorFunctions && !MinorFunctions )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( MajorFunction >= 0x1Cu )
  {
    WPP_IFR_SF_(v9, 2u, 0x12u, 0x1Eu, WPP_FxDeviceInitApi_cpp_Traceguids);
    return 3221225485LL;
  }
  PreprocessInfo = DeviceInit->PreprocessInfo;
  if ( !PreprocessInfo )
  {
    Tag = v9->Tag;
    v17 = retaddr;
    v19.m128i_i64[0] = 0LL;
    v19.m128i_i64[1] = 64LL;
    if ( !v9->FxPoolTrackingOn )
      v17 = 0LL;
    v18 = FxPoolAllocator(v9, &v9->FxPoolFrameworks, &v19, 0x2B8uLL, Tag, v17);
    if ( v18 )
    {
      FxIrpPreprocessInfo::FxIrpPreprocessInfo((FxIrpPreprocessInfo *)v18);
      DeviceInit->PreprocessInfo = PreprocessInfo;
      if ( PreprocessInfo )
        goto LABEL_6;
    }
    else
    {
      DeviceInit->PreprocessInfo = 0LL;
    }
    v15 = 31;
LABEL_15:
    WPP_IFR_SF_(v9, 2u, 0x12u, v15, WPP_FxDeviceInitApi_cpp_Traceguids);
    return 3221225626LL;
  }
LABEL_6:
  if ( !NumMinorFunctions )
  {
LABEL_12:
    DeviceInit->PreprocessInfo->Dispatch[v6].EvtDevicePreprocess = EvtDeviceWdmIrpPreprocess;
    return 0LL;
  }
  if ( !PreprocessInfo->Dispatch[v6].NumMinorFunctions )
  {
    v11 = v9->Tag;
    v12 = retaddr;
    v19.m128i_i64[0] = 0LL;
    v19.m128i_i64[1] = 64LL;
    if ( !v9->FxPoolTrackingOn )
      v12 = 0LL;
    DeviceInit->PreprocessInfo->Dispatch[v6].MinorFunctions = (unsigned __int8 *)FxPoolAllocator(
                                                                                   v9,
                                                                                   &v9->FxPoolFrameworks,
                                                                                   &v19,
                                                                                   NumMinorFunctions,
                                                                                   v11,
                                                                                   v12);
    v13 = DeviceInit->PreprocessInfo->Dispatch[v6].MinorFunctions;
    if ( v13 )
    {
      memmove(v13, MinorFunctions, NumMinorFunctions);
      DeviceInit->PreprocessInfo->Dispatch[v6].NumMinorFunctions = NumMinorFunctions;
      goto LABEL_12;
    }
    v15 = 33;
    goto LABEL_15;
  }
  WPP_IFR_SF_(v9, 2u, 0x12u, 0x20u, WPP_FxDeviceInitApi_cpp_Traceguids);
  return 3221225488LL;
}
