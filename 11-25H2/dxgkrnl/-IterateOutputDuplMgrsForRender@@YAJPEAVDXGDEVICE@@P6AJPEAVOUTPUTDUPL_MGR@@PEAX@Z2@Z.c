/*
 * XREFs of ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGDEVICE@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x140335298
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140334CA4 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     _lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_ @ 0x1402E5BB8 (_lambda_e58e30cb45ac044955360754130b33ae_--_lambda_invoker_cdecl_.c)
 */

__int64 __fastcall IterateOutputDuplMgrsForRender(
        struct DXGDEVICE *a1,
        __int64 (__fastcall *a2)(__int64, void *),
        void *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // edi
  struct DXGGLOBAL *Global; // rsi
  _QWORD **v11; // rsi
  _QWORD *i; // rbx
  struct _KTHREAD **v13; // [rsp+50h] [rbp-38h] BYREF
  char v14; // [rsp+58h] [rbp-30h]
  _QWORD v15[4]; // [rsp+60h] [rbp-28h] BYREF

  v3 = *((_QWORD *)a1 + 235);
  if ( !v3 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
    if ( !v3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 11341;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pAdapter", 11341LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v6 = *(_QWORD *)(v3 + 3120);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 120)) == 0 || (v8 = a2(v7, a3), v8 >= 0) )
  {
    v15[0] = *(_QWORD *)(v3 + 412);
    v15[1] = a2;
    v15[2] = a3;
    Global = DXGGLOBAL::GetGlobal();
    v14 = 0;
    v13 = (struct _KTHREAD **)((char *)Global + 1488);
    if ( Global == (struct DXGGLOBAL *)-1488LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v13[3] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v13);
    v11 = (_QWORD **)((char *)Global + 1536);
    for ( i = *v11; i != v11 && i; i = (_QWORD *)*i )
    {
      v8 = lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_((__int64)i, (__int64)v15);
      if ( v8 < 0 )
        goto LABEL_15;
    }
    v8 = 0;
LABEL_15:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v13);
  }
  return (unsigned int)v8;
}
