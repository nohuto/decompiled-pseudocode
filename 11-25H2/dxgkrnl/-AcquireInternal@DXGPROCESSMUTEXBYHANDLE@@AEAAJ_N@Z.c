/*
 * XREFs of ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x14030A940
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x140182FD0 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x140188004 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1401AFCCC (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1401E8BB0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1401E8E30 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1401E95E0 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1401E9770 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkQueryStatisticsInternal @ 0x1402894D0 (DxgkQueryStatisticsInternal.c)
 *     DxgkTrimProcessCommitment @ 0x1403093F0 (DxgkTrimProcessCommitment.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x140309780 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkQueryVideoMemoryInfo @ 0x140309910 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x14030A210 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryProcessOfferInfo @ 0x14030A770 (DxgkQueryProcessOfferInfo.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x140408694 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1400389E4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPROCESSMUTEXBYHANDLE::AcquireInternal(DXGPROCESSMUTEXBYHANDLE *this, char a2)
{
  struct DXGGLOBAL *Global; // rax
  struct _KTHREAD **v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  ACCESS_MASK v9; // edi
  void *v10; // rbx
  NTSTATUS v11; // eax
  struct _KPROCESS *v12; // rdi
  __int64 v13; // rsi
  __int64 ProcessDxgProcess; // rsi
  int ProcessSessionId; // ebx
  __int64 v16; // rcx
  int *v17; // rbx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  int *v22; // rbx
  int *v24; // rbx
  __int64 CurrentProcess; // rax
  void *v26; // rbx
  struct _KTHREAD **v27; // [rsp+50h] [rbp-10h] BYREF
  char v28; // [rsp+58h] [rbp-8h]
  PVOID Object; // [rsp+A0h] [rbp+40h] BYREF
  LUID PrivilegeValue; // [rsp+B0h] [rbp+50h]

  Global = DXGGLOBAL::GetGlobal();
  v27 = (struct _KTHREAD **)((char *)Global + 368);
  v28 = 0;
  if ( Global == (struct DXGGLOBAL *)-368LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( v27[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = v27;
  KeEnterCriticalRegion();
  if ( v5[3] == KeGetCurrentThread() )
  {
    if ( *((int *)v5 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 521;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 521LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*((_DWORD *)v5 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5 + 1, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v8 = *((_DWORD *)v5 + 9);
        if ( v8 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventBlockThread, v7, v8);
      }
      _InterlockedAdd64((volatile signed __int64 *)v5 + 2, 1uLL);
      ExAcquirePushLockExclusiveEx(v5 + 1, 0LL);
    }
    if ( v5[3] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 547;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 547LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)v5 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 548;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 548LL, 0LL, 0LL, 0LL, 0LL);
    }
    v5[3] = KeGetCurrentThread();
    *((_DWORD *)v5 + 8) = 1;
  }
  v9 = *((_DWORD *)this + 6);
  v10 = (void *)*((_QWORD *)this + 1);
  v28 = 1;
  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal() + 49) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3083;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"DXGGLOBAL::GetGlobal()->IsProcessCalloutMutexOwner()",
      3083LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_WORD *)((char *)this + 29) = 0;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(v10, v9, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v12 = (struct _KPROCESS *)Object;
  v13 = v11;
  if ( v11 < 0 )
  {
    if ( (*((_DWORD *)DXGGLOBAL::GetGlobal() + 404) & 1) != 0 )
    {
      WdLogSingleEntry5(0LL, 275LL, 33LL, v13, 0LL, 0LL);
      WdLogGlobalForLineNumber = 3110;
    }
    WdLogSingleEntry1(3LL, v10);
    WdLogGlobalForLineNumber = 3113;
  }
  else
  {
    if ( !Object )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3117;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pEProcess", 3117LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (unsigned __int8)PsGetProcessExitProcessCalled(v12) )
    {
      LODWORD(v13) = -1073741558;
      WdLogSingleEntry3(4LL, v12, v10, -1073741558LL);
      WdLogGlobalForLineNumber = 3122;
    }
    else
    {
      ProcessDxgProcess = PsGetProcessDxgProcess(v12);
      if ( ProcessDxgProcess )
      {
        ProcessSessionId = PsGetProcessSessionId(v12);
        if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId() )
        {
          if ( a2 )
          {
            CurrentProcess = PsGetCurrentProcess(v16);
            WdLogSingleEntry2(3LL, CurrentProcess, v12);
            WdLogGlobalForLineNumber = 3161;
          }
          else
          {
            PrivilegeValue = (LUID)14LL;
            *((_BYTE *)this + 30) = SeSinglePrivilegeCheck((LUID)14LL, 1) != 0;
            KeStackAttachProcess(v12, (PRKAPC_STATE)((char *)this + 32));
            *((_BYTE *)this + 29) = 1;
          }
        }
        if ( *(struct _KPROCESS **)(ProcessDxgProcess + 56) != v12 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3177;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"pDxgProcess->GetEProcess() == pEProcess",
            3177LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        _InterlockedAdd64((volatile signed __int64 *)(ProcessDxgProcess + 32), 1uLL);
        if ( *(__int64 *)(ProcessDxgProcess + 32) <= 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1152;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_ReferenceCount > 0", 1152LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( !v28 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, &v27, 0LL, 0LL);
          WdLogGlobalForLineNumber = 695;
        }
        v17 = (int *)v27;
        v28 = 0;
        if ( v27[3] != KeGetCurrentThread() )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v27, 0LL, 0LL);
          WdLogGlobalForLineNumber = 570;
        }
        if ( v17[8] <= 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 573;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
        }
        v18 = v17[8]-- == 1;
        if ( v18 )
        {
          *((_QWORD *)v17 + 3) = 0LL;
          ExReleasePushLockExclusiveEx(v17 + 2, 0LL);
        }
        KeLeaveCriticalRegion();
        if ( *(struct _KTHREAD **)(ProcessDxgProcess + 128) == KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3253;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"!pProcess->IsMutexOwner()",
            3253LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( *((_BYTE *)this + 28) )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
          WdLogGlobalForLineNumber = 3258;
        }
        KeEnterCriticalRegion();
        if ( *(struct _KTHREAD **)(ProcessDxgProcess + 128) == KeGetCurrentThread() )
        {
          if ( *(int *)(ProcessDxgProcess + 136) <= 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 521;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 521LL, 0LL, 0LL, 0LL, 0LL);
          }
          ++*(_DWORD *)(ProcessDxgProcess + 136);
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(ProcessDxgProcess + 112, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v21 = *(_DWORD *)(ProcessDxgProcess + 140);
              if ( v21 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventBlockThread, v20, v21);
            }
            _InterlockedAdd64((volatile signed __int64 *)(ProcessDxgProcess + 120), 1uLL);
            ExAcquirePushLockExclusiveEx(ProcessDxgProcess + 112, 0LL);
          }
          if ( *(_QWORD *)(ProcessDxgProcess + 128) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 547;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 547LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( *(_DWORD *)(ProcessDxgProcess + 136) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 548;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"0 == m_OwnerAcquireCount",
              548LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_QWORD *)(ProcessDxgProcess + 128) = KeGetCurrentThread();
          *(_DWORD *)(ProcessDxgProcess + 136) = 1;
        }
        if ( *(_DWORD *)(ProcessDxgProcess + 40) == 1 )
        {
          *((_QWORD *)this + 2) = ProcessDxgProcess;
          *((_BYTE *)this + 28) = 1;
          if ( v28 )
          {
            v22 = (int *)v27;
            v28 = 0;
            if ( v27[3] != KeGetCurrentThread() )
            {
              WdLogSingleEntry5(0LL, 275LL, 4LL, v27, 0LL, 0LL);
              WdLogGlobalForLineNumber = 570;
            }
            if ( v22[8] <= 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 573;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"m_OwnerAcquireCount > 0",
                573LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v18 = v22[8]-- == 1;
            if ( v18 )
            {
              *((_QWORD *)v22 + 3) = 0LL;
              ExReleasePushLockExclusiveEx(v22 + 2, 0LL);
            }
            KeLeaveCriticalRegion();
          }
          return 0LL;
        }
        else
        {
          DXGFASTMUTEX::Release((struct _KTHREAD **)(ProcessDxgProcess + 104));
          v26 = *(void **)(ProcessDxgProcess + 56);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v27);
          DXGPROCESS::ReleaseReference((DXGPROCESS *)ProcessDxgProcess);
          if ( *((_BYTE *)this + 29) )
          {
            KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 32));
            *((_BYTE *)this + 29) = 0;
          }
          ObfDereferenceObject(v26);
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v27);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v27);
          return 3221226166LL;
        }
      }
      WdLogSingleEntry1(4LL, v12);
      WdLogGlobalForLineNumber = 3134;
      LODWORD(v13) = -1073741811;
    }
    ObfDereferenceObject(v12);
  }
  if ( v28 )
  {
    v24 = (int *)v27;
    v28 = 0;
    if ( v27[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v27, 0LL, 0LL);
      WdLogGlobalForLineNumber = 570;
    }
    if ( v24[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 573;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 573LL, 0LL, 0LL, 0LL, 0LL);
    }
    v18 = v24[8]-- == 1;
    if ( v18 )
    {
      *((_QWORD *)v24 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v24 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v13;
}
