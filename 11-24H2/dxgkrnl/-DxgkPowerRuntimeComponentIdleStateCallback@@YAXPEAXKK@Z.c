/*
 * XREFs of ?DxgkPowerRuntimeComponentIdleStateCallback@@YAXPEAXKK@Z @ 0x1400084A0
 * Callers:
 *     <none>
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

void __fastcall DxgkPowerRuntimeComponentIdleStateCallback(volatile signed __int32 *a1, unsigned int a2, __int64 a3)
{
  struct DXGTHREAD *v3; // r13
  __int64 v4; // r15
  unsigned int v5; // r12d
  volatile signed __int32 *v6; // rdi
  char v7; // si
  __int64 v8; // rbp
  char v9; // r14
  _BYTE *v10; // rbx
  struct DXGTHREAD *v11; // r14
  struct DXGTHREAD *Current; // rax
  int v13; // eax
  struct DXGTHREAD *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  DXGGLOBAL *v20; // rax
  struct DXGGLOBAL *Global; // rbx
  int v22; // ecx
  struct DXGPROCESS *v23; // rax
  int v24; // ecx
  DXGGLOBAL *v25; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v27; // rcx
  PSLIST_ENTRY v28; // rax
  KIRQL v29; // al
  KIRQL CurrentIrql; // [rsp+50h] [rbp-98h]
  int v31; // [rsp+54h] [rbp-94h]
  unsigned int v32; // [rsp+58h] [rbp-90h]
  unsigned int v33; // [rsp+5Ch] [rbp-8Ch]
  __int64 v34; // [rsp+60h] [rbp-88h]
  char v35; // [rsp+68h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-78h] BYREF

  v3 = 0LL;
  v4 = a2;
  v5 = a3;
  v6 = a1;
  v7 = 1;
  if ( *((_QWORD *)a1 + 504) && (a2 == 1 || a2 == 4) && _InterlockedIncrement(a1 + 998) > 1 )
  {
    while ( 1 )
    {
      v28 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v6 + 251);
      if ( v28 )
        break;
      if ( KeGetCurrentIrql() < 2u )
        KeWaitForSingleObject((PVOID)(v6 + 990), Executive, 0, 0, 0LL);
      else
        KeStallExecutionProcessor(0x64u);
    }
    LODWORD(v28[1].Next) = v4;
    HIDWORD(v28[1].Next) = v5;
    *((_BYTE *)&v28[1].Next + 8) = 0;
    ExInterlockedInsertTailList((PLIST_ENTRY)v6 + 250, (PLIST_ENTRY)v28, (PKSPIN_LOCK)v6 + 498);
    KeSetEvent((PRKEVENT)v6 + 163, 0, 0);
  }
  else if ( *((_DWORD *)a1 + 50) == 1 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pqq_EtwWriteTransfer((_DWORD)a1, (unsigned int)&Dxgk_SetPowerComponentFState, a3, (_DWORD)a1, a2, a3);
    v8 = *((_QWORD *)v6 + 403) + 520 * v4;
    if ( *(_BYTE *)(v8 + 360) )
    {
      v7 = 0;
      v10 = (_BYTE *)(v8 + 359);
    }
    else
    {
      if ( (*((int *)v6 + 684) >= 0x2000 || *((_BYTE *)v6 + 3036)) && *(_DWORD *)(v8 + 208) == 3 )
      {
        v9 = 0;
      }
      else
      {
        v9 = 1;
        *(_DWORD *)(v8 + 344) = v5;
      }
      v10 = (_BYTE *)(v8 + 359);
      *(_BYTE *)(v8 + 359) = 1;
      if ( v5 )
      {
        a1 = *(volatile signed __int32 **)(v8 + 512);
        if ( a1 )
          DXGPOWERSTATISTICSTRANSITIONENGINE::RecordEnteringIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(a1 + 34));
      }
      if ( v9 )
      {
        v11 = 0LL;
        v32 = -1;
        v33 = *(_DWORD *)(v8 + 4);
        v34 = qword_14015E4B0 & 2;
        if ( (qword_14015E4B0 & 2) != 0 )
        {
          v32 = 5124;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 5124LL);
        }
        if ( KeGetCurrentIrql() < 2u )
        {
          Current = DXGTHREAD::GetCurrent();
          v11 = Current;
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
            v13 = *((_DWORD *)v11 + 13);
            if ( !v13 )
              *((_DWORD *)v11 + 14) = 5124;
            *((_DWORD *)v11 + 13) = v13 + 1;
          }
        }
        _InterlockedAdd(v6 + 1201, 1u);
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql < 2u && (v14 = DXGTHREAD::GetCurrent(), (v3 = v14) != 0LL) )
          v31 = *((_DWORD *)v14 + 12);
        else
          v31 = 0;
        v35 = 0;
        if ( KeGetCurrentIrql() < 2u )
        {
          Global = DXGGLOBAL::GetGlobal();
          if ( *((_DWORD *)Global + 413) )
          {
            v22 = *((_DWORD *)v6 + 111);
            if ( (v22 & 0x20) == 0 && (v22 & 4) == 0 )
            {
              v23 = DXGPROCESS::GetCurrent();
              if ( v23 )
              {
                if ( (*((_BYTE *)v23 + 408) & 1) == 0 && (*((_DWORD *)v23 + 102) & 2) == 0 )
                {
                  v24 = *((_DWORD *)Global + 413);
                  if ( v24 == 2 || v24 == 1 && *((_BYTE *)v23 + 573) )
                  {
                    v25 = DXGGLOBAL::GetGlobal();
                    SessionData = DXGGLOBAL::GetSessionData(v25);
                    if ( SessionData )
                    {
                      v27 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2341);
                      if ( v27 )
                      {
                        KeStackAttachProcess(v27, &ApcState);
                        v35 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v15 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))v6 + 105))(*((_QWORD *)v6 + 36), v33, v5);
        if ( v35 )
          KeUnstackDetachProcess(&ApcState);
        if ( CurrentIrql != KeGetCurrentIrql() )
        {
          v29 = KeGetCurrentIrql();
          WdLogSingleEntry5(0LL, 275LL, 16LL, v6, CurrentIrql, v29);
          WdLogGlobalForLineNumber = 2564;
        }
        if ( v3 )
        {
          v16 = *((int *)v3 + 12);
          if ( (_DWORD)v16 != v31 )
          {
            WdLogSingleEntry5(0LL, 275LL, 38LL, v16, v31, 0LL);
            WdLogGlobalForLineNumber = 73;
          }
        }
        _InterlockedDecrement(v6 + 1201);
        if ( (_DWORD)v15 != -1071775466 && (_DWORD)v15 )
        {
          WdLogSingleEntry1(2LL, v15);
          WdLogGlobalForLineNumber = 2566;
          DxgkLogInternalTriageEvent(
            0,
            0x40000,
            -1,
            (unsigned int)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            v15,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v11 )
        {
          if ( *((int *)v11 + 13) <= 0 )
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
          if ( (*((_DWORD *)v11 + 13))-- == 1 )
            *((_DWORD *)v11 + 14) = -1;
        }
        v10 = (_BYTE *)(v8 + 359);
        if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, a3, v32);
      }
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0pt_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_SetPowerComponentFStateEnd, a3, v6, v4);
    if ( (*(_DWORD *)(v8 + 216) & 2) == 0 )
    {
      *v10 = 0;
      PoFxCompleteIdleState(*((_QWORD *)v6 + 404), (unsigned int)v4);
      if ( v7 )
      {
        if ( !v5 )
        {
          v18 = *(_QWORD *)(v8 + 512);
          if ( v18 )
            DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v18 + 136));
        }
        if ( *(_DWORD *)(v8 + 208) == 7 )
        {
          v19 = *(_DWORD *)(v8 + 4);
          v20 = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::NotifySharedPowerGraphicsFStateTransition(v20, (void *const)v6, v19, v5, 0);
        }
      }
    }
  }
  else
  {
    PoFxCompleteIdleState(*((_QWORD *)a1 + 404), a2);
  }
}
