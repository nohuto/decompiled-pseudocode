/*
 * XREFs of DxgNotifyVSyncCB @ 0x14002E130
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x14002E52C (-NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z.c)
 *     ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x140076D80 (-RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

void __fastcall DxgNotifyVSyncCB(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rdi
  int v8; // r15d
  struct DXGTHREAD *v9; // rbx
  __int64 v10; // r14
  struct DXGTHREAD *Current; // rax
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  ADAPTER_DISPLAY *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int i; // esi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v22; // rbx
  struct _KPROCESS *ThreadProcess; // rax
  __int64 v24; // rdx
  __int64 v25; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-41h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-39h] BYREF
  char v28; // [rsp+78h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-19h] BYREF

  v28 = 0;
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 405) )
      {
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        if ( SessionData )
        {
          v22 = *((_QWORD *)SessionData + 2341);
          if ( v22 == PsGetCurrentProcess() )
          {
            ThreadProcess = PsGetThreadProcess(KeGetCurrentThread());
            if ( ThreadProcess )
            {
              KeStackAttachProcess(ThreadProcess, &ApcState);
              v28 = 1;
            }
          }
        }
      }
    }
  }
  if ( !a1 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2058;
LABEL_33:
    v7 = 0LL;
    goto LABEL_7;
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 || *(_DWORD *)(v6 + 16) != 1953656900 || *(_DWORD *)(v6 + 20) != 2 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 2065;
    goto LABEL_33;
  }
  v7 = *(_QWORD *)(v6 + 4032);
LABEL_7:
  v8 = -1;
  v9 = 0LL;
  v10 = qword_14015B4C0 & 2;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v8 = 8009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerEnter, v5, 8009);
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v9 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 203;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_ProfilerEntryCount >= 0", 203LL, 0LL, 0LL, 0LL, 0LL);
      }
      v12 = *((_DWORD *)v9 + 13);
      if ( !v12 )
        *((_DWORD *)v9 + 14) = 8009;
      *((_DWORD *)v9 + 13) = v12 + 1;
    }
  }
  v25 = 0LL;
  v13 = KeQueryInterruptTimePrecise(&v25);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v26 = v13 / 0xA;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 4384), &LockHandle);
  v14 = (*(_DWORD *)(v7 + 2976) & 0x10) != 0 ? a2 : 0;
  if ( !*(_DWORD *)(*(_QWORD *)(v7 + 4304) + 4 * v14) )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(v7 + 4392) + 8 * v14);
    if ( v24 )
      _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v7 + 4400) + 8 * v14), v25 - v24);
    *(_QWORD *)(*(_QWORD *)(v7 + 4392) + 8 * v14) = v25;
  }
  v15 = *(ADAPTER_DISPLAY **)(v7 + 3120);
  if ( v15 )
    ADAPTER_DISPLAY::NotifyVSync(v15, a2, &v26);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  for ( i = 0; i < *(_DWORD *)(v7 + 4432); ++i )
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync((DXGPOWERSTATISTICSTRANSITIONENGINE *)(*(_QWORD *)(v7 + 4424)
                                                                                         + 136LL
                                                                                         + 248LL * i));
  if ( v9 )
  {
    if ( *((int *)v9 + 13) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 213;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_ProfilerEntryCount > 0", 213LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v9 + 13))-- == 1 )
      *((_DWORD *)v9 + 14) = -1;
  }
  if ( v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v8);
  if ( v28 )
    KeUnstackDetachProcess(&ApcState);
}
