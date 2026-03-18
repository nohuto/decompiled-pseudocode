/*
 * XREFs of ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x14030650C
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019AB14 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     OutputDuplProcessTerminateForWddm @ 0x140306368 (OutputDuplProcessTerminateForWddm.c)
 *     OutputDuplProcessDestroyDevice @ 0x1403064C0 (OutputDuplProcessDestroyDevice.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     _lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_ @ 0x1403067FC (_lambda_e58e30cb45ac044955360754130b33ae_--_lambda_invoker_cdecl_.c)
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
  struct _KTHREAD **v10; // rcx
  _QWORD **v11; // rsi
  _QWORD *i; // rbx
  int *v13; // rbx
  int v15; // edi
  struct _KTHREAD **v16; // [rsp+50h] [rbp-30h] BYREF
  char v17; // [rsp+58h] [rbp-28h]
  _QWORD v18[4]; // [rsp+60h] [rbp-20h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11486;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pAdapter", 11486LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = *((_QWORD *)a1 + 390);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 120)) == 0 || (result = a2(v7, a3), (int)result >= 0) )
  {
    v18[0] = *(_QWORD *)((char *)a1 + 412);
    v18[1] = a2;
    v18[2] = a3;
    Global = DXGGLOBAL::GetGlobal();
    v17 = 0;
    v10 = (struct _KTHREAD **)((char *)Global + 1520);
    v16 = (struct _KTHREAD **)((char *)Global + 1520);
    if ( Global == (struct DXGGLOBAL *)-1520LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 637;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
      v10 = v16;
    }
    if ( v10[3] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 644;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v16);
    v11 = (_QWORD **)((char *)Global + 1568);
    for ( i = *v11; i != v11 && i; i = (_QWORD *)*i )
    {
      v15 = lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_(i, v18);
      if ( v15 < 0 )
      {
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v16);
        return (unsigned int)v15;
      }
    }
    if ( v17 )
    {
      v13 = (int *)v16;
      v17 = 0;
      if ( v16[3] != KeGetCurrentThread() )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v16, 0LL, 0LL);
        WdLogGlobalForLineNumber = 568;
      }
      if ( v13[8] <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 571;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 571LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( v13[8]-- == 1 )
      {
        *((_QWORD *)v13 + 3) = 0LL;
        ExReleasePushLockExclusiveEx(v13 + 2, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    return 0;
  }
  return result;
}
