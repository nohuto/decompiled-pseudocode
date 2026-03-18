/*
 * XREFs of ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x14033A568
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x140182FD0 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1401E95E0 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x14028A734 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x140309780 (DxgkGetProcessSchedulingPriorityClass.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x140408694 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::Release(DXGPROCESSMUTEXBYHANDLE *this)
{
  __int64 v2; // rbx
  bool v3; // zf
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rbx
  void *v6; // rsi
  int *v7; // rbx
  int *v8; // rbx
  struct _KTHREAD **v9; // [rsp+50h] [rbp-10h] BYREF
  char v10; // [rsp+58h] [rbp-8h]

  if ( !*((_BYTE *)this + 28) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 3311;
  }
  v2 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 28) = 0;
  if ( *(struct _KTHREAD **)(v2 + 128) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v2 + 104, 0LL, 0LL);
    WdLogGlobalForLineNumber = 570;
  }
  if ( *(int *)(v2 + 136) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 573;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = (*(_DWORD *)(v2 + 136))-- == 1;
  if ( v3 )
  {
    *(_QWORD *)(v2 + 128) = 0LL;
    ExReleasePushLockExclusiveEx(v2 + 112, 0LL);
  }
  KeLeaveCriticalRegion();
  Global = DXGGLOBAL::GetGlobal();
  v10 = 0;
  v9 = (struct _KTHREAD **)((char *)Global + 368);
  if ( Global == (struct DXGGLOBAL *)-368LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v9[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v9);
  v5 = *((_QWORD *)this + 2);
  v6 = *(void **)(v5 + 56);
  if ( *(__int64 *)(v5 + 32) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1165;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_ReferenceCount > 0", 1165LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 && v5 )
    (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((_BYTE *)this + 29) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 32));
    *((_BYTE *)this + 29) = 0;
  }
  ObfDereferenceObject(v6);
  if ( !v10 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v9, 0LL, 0LL);
    WdLogGlobalForLineNumber = 695;
  }
  v7 = (int *)v9;
  v10 = 0;
  if ( v9[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v9, 0LL, 0LL);
    WdLogGlobalForLineNumber = 570;
  }
  if ( v7[8] <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 573;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = v7[8]-- == 1;
  if ( v3 )
  {
    *((_QWORD *)v7 + 3) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 2, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v10 )
  {
    v8 = (int *)v9;
    v10 = 0;
    if ( v9[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v9, 0LL, 0LL);
      WdLogGlobalForLineNumber = 570;
    }
    if ( v8[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 573;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
    }
    v3 = v8[8]-- == 1;
    if ( v3 )
    {
      *((_QWORD *)v8 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
