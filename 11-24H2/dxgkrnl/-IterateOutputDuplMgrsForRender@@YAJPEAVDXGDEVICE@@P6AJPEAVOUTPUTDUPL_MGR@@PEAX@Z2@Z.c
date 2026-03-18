/*
 * XREFs of ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGDEVICE@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1402CE84C
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402CE23C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     _lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_ @ 0x1403067FC (_lambda_e58e30cb45ac044955360754130b33ae_--_lambda_invoker_cdecl_.c)
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
  struct _KTHREAD **v11; // rdx
  _QWORD **v12; // rsi
  _QWORD *i; // rbx
  struct _KTHREAD **v14; // [rsp+50h] [rbp-38h] BYREF
  char v15; // [rsp+58h] [rbp-30h]
  _QWORD v16[4]; // [rsp+60h] [rbp-28h] BYREF

  v3 = *((_QWORD *)a1 + 237);
  if ( !v3 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
    if ( !v3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 11486;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pAdapter", 11486LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v6 = *(_QWORD *)(v3 + 3120);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 120)) == 0 || (v8 = a2(v7, a3), v8 >= 0) )
  {
    v16[0] = *(_QWORD *)(v3 + 412);
    v16[1] = a2;
    v16[2] = a3;
    Global = DXGGLOBAL::GetGlobal();
    v15 = 0;
    v11 = (struct _KTHREAD **)((char *)Global + 1520);
    v14 = (struct _KTHREAD **)((char *)Global + 1520);
    if ( Global == (struct DXGGLOBAL *)-1520LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 637;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
      v11 = v14;
    }
    if ( v11[3] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 644;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v14);
    v12 = (_QWORD **)((char *)Global + 1568);
    for ( i = *v12; i != v12 && i; i = (_QWORD *)*i )
    {
      v8 = lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_(i, v16);
      if ( v8 < 0 )
        goto LABEL_15;
    }
    v8 = 0;
LABEL_15:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v14);
  }
  return (unsigned int)v8;
}
