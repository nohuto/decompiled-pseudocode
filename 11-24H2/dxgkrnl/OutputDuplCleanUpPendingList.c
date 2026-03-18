/*
 * XREFs of OutputDuplCleanUpPendingList @ 0x140305E44
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x140304ED8 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14032FBB8 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x140306110 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     _lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_ @ 0x1403067FC (_lambda_e58e30cb45ac044955360754130b33ae_--_lambda_invoker_cdecl_.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403356F4 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
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
  struct _KTHREAD **v10; // rdx
  _QWORD **v11; // rsi
  _QWORD *i; // rbx
  __int64 v13; // rax
  const wchar_t *v14; // r9
  struct _KTHREAD **v15; // [rsp+50h] [rbp-38h] BYREF
  char v16; // [rsp+58h] [rbp-30h]
  _QWORD v17[4]; // [rsp+60h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 237);
  if ( !v1 )
  {
    v1 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
    if ( !v1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 11486;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pAdapter", 11486LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v3 = *(_QWORD *)(v1 + 3120);
  if ( !v3
    || (v4 = *(_QWORD *)(v3 + 120)) == 0
    || (int)lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_(v4, a1) >= 0 )
  {
    v17[0] = *(_QWORD *)(v1 + 412);
    v17[1] = lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_;
    v17[2] = a1;
    Global = DXGGLOBAL::GetGlobal();
    v16 = 0;
    v10 = (struct _KTHREAD **)((char *)Global + 1520);
    v15 = (struct _KTHREAD **)((char *)Global + 1520);
    if ( Global == (struct DXGGLOBAL *)-1520LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 637;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
      v10 = v15;
    }
    if ( v10[3] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 644;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v15);
    v11 = (_QWORD **)((char *)Global + 1568);
    for ( i = *v11;
          i != v11 && i && (int)lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_(i, v17) >= 0;
          i = (_QWORD *)*i )
    {
      ;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v15);
  }
  v5 = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(v5);
  if ( !SessionData )
  {
    WdLogSingleEntry0(2LL);
    v13 = 3957LL;
    v14 = L"DXGSESSIONDATA is NULL";
LABEL_23:
    WdLogGlobalForLineNumber = v13;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v14, v13, 0LL, 0LL, 0LL, 0LL);
    return;
  }
  v7 = *((_QWORD *)SessionData + 1);
  if ( !v7 )
  {
    WdLogSingleEntry0(2LL);
    v13 = 3964LL;
    v14 = L"OUTPUTDUPL_SESSION_MGR is NULL";
    goto LABEL_23;
  }
  v8 = *(OUTPUTDUPL_MGR **)(v7 + 120);
  if ( v8 )
    OUTPUTDUPL_MGR::CleanUpPendingList(v8, a1);
}
