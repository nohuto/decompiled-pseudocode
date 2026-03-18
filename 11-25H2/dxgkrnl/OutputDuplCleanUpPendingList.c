/*
 * XREFs of OutputDuplCleanUpPendingList @ 0x1402E4F04
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1402E3F98 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1403403A8 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1402E51D0 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     _lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_ @ 0x1402E5BB8 (_lambda_e58e30cb45ac044955360754130b33ae_--_lambda_invoker_cdecl_.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140347540 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall OutputDuplCleanUpPendingList(struct DXGDEVICE *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  DXGGLOBAL *v5; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v7; // rcx
  OUTPUTDUPL_MGR *v8; // rcx
  struct DXGGLOBAL *Global; // rsi
  _QWORD **v10; // rsi
  _QWORD *i; // rbx
  __int64 v12; // rax
  const wchar_t *v13; // r9
  struct _KTHREAD **v14; // [rsp+50h] [rbp-38h] BYREF
  char v15; // [rsp+58h] [rbp-30h]
  _QWORD v16[4]; // [rsp+60h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 235);
  if ( !v1 )
  {
    v1 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
    if ( !v1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 11341;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pAdapter", 11341LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v3 = *(_QWORD *)(v1 + 3120);
  if ( !v3
    || (v4 = *(_QWORD *)(v3 + 120)) == 0
    || (int)lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_(v4, a1) >= 0 )
  {
    v16[0] = *(_QWORD *)(v1 + 412);
    v16[1] = lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_;
    v16[2] = a1;
    Global = DXGGLOBAL::GetGlobal();
    v15 = 0;
    v14 = (struct _KTHREAD **)((char *)Global + 1488);
    if ( Global == (struct DXGGLOBAL *)-1488LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v14[3] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v14);
    v10 = (_QWORD **)((char *)Global + 1536);
    for ( i = *v10;
          i != v10 && i && (int)lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_(i, v16) >= 0;
          i = (_QWORD *)*i )
    {
      ;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v14);
  }
  v5 = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(v5);
  if ( !SessionData )
  {
    WdLogSingleEntry0(2LL);
    v12 = 3951LL;
    v13 = L"DXGSESSIONDATA is NULL";
LABEL_23:
    WdLogGlobalForLineNumber = v12;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v13, v12, 0LL, 0LL, 0LL, 0LL);
    return;
  }
  v7 = *((_QWORD *)SessionData + 1);
  if ( !v7 )
  {
    WdLogSingleEntry0(2LL);
    v12 = 3958LL;
    v13 = L"OUTPUTDUPL_SESSION_MGR is NULL";
    goto LABEL_23;
  }
  v8 = *(OUTPUTDUPL_MGR **)(v7 + 120);
  if ( v8 )
    OUTPUTDUPL_MGR::CleanUpPendingList(v8, a1);
}
