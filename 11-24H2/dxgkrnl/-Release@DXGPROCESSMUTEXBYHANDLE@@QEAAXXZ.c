/*
 * XREFs of ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1402984DC
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x140185320 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1401EF060 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x140296CF8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1403ECBA0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x140400F4C (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::Release(DXGPROCESSMUTEXBYHANDLE *this)
{
  __int64 v2; // rbx
  bool v3; // zf
  struct DXGGLOBAL *Global; // rax
  struct _KTHREAD **v5; // rcx
  __int64 v6; // rbx
  void *v7; // rsi
  int *v8; // rbx
  int *v9; // rbx
  struct _KTHREAD **v10; // [rsp+50h] [rbp-10h] BYREF
  char v11; // [rsp+58h] [rbp-8h]

  if ( !*((_BYTE *)this + 28) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 3312;
  }
  v2 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 28) = 0;
  if ( *(struct _KTHREAD **)(v2 + 128) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v2 + 104, 0LL, 0LL);
    WdLogGlobalForLineNumber = 568;
  }
  if ( *(int *)(v2 + 136) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 571;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 571LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = (*(_DWORD *)(v2 + 136))-- == 1;
  if ( v3 )
  {
    *(_QWORD *)(v2 + 128) = 0LL;
    ExReleasePushLockExclusiveEx(v2 + 112, 0LL);
  }
  KeLeaveCriticalRegion();
  Global = DXGGLOBAL::GetGlobal();
  v11 = 0;
  v5 = (struct _KTHREAD **)((char *)Global + 368);
  v10 = (struct _KTHREAD **)((char *)Global + 368);
  if ( Global == (struct DXGGLOBAL *)-368LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v5 = v10;
  }
  if ( v5[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v10);
  v6 = *((_QWORD *)this + 2);
  v7 = *(void **)(v6 + 56);
  if ( *(__int64 *)(v6 + 32) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1143;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_ReferenceCount > 0", 1143LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 && v6 )
    (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((_BYTE *)this + 29) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 32));
    *((_BYTE *)this + 29) = 0;
  }
  ObfDereferenceObject(v7);
  if ( !v11 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v10, 0LL, 0LL);
    WdLogGlobalForLineNumber = 694;
  }
  v8 = (int *)v10;
  v11 = 0;
  if ( v10[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v10, 0LL, 0LL);
    WdLogGlobalForLineNumber = 568;
  }
  if ( v8[8] <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 571;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 571LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = v8[8]-- == 1;
  if ( v3 )
  {
    *((_QWORD *)v8 + 3) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 2, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v11 )
  {
    v9 = (int *)v10;
    v11 = 0;
    if ( v10[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v10, 0LL, 0LL);
      WdLogGlobalForLineNumber = 568;
    }
    if ( v9[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 571;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 571LL, 0LL, 0LL, 0LL, 0LL);
    }
    v3 = v9[8]-- == 1;
    if ( v3 )
    {
      *((_QWORD *)v9 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v9 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
