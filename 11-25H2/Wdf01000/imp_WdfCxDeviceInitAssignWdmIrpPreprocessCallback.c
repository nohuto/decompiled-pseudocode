/*
 * XREFs of imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x140077190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x140066694 (--0FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     FxValiateCx @ 0x1400773FC (FxValiateCx.c)
 *     WPP_IFR_SF_Dd @ 0x140080544 (WPP_IFR_SF_Dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

__int64 __fastcall imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        int (__fastcall *EvtCxDeviceWdmIrpPreprocess)(WDFDEVICE__ *, _IRP *),
        unsigned __int8 MajorFunction,
        unsigned __int8 *MinorFunctions,
        unsigned int NumMinorFunctions)
{
  _FX_DRIVER_GLOBALS *v6; // rcx
  __int64 _a1; // rbp
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rbx
  unsigned int v11; // edi
  FxIrpPreprocessInfo **p_PreprocessInfo; // r14
  bool v13; // zf
  ULONG Tag; // ecx
  void *v15; // rax
  FxIrpPreprocessInfo *v16; // rax
  unsigned __int16 v17; // r9
  FxIrpPreprocessInfo **v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rbp
  ULONG v21; // ecx
  void *v22; // rax
  unsigned __int8 *v23; // rcx
  __int64 v24; // rcx
  __m128i v26; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v6 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  _a1 = MajorFunction;
  if ( !CxDeviceInit )
    FxVerifierNullBugCheck(v6, retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  v11 = FxValiateCx(ClientDriverGlobals, v6);
  if ( (v11 & 0x80000000) == 0 )
  {
    if ( !EvtCxDeviceWdmIrpPreprocess )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( NumMinorFunctions && !MinorFunctions )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( (unsigned __int8)_a1 >= 0x1Cu )
    {
      v11 = -1073741811;
      WPP_IFR_SF_Dd(ClientDriverGlobals, 2u, 0x12u, 0xBu, WPP_FxCxDeviceInitApi_cpp_Traceguids, _a1, -1073741811);
      return v11;
    }
    p_PreprocessInfo = &CxDeviceInit->PreprocessInfo;
    if ( CxDeviceInit->PreprocessInfo )
    {
      v18 = &CxDeviceInit->PreprocessInfo;
    }
    else
    {
      v13 = ClientDriverGlobals->FxPoolTrackingOn == 0;
      Tag = ClientDriverGlobals->Tag;
      v26.m128i_i64[0] = 0LL;
      v26.m128i_i64[1] = 64LL;
      if ( v13 )
        v15 = 0LL;
      else
        v15 = retaddr;
      v16 = (FxIrpPreprocessInfo *)FxPoolAllocator(
                                     ClientDriverGlobals,
                                     &ClientDriverGlobals->FxPoolFrameworks,
                                     &v26,
                                     0x2B8uLL,
                                     Tag,
                                     v15);
      if ( v16 )
        FxIrpPreprocessInfo::FxIrpPreprocessInfo(v16);
      *p_PreprocessInfo = v16;
      if ( !v16 )
      {
        v11 = -1073741670;
        v17 = 12;
LABEL_19:
        WPP_IFR_SF_D(ClientDriverGlobals, 2u, 0x12u, v17, WPP_FxCxDeviceInitApi_cpp_Traceguids, 0xC000009A);
        return v11;
      }
      v16->ClassExtension = 1;
      v18 = &CxDeviceInit->PreprocessInfo;
    }
    v19 = _a1;
    if ( NumMinorFunctions )
    {
      v20 = _a1;
      if ( (*p_PreprocessInfo)->Dispatch[v20].NumMinorFunctions )
      {
        v11 = -1073741808;
        WPP_IFR_SF_D(ClientDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxCxDeviceInitApi_cpp_Traceguids, 0xC0000010);
        return v11;
      }
      v13 = ClientDriverGlobals->FxPoolTrackingOn == 0;
      v21 = ClientDriverGlobals->Tag;
      v26.m128i_i64[0] = 0LL;
      v26.m128i_i64[1] = 64LL;
      if ( v13 )
        v22 = 0LL;
      else
        v22 = retaddr;
      (*v18)->Dispatch[v20].MinorFunctions = (unsigned __int8 *)FxPoolAllocator(
                                                                  ClientDriverGlobals,
                                                                  &ClientDriverGlobals->FxPoolFrameworks,
                                                                  &v26,
                                                                  NumMinorFunctions,
                                                                  v21,
                                                                  v22);
      v23 = (*v18)->Dispatch[v20].MinorFunctions;
      if ( !v23 )
      {
        v11 = -1073741670;
        v17 = 14;
        goto LABEL_19;
      }
      memmove(v23, MinorFunctions, NumMinorFunctions);
      (*v18)->Dispatch[v20].NumMinorFunctions = NumMinorFunctions;
    }
    v24 = v19;
    v11 = 0;
    (*v18)->Dispatch[v24].EvtDevicePreprocess = EvtCxDeviceWdmIrpPreprocess;
  }
  return v11;
}
