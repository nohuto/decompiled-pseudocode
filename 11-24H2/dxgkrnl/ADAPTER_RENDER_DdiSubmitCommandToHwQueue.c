/*
 * XREFs of ADAPTER_RENDER_DdiSubmitCommandToHwQueue @ 0x140012900
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiSubmitCommandToHwQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  struct DXGTHREAD *v5; // rdi
  __int64 v6; // r13
  struct DXGTHREAD *Current; // rax
  int v8; // eax
  KIRQL CurrentIrql; // al
  __int64 v10; // r12
  struct DXGTHREAD *v11; // rbp
  int v12; // r14d
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(_QWORD, __int64); // rax
  int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  struct DXGPROCESS *v26; // rax
  int v27; // ecx
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  struct DXGTHREAD *v32; // rax
  KIRQL v33; // al
  int v35; // [rsp+68h] [rbp-80h]
  char v36; // [rsp+70h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-70h] BYREF

  v35 = -1;
  v3 = a2;
  v5 = 0LL;
  v6 = qword_14015E4B0 & 2;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v35 = 5112;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 5112);
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
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_ProfilerEntryCount >= 0", 201LL, 0LL, 0LL, 0LL, 0LL);
      }
      v8 = *((_DWORD *)v5 + 13);
      if ( !v8 )
        *((_DWORD *)v5 + 14) = 5112;
      *((_DWORD *)v5 + 13) = v8 + 1;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 4804LL));
  CurrentIrql = KeGetCurrentIrql();
  v10 = CurrentIrql;
  v11 = 0LL;
  if ( CurrentIrql < 2u && (v32 = DXGTHREAD::GetCurrent(), (v11 = v32) != 0LL) )
    v12 = *((_DWORD *)v32 + 12);
  else
    v12 = 0;
  v13 = *(_QWORD *)(a1 + 16);
  v36 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2605;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(v23, v22, v24, 0LL, 2, -1, L"m_pGlobal != NULL", 45, 0, 0, 0, 0);
      }
    }
    v21 = *(_QWORD *)&DXGGLOBAL::m_pGlobal;
    if ( *(_DWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 1652LL) )
    {
      v25 = *(_DWORD *)(v13 + 444);
      if ( (v25 & 0x20) == 0 && (v25 & 4) == 0 )
      {
        v26 = DXGPROCESS::GetCurrent();
        if ( v26 )
        {
          if ( (*((_BYTE *)v26 + 408) & 1) == 0 && (*((_DWORD *)v26 + 102) & 2) == 0 )
          {
            v27 = *(_DWORD *)(v21 + 1652);
            if ( v27 == 2 || v27 == 1 && *((_BYTE *)v26 + 573) )
            {
              if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2605;
                if ( bTracingEnabled )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
                    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                      2605LL,
                      v30,
                      v31,
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
              SessionData = DXGGLOBAL::GetSessionData(*(DXGGLOBAL **)&DXGGLOBAL::m_pGlobal);
              if ( SessionData )
              {
                v29 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2341);
                if ( v29 )
                {
                  KeStackAttachProcess(v29, &ApcState);
                  v36 = 1;
                }
              }
            }
          }
        }
      }
    }
    v3 = a2;
  }
  v14 = *(_QWORD *)(a1 + 16);
  v15 = *(__int64 (__fastcall **)(_QWORD, __int64))(v14 + 1120);
  if ( v15 )
    v16 = v15(*(_QWORD *)(v14 + 288), v3);
  else
    v16 = -1073741822;
  if ( v36 )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v10 != KeGetCurrentIrql() )
  {
    v33 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, a1, v10, v33);
    WdLogGlobalForLineNumber = 1488;
  }
  if ( v11 )
  {
    v17 = *((int *)v11 + 12);
    if ( (_DWORD)v17 != v12 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v11 + 12), v12, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 4804LL));
  if ( v16 != -1073741822 && v16 != -1073741811 && v16 )
  {
    WdLogSingleEntry1(2LL, v16);
    WdLogGlobalForLineNumber = 1490;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v16,
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
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_ProfilerEntryCount > 0", 211LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v5 + 13))-- == 1 )
      *((_DWORD *)v5 + 14) = -1;
  }
  if ( v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v35);
  return (unsigned int)v16;
}
