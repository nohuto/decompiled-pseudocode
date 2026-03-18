/*
 * XREFs of ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1400078B0
 * Callers:
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x140010610 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     DXGADAPTER_DdiSetPowerComponentFState @ 0x14006BF40 (DXGADAPTER_DdiSetPowerComponentFState.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiSetPowerComponentFState(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r13d
  struct DXGTHREAD *v5; // rdi
  __int64 v6; // r12
  struct DXGTHREAD *Current; // rax
  int v8; // eax
  KIRQL CurrentIrql; // al
  __int64 v10; // r15
  struct DXGTHREAD *v11; // rbx
  struct DXGTHREAD *v12; // rax
  int v13; // r14d
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGGLOBAL *Global; // rsi
  int v20; // ecx
  struct DXGPROCESS *v21; // rax
  int v22; // ecx
  DXGGLOBAL *v23; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v25; // rcx
  KIRQL v26; // al
  unsigned int v27; // [rsp+50h] [rbp-88h]
  char v29; // [rsp+58h] [rbp-80h]
  _KAPC_STATE ApcState; // [rsp+60h] [rbp-78h] BYREF

  v3 = -1;
  v27 = a3;
  v5 = 0LL;
  v6 = qword_14015E4B0 & 2;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v3 = 5124;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 5124LL);
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v5 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 201;
        DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_ProfilerEntryCount >= 0", 201LL, 0LL, 0LL, 0LL, 0LL);
      }
      v8 = *((_DWORD *)v5 + 13);
      if ( !v8 )
        *((_DWORD *)v5 + 14) = 5124;
      *((_DWORD *)v5 + 13) = v8 + 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 1201);
  CurrentIrql = KeGetCurrentIrql();
  v10 = CurrentIrql;
  v11 = 0LL;
  if ( CurrentIrql < 2u && (v12 = DXGTHREAD::GetCurrent(), (v11 = v12) != 0LL) )
    v13 = *((_DWORD *)v12 + 12);
  else
    v13 = 0;
  v29 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( *((_DWORD *)Global + 413) )
    {
      v20 = *((_DWORD *)this + 111);
      if ( (v20 & 0x20) == 0 && (v20 & 4) == 0 )
      {
        v21 = DXGPROCESS::GetCurrent();
        if ( v21 )
        {
          if ( (*((_BYTE *)v21 + 408) & 1) == 0 && (*((_DWORD *)v21 + 102) & 2) == 0 )
          {
            v22 = *((_DWORD *)Global + 413);
            if ( v22 == 2 || v22 == 1 && *((_BYTE *)v21 + 573) )
            {
              v23 = DXGGLOBAL::GetGlobal();
              SessionData = DXGGLOBAL::GetSessionData(v23);
              if ( SessionData )
              {
                v25 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2341);
                if ( v25 )
                {
                  KeStackAttachProcess(v25, &ApcState);
                  v29 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  v14 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD))this + 105))(*((_QWORD *)this + 36), a2, v27);
  if ( v29 )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v10 != KeGetCurrentIrql() )
  {
    v26 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v10, v26);
    WdLogGlobalForLineNumber = 2564;
  }
  if ( v11 )
  {
    v15 = *((int *)v11 + 12);
    if ( (_DWORD)v15 != v13 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v11 + 12), v13, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1201);
  if ( (_DWORD)v14 != -1071775466 && (_DWORD)v14 )
  {
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 2566;
    DxgkLogInternalTriageEvent(
      0,
      0x40000,
      -1,
      (unsigned int)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v14,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v5 )
  {
    if ( *((int *)v5 + 13) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 211;
      DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"m_ProfilerEntryCount > 0", 211LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v5 + 13))-- == 1 )
      *((_DWORD *)v5 + 14) = -1;
  }
  if ( v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v3);
  return (unsigned int)v14;
}
