/*
 * XREFs of ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x140062BCC
 * Callers:
 *     InitiateWaitForInjectionCompletion @ 0x140062B90 (InitiateWaitForInjectionCompletion.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsEditionComputeInjectorUIPISupported @ 0x1401292B4 (IsEditionComputeInjectorUIPISupported.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z @ 0x14018CA28 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1401921A4 (ApiSetEditionInitiateMouseEventProcessing.c)
 */

char __fastcall CMouseProcessor::InitiateWaitForInjectionCompletion(CMouseProcessor *this, void (*a2)(void))
{
  struct W32_PUSH_LOCK *v2; // rbx
  char v5; // si
  __int64 v6; // rax
  char v7; // di
  bool v8; // bp
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int128 v12; // xmm6
  char v13; // r14
  unsigned int v14; // ebp
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // ebp
  BOOL v22; // eax
  __int64 v23; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  int v25; // eax
  __int128 v27; // [rsp+40h] [rbp-58h]
  int v28; // [rsp+50h] [rbp-48h]

  v2 = (CMouseProcessor *)((char *)this + 3008);
  v5 = 0;
  W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)this + 3008), 0);
  if ( *((_WORD *)this + 1501) )
  {
    v6 = CMouseProcessor::CMouseQueue::GetItemForWrite((char *)this + 56, 0LL);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 176) = a2;
      v5 = 1;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v7 = 0;
      }
      v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v10) = v8;
        LOBYTE(v11) = v7;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v10,
          *(_QWORD *)(UserSessionState + 69400),
          3,
          6,
          17,
          (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
      }
    }
  }
  W32ReleasePushLockExclusiveEx(v2, 0);
  if ( !v5 )
  {
    v12 = 0LL;
    v13 = 0;
    v14 = 0;
    if ( (int)IsEditionComputeInjectorUIPISupported() >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
      v18 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v17 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        v18 = v17 & CurrentProcessWin32Process;
      }
      *(_QWORD *)&v27 = *(_QWORD *)(v18 + 872);
      DWORD2(v27) = *(_DWORD *)(v18 + 880);
      v19 = PsGetCurrentProcessWin32Process(v17);
      v20 = v19;
      if ( v19 )
        v20 = -(__int64)(*(_QWORD *)v19 != 0LL) & v19;
      v21 = *(_DWORD *)(v20 + 12);
      v13 = 1;
      v22 = v21 < 0;
      v14 = (unsigned int)v21 >> 31;
      HIDWORD(v27) = v22;
      v12 = v27;
    }
    W32AcquirePushLockExclusiveEx(v2, 0);
    v23 = CMouseProcessor::CMouseQueue::GetItemForWrite((char *)this + 56, 1LL);
    if ( v23 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(_QWORD *)(v23 + 52) = 0LL;
      *(LARGE_INTEGER *)(v23 + 96) = PerformanceCounter;
      v25 = 2;
      *(_DWORD *)(v23 + 112) = 2;
      if ( v13 && v14 )
        v25 = 1;
      *(_DWORD *)(v23 + 116) = v25;
      *(_DWORD *)(v23 + 120) = 32896;
      if ( v13 )
      {
        LOBYTE(v28) = 1;
        *(_OWORD *)(v23 + 124) = v12;
        *(_DWORD *)(v23 + 140) = v28;
      }
      *(_QWORD *)(v23 + 176) = a2;
      v5 = 1;
    }
    W32ReleasePushLockExclusiveEx(v2, 0);
    if ( v5 )
      ApiSetEditionInitiateMouseEventProcessing(0LL, 1LL);
  }
  return v5;
}
