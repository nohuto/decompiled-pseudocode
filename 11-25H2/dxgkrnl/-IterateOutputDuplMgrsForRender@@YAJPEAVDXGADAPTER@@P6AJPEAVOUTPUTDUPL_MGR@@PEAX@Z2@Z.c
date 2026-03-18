/*
 * XREFs of ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1402E58C8
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140198688 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     OutputDuplProcessTerminateForWddm @ 0x1402E5770 (OutputDuplProcessTerminateForWddm.c)
 *     OutputDuplProcessDestroyDevice @ 0x1402E5BFC (OutputDuplProcessDestroyDevice.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     _lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_ @ 0x1402E5BB8 (_lambda_e58e30cb45ac044955360754130b33ae_--_lambda_invoker_cdecl_.c)
 */

__int64 __fastcall IterateOutputDuplMgrsForRender(
        struct DXGADAPTER *a1,
        __int64 (__fastcall *a2)(__int64, void *),
        void *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  struct DXGGLOBAL *Global; // rsi
  _QWORD **v10; // rsi
  _QWORD *i; // rbx
  int *v12; // rbx
  int v14; // edi
  struct _KTHREAD **v15; // [rsp+50h] [rbp-30h] BYREF
  char v16; // [rsp+58h] [rbp-28h]
  _QWORD v17[4]; // [rsp+60h] [rbp-20h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11341;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pAdapter", 11341LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = *((_QWORD *)a1 + 390);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 120)) == 0 || (result = a2(v7, a3), (int)result >= 0) )
  {
    v17[0] = *(_QWORD *)((char *)a1 + 412);
    v17[1] = a2;
    v17[2] = a3;
    Global = DXGGLOBAL::GetGlobal();
    v16 = 0;
    v15 = (struct _KTHREAD **)((char *)Global + 1488);
    if ( Global == (struct DXGGLOBAL *)-1488LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v15[3] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v15);
    v10 = (_QWORD **)((char *)Global + 1536);
    for ( i = *v10; i != v10 && i; i = (_QWORD *)*i )
    {
      v14 = lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_(i, v17);
      if ( v14 < 0 )
      {
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v15);
        return (unsigned int)v14;
      }
    }
    if ( v16 )
    {
      v12 = (int *)v15;
      v16 = 0;
      if ( v15[3] != KeGetCurrentThread() )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v15, 0LL, 0LL);
        WdLogGlobalForLineNumber = 570;
      }
      if ( v12[8] <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 573;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( v12[8]-- == 1 )
      {
        *((_QWORD *)v12 + 3) = 0LL;
        ExReleasePushLockExclusiveEx(v12 + 2, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    return 0;
  }
  return result;
}
