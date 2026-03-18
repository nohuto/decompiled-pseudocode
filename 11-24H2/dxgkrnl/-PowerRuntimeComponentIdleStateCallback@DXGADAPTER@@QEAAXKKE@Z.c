/*
 * XREFs of ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x140007DB8
 * Callers:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x140011C70 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x140025BF0 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z @ 0x1400099D8 (-NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RecordEnteringIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x140063168 (-RecordEnteringIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x140077690 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentIdleStateCallback(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  struct DXGTHREAD *v4; // r13
  char v5; // r14
  unsigned int v6; // r12d
  DXGADAPTER *v7; // rdi
  __int64 v8; // r15
  char v9; // si
  __int64 v10; // rbp
  char v11; // r14
  _BYTE *v12; // rbx
  struct DXGTHREAD *v13; // r14
  struct DXGTHREAD *Current; // rax
  int v15; // eax
  struct DXGTHREAD *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  DXGGLOBAL *v22; // rax
  struct DXGGLOBAL *Global; // rbx
  int v24; // ecx
  struct DXGPROCESS *v25; // rax
  int v26; // ecx
  DXGGLOBAL *v27; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v29; // rcx
  PSLIST_ENTRY v30; // rax
  KIRQL v31; // al
  KIRQL CurrentIrql; // [rsp+51h] [rbp-97h]
  int v34; // [rsp+54h] [rbp-94h]
  unsigned int v35; // [rsp+58h] [rbp-90h]
  unsigned int v36; // [rsp+5Ch] [rbp-8Ch]
  __int64 v37; // [rsp+60h] [rbp-88h]
  char v38; // [rsp+68h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-78h] BYREF

  v4 = 0LL;
  v5 = a4;
  v6 = a3;
  v7 = this;
  v8 = a2;
  v9 = 1;
  if ( *((_QWORD *)this + 504)
    && (a2 == 1 || a2 == 4)
    && _InterlockedIncrement((volatile signed __int32 *)this + 998) > 1 )
  {
    while ( 1 )
    {
      v30 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v7 + 251);
      if ( v30 )
        break;
      if ( KeGetCurrentIrql() < 2u )
        KeWaitForSingleObject((char *)v7 + 3960, Executive, 0, 0, 0LL);
      else
        KeStallExecutionProcessor(0x64u);
    }
    LODWORD(v30[1].Next) = v8;
    HIDWORD(v30[1].Next) = v6;
    *((_BYTE *)&v30[1].Next + 8) = v5;
    ExInterlockedInsertTailList((PLIST_ENTRY)v7 + 250, (PLIST_ENTRY)v30, (PKSPIN_LOCK)v7 + 498);
    KeSetEvent((PRKEVENT)v7 + 163, 0, 0);
  }
  else if ( *((_DWORD *)this + 50) == 1 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        (_DWORD)this,
        (unsigned int)&Dxgk_SetPowerComponentFState,
        a3,
        (_DWORD)this,
        a2,
        a3);
    v10 = *((_QWORD *)v7 + 403) + 520 * v8;
    if ( !v5 && *(_BYTE *)(v10 + 360) )
    {
      v9 = 0;
      v12 = (_BYTE *)(v10 + 359);
    }
    else
    {
      if ( (*((int *)v7 + 684) >= 0x2000 || *((_BYTE *)v7 + 3036)) && *(_DWORD *)(v10 + 208) == 3 )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        *(_DWORD *)(v10 + 344) = v6;
      }
      v12 = (_BYTE *)(v10 + 359);
      *(_BYTE *)(v10 + 359) = 1;
      if ( v6 )
      {
        this = *(DXGADAPTER **)(v10 + 512);
        if ( this )
          DXGPOWERSTATISTICSTRANSITIONENGINE::RecordEnteringIdleFState((DXGADAPTER *)((char *)this + 136));
      }
      if ( v11 )
      {
        v13 = 0LL;
        v35 = -1;
        v36 = *(_DWORD *)(v10 + 4);
        v37 = qword_14015E4B0 & 2;
        if ( (qword_14015E4B0 & 2) != 0 )
        {
          v35 = 5124;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5124LL);
        }
        if ( KeGetCurrentIrql() < 2u )
        {
          Current = DXGTHREAD::GetCurrent();
          v13 = Current;
          if ( Current )
          {
            if ( *((int *)Current + 13) < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 201;
              DxgkLogInternalTriageEvent(
                0,
                262146,
                -1,
                (unsigned int)L"m_ProfilerEntryCount >= 0",
                201LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v15 = *((_DWORD *)v13 + 13);
            if ( !v15 )
              *((_DWORD *)v13 + 14) = 5124;
            *((_DWORD *)v13 + 13) = v15 + 1;
          }
        }
        _InterlockedAdd((volatile signed __int32 *)v7 + 1201, 1u);
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql < 2u && (v16 = DXGTHREAD::GetCurrent(), (v4 = v16) != 0LL) )
          v34 = *((_DWORD *)v16 + 12);
        else
          v34 = 0;
        v38 = 0;
        if ( KeGetCurrentIrql() < 2u )
        {
          Global = DXGGLOBAL::GetGlobal();
          if ( *((_DWORD *)Global + 413) )
          {
            v24 = *((_DWORD *)v7 + 111);
            if ( (v24 & 0x20) == 0 && (v24 & 4) == 0 )
            {
              v25 = DXGPROCESS::GetCurrent();
              if ( v25 )
              {
                if ( (*((_BYTE *)v25 + 408) & 1) == 0 && (*((_DWORD *)v25 + 102) & 2) == 0 )
                {
                  v26 = *((_DWORD *)Global + 413);
                  if ( v26 == 2 || v26 == 1 && *((_BYTE *)v25 + 573) )
                  {
                    v27 = DXGGLOBAL::GetGlobal();
                    SessionData = DXGGLOBAL::GetSessionData(v27);
                    if ( SessionData )
                    {
                      v29 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2341);
                      if ( v29 )
                      {
                        KeStackAttachProcess(v29, &ApcState);
                        v38 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v17 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))v7 + 105))(*((_QWORD *)v7 + 36), v36, v6);
        if ( v38 )
          KeUnstackDetachProcess(&ApcState);
        if ( CurrentIrql != KeGetCurrentIrql() )
        {
          v31 = KeGetCurrentIrql();
          WdLogSingleEntry5(0LL, 275LL, 16LL, v7, CurrentIrql, v31);
          WdLogGlobalForLineNumber = 2564;
        }
        if ( v4 )
        {
          v18 = *((int *)v4 + 12);
          if ( (_DWORD)v18 != v34 )
          {
            WdLogSingleEntry5(0LL, 275LL, 38LL, v18, v34, 0LL);
            WdLogGlobalForLineNumber = 73;
          }
        }
        _InterlockedDecrement((volatile signed __int32 *)v7 + 1201);
        if ( (_DWORD)v17 != -1071775466 && (_DWORD)v17 )
        {
          WdLogSingleEntry1(2LL, v17);
          WdLogGlobalForLineNumber = 2566;
          DxgkLogInternalTriageEvent(
            0,
            0x40000,
            -1,
            (unsigned int)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            v17,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v13 )
        {
          if ( *((int *)v13 + 13) <= 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 211;
            DxgkLogInternalTriageEvent(
              0,
              262146,
              -1,
              (unsigned int)L"m_ProfilerEntryCount > 0",
              211LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (*((_DWORD *)v13 + 13))-- == 1 )
            *((_DWORD *)v13 + 14) = -1;
        }
        v12 = (_BYTE *)(v10 + 359);
        if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, a3, v35);
      }
      v5 = a4;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentFStateEnd, a3, v7, v8);
    if ( (*(_DWORD *)(v10 + 216) & 2) == 0 )
    {
      *v12 = 0;
      if ( !v5 )
        PoFxCompleteIdleState(*((_QWORD *)v7 + 404), (unsigned int)v8);
      if ( v9 )
      {
        if ( !v6 )
        {
          v20 = *(_QWORD *)(v10 + 512);
          if ( v20 )
            DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v20 + 136));
        }
        if ( *(_DWORD *)(v10 + 208) == 7 )
        {
          v21 = *(_DWORD *)(v10 + 4);
          v22 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::NotifySharedPowerGraphicsFStateTransition(v22, v7, v21, v6, 0);
        }
      }
    }
  }
  else if ( !a4 )
  {
    PoFxCompleteIdleState(*((_QWORD *)this + 404), a2);
  }
}
