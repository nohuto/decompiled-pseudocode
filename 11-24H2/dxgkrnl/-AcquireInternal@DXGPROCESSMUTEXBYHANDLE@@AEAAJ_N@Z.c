/*
 * XREFs of ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x140298BC0
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x140185320 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x14018A314 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1401B227C (DxgkChangeVideoMemoryReservationInternal.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1401EE5D0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1401EE850 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1401EF060 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1401EF1F0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkQueryStatisticsInternal @ 0x140295A90 (DxgkQueryStatisticsInternal.c)
 *     DxgkQueryProcessOfferInfo @ 0x1402989F0 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1402997B0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryVideoMemoryInfo @ 0x14034FC90 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1403ECBA0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkTrimProcessCommitment @ 0x1403ED910 (DxgkTrimProcessCommitment.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x140400F4C (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x140038670 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPROCESSMUTEXBYHANDLE::AcquireInternal(DXGPROCESSMUTEXBYHANDLE *this, char a2)
{
  struct DXGGLOBAL *Global; // rax
  struct _KTHREAD **v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  ACCESS_MASK v10; // edi
  void *v11; // rbx
  NTSTATUS v12; // eax
  struct _KPROCESS *v13; // rdi
  __int64 v14; // rsi
  __int64 ProcessDxgProcess; // rsi
  int ProcessSessionId; // ebx
  __int64 v17; // rcx
  int *v18; // rbx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r9d
  int *v23; // rbx
  int *v25; // rbx
  __int64 CurrentProcess; // rax
  void *v27; // rbx
  struct _KTHREAD **v28; // [rsp+50h] [rbp-10h] BYREF
  char v29; // [rsp+58h] [rbp-8h]
  PVOID Object; // [rsp+A0h] [rbp+40h] BYREF
  LUID PrivilegeValue; // [rsp+B0h] [rbp+50h]

  Global = DXGGLOBAL::GetGlobal();
  v29 = 0;
  v5 = (struct _KTHREAD **)((char *)Global + 368);
  v28 = (struct _KTHREAD **)((char *)Global + 368);
  if ( Global == (struct DXGGLOBAL *)-368LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v5 = v28;
  }
  if ( v5[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = v28;
  KeEnterCriticalRegion();
  if ( v6[3] == KeGetCurrentThread() )
  {
    if ( *((int *)v6 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 519;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 519LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*((_DWORD *)v6 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6 + 1, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v9 = *((_DWORD *)v6 + 9);
        if ( v9 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventBlockThread, v8, v9);
      }
      _InterlockedAdd64((volatile signed __int64 *)v6 + 2, 1uLL);
      ExAcquirePushLockExclusiveEx(v6 + 1, 0LL);
    }
    if ( v6[3] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 545;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 545LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)v6 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 546;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 546LL, 0LL, 0LL, 0LL, 0LL);
    }
    v6[3] = KeGetCurrentThread();
    *((_DWORD *)v6 + 8) = 1;
  }
  v10 = *((_DWORD *)this + 6);
  v11 = (void *)*((_QWORD *)this + 1);
  v29 = 1;
  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal() + 49) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3084;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"DXGGLOBAL::GetGlobal()->IsProcessCalloutMutexOwner()",
      3084LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_WORD *)((char *)this + 29) = 0;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(v11, v10, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v13 = (struct _KPROCESS *)Object;
  v14 = v12;
  if ( v12 < 0 )
  {
    if ( (*((_DWORD *)DXGGLOBAL::GetGlobal() + 412) & 1) != 0 )
    {
      WdLogSingleEntry5(0LL, 275LL, 33LL, v14, 0LL, 0LL);
      WdLogGlobalForLineNumber = 3111;
    }
    WdLogSingleEntry1(3LL, v11);
    WdLogGlobalForLineNumber = 3114;
  }
  else
  {
    if ( !Object )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3118;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pEProcess", 3118LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (unsigned __int8)PsGetProcessExitProcessCalled(v13) )
    {
      LODWORD(v14) = -1073741558;
      WdLogSingleEntry3(4LL, v13, v11, -1073741558LL);
      WdLogGlobalForLineNumber = 3123;
    }
    else
    {
      ProcessDxgProcess = PsGetProcessDxgProcess(v13);
      if ( ProcessDxgProcess )
      {
        ProcessSessionId = PsGetProcessSessionId(v13);
        if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId() )
        {
          if ( a2 )
          {
            CurrentProcess = PsGetCurrentProcess(v17);
            WdLogSingleEntry2(3LL, CurrentProcess, v13);
            WdLogGlobalForLineNumber = 3162;
          }
          else
          {
            PrivilegeValue = (LUID)14LL;
            *((_BYTE *)this + 30) = SeSinglePrivilegeCheck((LUID)14LL, 1) != 0;
            KeStackAttachProcess(v13, (PRKAPC_STATE)((char *)this + 32));
            *((_BYTE *)this + 29) = 1;
          }
        }
        if ( *(struct _KPROCESS **)(ProcessDxgProcess + 56) != v13 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3178;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"pDxgProcess->GetEProcess() == pEProcess",
            3178LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        _InterlockedAdd64((volatile signed __int64 *)(ProcessDxgProcess + 32), 1uLL);
        if ( *(__int64 *)(ProcessDxgProcess + 32) <= 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1130;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_ReferenceCount > 0", 1130LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( !v29 )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, &v28, 0LL, 0LL);
          WdLogGlobalForLineNumber = 694;
        }
        v18 = (int *)v28;
        v29 = 0;
        if ( v28[3] != KeGetCurrentThread() )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, v28, 0LL, 0LL);
          WdLogGlobalForLineNumber = 568;
        }
        if ( v18[8] <= 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 571;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 571LL, 0LL, 0LL, 0LL, 0LL);
        }
        v19 = v18[8]-- == 1;
        if ( v19 )
        {
          *((_QWORD *)v18 + 3) = 0LL;
          ExReleasePushLockExclusiveEx(v18 + 2, 0LL);
        }
        KeLeaveCriticalRegion();
        if ( *(struct _KTHREAD **)(ProcessDxgProcess + 128) == KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3254;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"!pProcess->IsMutexOwner()",
            3254LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( *((_BYTE *)this + 28) )
        {
          WdLogSingleEntry5(0LL, 275LL, 4LL, this, 0LL, 0LL);
          WdLogGlobalForLineNumber = 3259;
        }
        KeEnterCriticalRegion();
        if ( *(struct _KTHREAD **)(ProcessDxgProcess + 128) == KeGetCurrentThread() )
        {
          if ( *(int *)(ProcessDxgProcess + 136) <= 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 519;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"m_OwnerAcquireCount > 0",
              519LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          ++*(_DWORD *)(ProcessDxgProcess + 136);
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(ProcessDxgProcess + 112, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v22 = *(_DWORD *)(ProcessDxgProcess + 140);
              if ( v22 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventBlockThread, v21, v22);
            }
            _InterlockedAdd64((volatile signed __int64 *)(ProcessDxgProcess + 120), 1uLL);
            ExAcquirePushLockExclusiveEx(ProcessDxgProcess + 112, 0LL);
          }
          if ( *(_QWORD *)(ProcessDxgProcess + 128) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 545;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"NULL == m_OwningThread",
              545LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *(_DWORD *)(ProcessDxgProcess + 136) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 546;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"0 == m_OwnerAcquireCount",
              546LL,
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
          if ( v29 )
          {
            v23 = (int *)v28;
            v29 = 0;
            if ( v28[3] != KeGetCurrentThread() )
            {
              WdLogSingleEntry5(0LL, 275LL, 4LL, v28, 0LL, 0LL);
              WdLogGlobalForLineNumber = 568;
            }
            if ( v23[8] <= 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 571;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"m_OwnerAcquireCount > 0",
                571LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v19 = v23[8]-- == 1;
            if ( v19 )
            {
              *((_QWORD *)v23 + 3) = 0LL;
              ExReleasePushLockExclusiveEx(v23 + 2, 0LL);
            }
            KeLeaveCriticalRegion();
          }
          return 0LL;
        }
        else
        {
          DXGFASTMUTEX::Release((struct _KTHREAD **)(ProcessDxgProcess + 104));
          v27 = *(void **)(ProcessDxgProcess + 56);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v28);
          DXGPROCESS::ReleaseReference((DXGPROCESS *)ProcessDxgProcess);
          if ( *((_BYTE *)this + 29) )
          {
            KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 32));
            *((_BYTE *)this + 29) = 0;
          }
          ObfDereferenceObject(v27);
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v28);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v28);
          return 3221226166LL;
        }
      }
      WdLogSingleEntry1(4LL, v13);
      WdLogGlobalForLineNumber = 3135;
      LODWORD(v14) = -1073741811;
    }
    ObfDereferenceObject(v13);
  }
  if ( v29 )
  {
    v25 = (int *)v28;
    v29 = 0;
    if ( v28[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v28, 0LL, 0LL);
      WdLogGlobalForLineNumber = 568;
    }
    if ( v25[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 571;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 571LL, 0LL, 0LL, 0LL, 0LL);
    }
    v19 = v25[8]-- == 1;
    if ( v19 )
    {
      *((_QWORD *)v25 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v25 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v14;
}
