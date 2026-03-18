/*
 * XREFs of ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x14002E4E4
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ @ 0x140193508 (-PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RecordEnteringIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x140063168 (-RecordEnteringIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x140077690 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentIdleStateCallback_Worker(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  char v4; // r12
  __int64 v5; // r14
  int v6; // r15d
  DXGADAPTER *v7; // rbp
  __int64 v8; // rsi
  char v9; // r13
  _BYTE *v10; // rbx
  char v11; // r14
  struct DXGTHREAD *v12; // r14
  struct DXGTHREAD *Current; // rax
  int v14; // eax
  KIRQL CurrentIrql; // al
  __int64 v16; // r13
  struct DXGTHREAD *v17; // r15
  struct DXGTHREAD *v18; // rax
  int v19; // r12d
  struct DXGGLOBAL *Global; // rbx
  int v21; // ecx
  struct DXGPROCESS *v22; // rax
  int v23; // ecx
  DXGGLOBAL *v24; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rcx
  KIRQL v29; // al
  __int64 v31; // rcx
  unsigned int v32; // r13d
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rsi
  __int64 *i; // rbx
  __int64 v37; // r12
  KIRQL v38; // al
  __int64 v39; // [rsp+20h] [rbp-F8h]
  char v40; // [rsp+60h] [rbp-B8h]
  unsigned int v42; // [rsp+64h] [rbp-B4h]
  int v44; // [rsp+6Ch] [rbp-ACh]
  unsigned int v45; // [rsp+70h] [rbp-A8h]
  __int64 v46; // [rsp+78h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-98h] BYREF
  char v48; // [rsp+98h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-78h] BYREF

  v4 = a4;
  v5 = a2;
  v6 = a3;
  v7 = this;
  v42 = a3;
  if ( *((_DWORD *)this + 50) == 1 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pqq_EtwWriteTransfer((__int64)this, (__int64)&Dxgk_SetPowerComponentFState, a3, this, a2, a3);
    v8 = *((_QWORD *)v7 + 403) + 520 * v5;
    if ( v4 || !*(_BYTE *)(v8 + 360) )
    {
      v9 = 1;
      if ( (*((int *)v7 + 684) >= 0x2000 || *((_BYTE *)v7 + 3036)) && *(_DWORD *)(v8 + 208) == 3 )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        *(_DWORD *)(v8 + 344) = v6;
      }
      v10 = (_BYTE *)(v8 + 359);
      *(_BYTE *)(v8 + 359) = 1;
      if ( v6 )
      {
        this = *(DXGADAPTER **)(v8 + 512);
        if ( this )
          DXGPOWERSTATISTICSTRANSITIONENGINE::RecordEnteringIdleFState((DXGADAPTER *)((char *)this + 136));
      }
      if ( v11 )
      {
        v12 = 0LL;
        v44 = -1;
        v45 = *(_DWORD *)(v8 + 4);
        v46 = qword_14015E4B0 & 2;
        if ( (qword_14015E4B0 & 2) != 0 )
        {
          v44 = 5124;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 5124);
        }
        if ( KeGetCurrentIrql() < 2u )
        {
          Current = DXGTHREAD::GetCurrent();
          v12 = Current;
          if ( Current )
          {
            if ( *((int *)Current + 13) < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 201;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"m_ProfilerEntryCount >= 0",
                201LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v14 = *((_DWORD *)v12 + 13);
            if ( !v14 )
              *((_DWORD *)v12 + 14) = 5124;
            *((_DWORD *)v12 + 13) = v14 + 1;
          }
        }
        _InterlockedIncrement((volatile signed __int32 *)v7 + 1201);
        CurrentIrql = KeGetCurrentIrql();
        v16 = CurrentIrql;
        v17 = 0LL;
        if ( CurrentIrql < 2u && (v18 = DXGTHREAD::GetCurrent(), (v17 = v18) != 0LL) )
          v19 = *((_DWORD *)v18 + 12);
        else
          v19 = 0;
        v48 = 0;
        if ( KeGetCurrentIrql() < 2u )
        {
          Global = DXGGLOBAL::GetGlobal();
          if ( *((_DWORD *)Global + 413) )
          {
            v21 = *((_DWORD *)v7 + 111);
            if ( (v21 & 0x20) == 0 && (v21 & 4) == 0 )
            {
              v22 = DXGPROCESS::GetCurrent();
              if ( v22 )
              {
                if ( (*((_BYTE *)v22 + 408) & 1) == 0 && (*((_DWORD *)v22 + 102) & 2) == 0 )
                {
                  v23 = *((_DWORD *)Global + 413);
                  if ( v23 == 2 || v23 == 1 && *((_BYTE *)v22 + 573) )
                  {
                    v24 = DXGGLOBAL::GetGlobal();
                    SessionData = DXGGLOBAL::GetSessionData(v24);
                    if ( SessionData )
                    {
                      v26 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2341);
                      if ( v26 )
                      {
                        KeStackAttachProcess(v26, &ApcState);
                        v48 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v27 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))v7 + 105))(*((_QWORD *)v7 + 36), v45, v42);
        if ( v48 )
          KeUnstackDetachProcess(&ApcState);
        if ( (_BYTE)v16 != KeGetCurrentIrql() )
        {
          v29 = KeGetCurrentIrql();
          WdLogSingleEntry5(0LL, 275LL, 16LL, v7, v16, v29);
          WdLogGlobalForLineNumber = 2564;
        }
        if ( v17 )
        {
          v28 = *((int *)v17 + 12);
          if ( (_DWORD)v28 != v19 )
          {
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v17 + 12), v19, 0LL);
            WdLogGlobalForLineNumber = 73;
          }
        }
        _InterlockedDecrement((volatile signed __int32 *)v7 + 1201);
        if ( (_DWORD)v27 != -1071775466 && (_DWORD)v27 )
        {
          WdLogSingleEntry1(2LL, v27);
          WdLogGlobalForLineNumber = 2566;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            v27,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v12 )
        {
          if ( *((int *)v12 + 13) <= 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 211;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"m_ProfilerEntryCount > 0",
              211LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (*((_DWORD *)v12 + 13))-- == 1 )
            *((_DWORD *)v12 + 14) = -1;
        }
        v10 = (_BYTE *)(v8 + 359);
        if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, a3, v44);
        v6 = v42;
        v4 = a4;
        v9 = 1;
      }
      LODWORD(v5) = a2;
    }
    else
    {
      v9 = 0;
      v10 = (_BYTE *)(v8 + 359);
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    {
      LODWORD(v39) = v5;
      McTemplateK0pt_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&Dxgk_SetPowerComponentFStateEnd,
        a3,
        v7,
        v39);
    }
    if ( (*(_DWORD *)(v8 + 216) & 2) == 0 )
    {
      *v10 = 0;
      if ( !v4 )
        PoFxCompleteIdleState(*((_QWORD *)v7 + 404), (unsigned int)v5);
      if ( v9 )
      {
        if ( !v6 )
        {
          v31 = *(_QWORD *)(v8 + 512);
          if ( v31 )
            DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v31 + 136));
        }
        if ( *(_DWORD *)(v8 + 208) == 7 )
        {
          v32 = *(_DWORD *)(v8 + 4);
          if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2605;
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  2605LL,
                  v33,
                  v34,
                  0LL,
                  2,
                  -1,
                  L"m_pGlobal != NULL",
                  45,
                  0,
                  0,
                  0,
                  0);
            }
          }
          v35 = *(_QWORD *)&DXGGLOBAL::m_pGlobal;
          v40 = 0;
          memset(&LockHandle, 0, sizeof(LockHandle));
          if ( KeGetCurrentIrql() >= 2u )
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v35 + 1752), &LockHandle);
          }
          else if ( *(struct _KTHREAD **)(v35 + 1768) != KeGetCurrentThread() )
          {
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v35 + 1760));
            v40 = 1;
          }
          for ( i = *(__int64 **)(v35 + 1792); i != (__int64 *)(v35 + 1792) && i; i = (__int64 *)*i )
          {
            if ( (DXGADAPTER *)i[4] == v7 && i[7] )
            {
              v37 = KeGetCurrentIrql();
              ((void (__fastcall *)(DXGADAPTER *, _QWORD, _QWORD, _QWORD, __int64))i[7])(v7, v32, v42, 0LL, i[3]);
              if ( (_BYTE)v37 != KeGetCurrentIrql() )
              {
                v38 = KeGetCurrentIrql();
                WdLogSingleEntry5(0LL, 275LL, 16LL, v35, v37, v38);
                WdLogGlobalForLineNumber = 7120;
              }
            }
          }
          if ( KeGetCurrentIrql() >= 2u )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
          else if ( v40 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v35 + 1776));
            ExReleasePushLockSharedEx(v35 + 1760, 0LL);
            KeLeaveCriticalRegion();
          }
        }
      }
    }
  }
  else if ( !a4 )
  {
    PoFxCompleteIdleState(*((_QWORD *)this + 404), a2);
  }
}
