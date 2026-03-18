/*
 * XREFs of ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1401CF1A0
 * Callers:
 *     ?Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ @ 0x1401D0BA0 (-Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ.c)
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall CTDR_GDI_RESET_THREAD::GdiCalloutLoop(
        CTDR_GDI_RESET_THREAD *this,
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a2)
{
  unsigned int v2; // ebx
  bool v3; // zf
  __int64 v6; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v7; // r14
  enum _NT_PRODUCT_TYPE ProductType; // [rsp+30h] [rbp-29h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v10[3]; // [rsp+38h] [rbp-21h] BYREF
  _DWORD v11[2]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v12; // [rsp+58h] [rbp-1h]
  __int128 v13; // [rsp+60h] [rbp+7h]
  __int64 v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+80h] [rbp+27h]
  BOOL v17; // [rsp+84h] [rbp+2Bh]
  LONG Status; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]

  v2 = 0;
  v11[0] = 6;
  v15 = 0LL;
  v3 = a2->Param == 0;
  v12 = 0LL;
  v11[1] = 64;
  v17 = !v3;
  v14 = 0LL;
  v16 = 49;
  v19 = 0;
  LOBYTE(v10[0]) = 0;
  v13 = 0LL;
  CDisplayScenarioContextScope::ContextScopeConstructor(v10, 0LL, 0x4Cu, 0);
  v7 = v10[1];
  do
  {
    LOBYTE(v6) = 1;
    SMgrGdiCallout(
      a2,
      0x100000000LL,
      v6,
      &CTDR_GDI_RESET_THREAD::IsTdrAdapterUsedInSessionCallback,
      *((_QWORD *)this + 3),
      v7);
    if ( a2->Status == -1073741816 )
      ZwYieldExecution();
  }
  while ( a2->Status == -1073741816 );
  Status = a2->Status;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v11, 0x100000000uLL);
  ProductType = 0;
  RtlGetNtProductType(&ProductType);
  if ( ProductType != NtProductServer )
    v2 = a2->Status;
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v10);
  return v2;
}
