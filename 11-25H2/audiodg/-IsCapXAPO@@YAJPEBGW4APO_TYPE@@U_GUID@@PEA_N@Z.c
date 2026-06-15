/*
 * XREFs of ?IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z @ 0x140043EBC
 * Callers:
 *     ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@@@Z @ 0x140016780 (-GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateApoInstance@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x140043FE0 (-CreateApoInstance@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?TryGetCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects3@@@Z @ 0x14004408C (-TryGetCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffect.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall IsCapXAPO(__int64 a1, __int64 a2, __int128 *a3, bool *a4)
{
  unsigned int v6; // r14d
  int v8; // eax
  unsigned int v9; // ebx
  int CapXAPO; // eax
  __int64 v11; // rcx
  bool v12; // zf
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v16; // [rsp+80h] [rbp+40h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  v6 = a2;
  *a4 = 0;
  v16 = 0LL;
  v14 = *a3;
  v8 = CreateApoInstance(a1, a2, &v14, &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
      (const char *)(unsigned int)v8);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    return v9;
  }
  v17 = 0LL;
  v14 = *a3;
  CapXAPO = TryGetCapXAPO(a1, v6, &v14, v16, &v17);
  v9 = CapXAPO;
  if ( CapXAPO < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
      (const char *)(unsigned int)CapXAPO);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v17);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v16);
    return v9;
  }
  v11 = v17;
  v12 = v17 == 0;
  *a4 = v17 != 0;
  if ( !v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return 0LL;
}
