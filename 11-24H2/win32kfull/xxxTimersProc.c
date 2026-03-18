/*
 * XREFs of xxxTimersProc @ 0x14023F100
 * Callers:
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1400455A0 (-xxxReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x1400F8790 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x14016F68C (-SetDelayableTimer@@YAXKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x1402899F0 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxTimersProc(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  ULONG_PTR v4; // r14
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r15d
  unsigned int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // edi
  _QWORD *v27; // rbx
  int v28; // eax
  unsigned int v29; // ecx
  _QWORD *v30; // rbp
  __int64 v31; // rdx
  unsigned int v32; // eax
  _QWORD *v33; // rax
  ULONG_PTR v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  ULONG_PTR *v38; // rax
  _QWORD *v39; // rdx
  int v40; // eax
  __int64 v41; // rcx
  _QWORD *v42; // rbx
  __int64 v43; // r8
  int v44; // eax
  unsigned int v45; // eax
  _QWORD *v46; // rax
  _QWORD *v47; // r8
  _QWORD *v48; // rdi
  __int64 *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rcx
  _QWORD *v53; // rbx
  int v54; // ecx
  bool v55; // zf
  unsigned int v56; // ecx
  _QWORD *v57; // rsi
  unsigned int v58; // eax
  ULONG_PTR *v59; // rax
  ULONG_PTR v60; // rcx
  _QWORD *v61; // rax
  _QWORD *v62; // r8
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 result; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  ULONG_PTR *v72; // rax
  int v73; // [rsp+20h] [rbp-68h]
  ULONG_PTR BugCheckParameter3; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *i; // [rsp+30h] [rbp-58h]
  unsigned int v76; // [rsp+A8h] [rbp+20h]

  *(_BYTE *)(W32GetUserSessionState(a1, a2) + 62760) = 1;
  v4 = 0LL;
  *(_BYTE *)(W32GetUserSessionState(v3, v2) + 18720) = 0;
  while ( 1 )
  {
    *(_BYTE *)(W32GetUserSessionState(v6, v5) + 18721) = 0;
    v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v73 = v7;
    v10 = v7 - *(_DWORD *)(W32GetUserSessionState(v9, v8) + 57624);
    v76 = v10;
    v13 = 0x7FFFFFFF;
    v14 = 0x7FFFFFFF;
    *(_DWORD *)(W32GetUserSessionState(v12, v11) + 57624) = v7;
    v17 = W32GetUserSessionState(v16, v15) + 57584;
    v18 = *(_QWORD **)v17;
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v20, v19, v21);
    if ( CurrentThreadWin32Thread )
      v25 = *CurrentThreadWin32Thread;
    else
      v25 = 0LL;
    BugCheckParameter3 = *(_QWORD *)(v25 + 456);
    *(_QWORD *)(v25 + 456) = &BugCheckParameter3;
    i = 0LL;
    while ( v18 != (_QWORD *)v17 )
    {
      v26 = *((_DWORD *)v18 - 6);
      v27 = v18 - 9;
      if ( (v26 & 0x20) != 0 || (v28 = *(_DWORD *)(v18 - 3) & 0xC00, v28 == 1024) )
      {
        v18 = (_QWORD *)*v18;
      }
      else if ( (v26 & 0x1000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1537LL);
        v18 = (_QWORD *)*v18;
      }
      else
      {
        if ( (v26 & 8) != 0 || v28 == 2048 )
        {
          *((_DWORD *)v27 + 12) = v26 & 0xFFFFF7F7;
          LOWORD(v26) = -2049;
        }
        else
        {
          _m_prefetchw((char *)v27 + 52);
          v29 = *((_DWORD *)v27 + 13);
          *((_DWORD *)v27 + 13) = v29 - v10;
          if ( v29 <= v10 )
          {
            v30 = i;
            i = v18 - 9;
            HMLockObject(v18 - 9);
            if ( v30 )
              HMUnlockObject(v30);
            xxxReadyTimer((struct tagTIMER *)(v18 - 9), v73);
            v10 = v76;
          }
        }
        v18 = (_QWORD *)*v18;
        if ( (v27[6] & 0x1000) != 0 || (*(_BYTE *)(_HMPheFromObjectWorker(v27) + 25) & 1) != 0 )
        {
          if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( (v27[6] & 0x1000) == 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1591LL);
            if ( (*(_BYTE *)(_HMPheFromObjectWorker(v27) + 25) & 1) == 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1593LL);
          }
        }
        else
        {
          if ( (v26 & 0x800) != 0 )
            *((_DWORD *)v27 + 12) &= ~0x800u;
          if ( *((_DWORD *)v27 + 13) < v13 )
            v13 = *((_DWORD *)v27 + 13);
          v32 = CoalescableDueTime((const struct tagTIMER *)v27, v31);
          if ( v32 < v14 )
            v14 = v32;
        }
      }
    }
    v33 = (_QWORD *)PsGetCurrentThreadWin32Thread(v25, v23, v24);
    v34 = v33 ? *v33 : 0LL;
    Win32HM_UnlockFromThread<1>(v34, &BugCheckParameter3);
    i = 0LL;
    BugCheckParameter3 = -1LL;
    if ( !*(_BYTE *)(W32GetUserSessionState(v36, v35) + 18721) )
      break;
    if ( BugCheckParameter3 != -1LL )
    {
      v38 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v6, v5, v37);
      if ( v38 )
        Win32HM_UnlockFromThread<1>(*v38, &BugCheckParameter3);
      else
        Win32HM_UnlockFromThread<1>(0LL, &BugCheckParameter3);
    }
  }
  v39 = *(_QWORD **)(v17 + 16);
  if ( v39 != (_QWORD *)(v17 + 16) )
  {
    do
    {
      v40 = *((_DWORD *)v39 - 3);
      v41 = (__int64)v39;
      v39 = (_QWORD *)*v39;
      *(_DWORD *)(v41 - 20) += v40;
    }
    while ( v39 != (_QWORD *)(v17 + 16) );
    v42 = *(_QWORD **)v17;
    while ( v42 != (_QWORD *)v17 )
    {
      v41 = *((unsigned int *)v42 - 6);
      v39 = v42;
      v42 = (_QWORD *)*v42;
      if ( (v41 & 0x20) == 0 )
      {
        v43 = *(_QWORD *)(*(v39 - 6) + 464LL);
        v44 = *(_DWORD *)(v43 + 1036);
        if ( v44 )
        {
          if ( (v41 & 0x1000) != 0 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1680LL);
          }
          else
          {
            v41 = *((unsigned int *)v39 - 5);
            if ( v44 <= 0 )
            {
              if ( (unsigned int)v41 <= -v44 )
              {
                v41 = (unsigned int)-(int)v41;
                *(_DWORD *)(v43 + 1036) = v41;
              }
            }
            else
            {
              v45 = v41 + v44;
              v41 = 0x7FFFFFFFLL;
              if ( v45 < 0x7FFFFFFF )
                v41 = v45;
              *((_DWORD *)v39 - 5) = v41;
            }
          }
        }
      }
    }
    v46 = *(_QWORD **)(v17 + 16);
    v47 = (_QWORD *)(v17 + 16);
    while ( v46 != v47 )
    {
      v41 = (__int64)v46;
      v39 = v46;
      v46 = (_QWORD *)*v46;
      if ( *(int *)(v41 - 12) > 0 )
      {
        *(_DWORD *)(v41 - 12) = 0;
        if ( v46[1] != v41 )
          goto LABEL_91;
        v41 = *(_QWORD *)(v41 + 8);
        if ( *(_QWORD **)v41 != v39 )
          goto LABEL_91;
        *(_QWORD *)v41 = v46;
        v46[1] = v41;
      }
    }
    if ( *(_QWORD *)(v17 + 16) != v17 + 16 )
    {
      v48 = *(_QWORD **)v17;
      v49 = (__int64 *)PsGetCurrentThreadWin32Thread(v41, v39, v47);
      if ( v49 )
        v52 = *v49;
      else
        v52 = 0LL;
      BugCheckParameter3 = *(_QWORD *)(v52 + 456);
      *(_QWORD *)(v52 + 456) = &BugCheckParameter3;
      for ( i = 0LL; v48 != (_QWORD *)v17; v48 = (_QWORD *)*v48 )
      {
        v50 = *((unsigned int *)v48 - 6);
        v53 = v48 - 9;
        if ( (v50 & 0x20) == 0 )
        {
          v52 = *(_QWORD *)(v53[3] + 464LL);
          v51 = *(unsigned int *)(v52 + 1036);
          if ( (_DWORD)v51 )
          {
            if ( (v50 & 0x1000) != 0 )
            {
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1745LL);
            }
            else
            {
              v54 = *((_DWORD *)v53 + 13);
              v55 = (_DWORD)v51 + v54 == 0;
              v56 = v51 + v54;
              *((_DWORD *)v53 + 13) = v56;
              if ( v55 )
              {
                v57 = i;
                i = v48 - 9;
                HMLockObject(v48 - 9);
                if ( v57 )
                  HMUnlockObject(v57);
                xxxReadyTimer((struct tagTIMER *)(v48 - 9), v73);
                _HMPheFromObjectWorker(v48 - 9);
              }
              else
              {
                if ( v56 < v13 )
                  v13 = v56;
                v58 = CoalescableDueTime((const struct tagTIMER *)(v48 - 9), v50);
                if ( v58 < v14 )
                  v14 = v58;
              }
            }
          }
        }
      }
      v59 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v52, v50, v51);
      if ( v59 )
        v60 = *v59;
      else
        v60 = 0LL;
      Win32HM_UnlockFromThread<1>(v60, &BugCheckParameter3);
      i = 0LL;
      BugCheckParameter3 = -1LL;
    }
    v6 = *(_QWORD **)(v17 + 16);
    if ( v6 != (_QWORD *)(v17 + 16) )
    {
      while ( 1 )
      {
        v39 = (_QWORD *)*v6;
        v61 = v6;
        v62 = v6;
        v6 = v39;
        *((_DWORD *)v61 - 3) = 0;
        if ( (_QWORD *)v39[1] != v61 )
          break;
        v63 = (_QWORD *)v61[1];
        if ( (_QWORD *)*v63 != v62 )
          break;
        *v63 = v39;
        v39[1] = v63;
        if ( v39 == (_QWORD *)(v17 + 16) )
          goto LABEL_86;
      }
LABEL_91:
      __fastfail(3u);
    }
  }
LABEL_86:
  *(_DWORD *)(W32GetUserSessionState(v6, v39) + 62776) = v13;
  *(_DWORD *)(W32GetUserSessionState(v65, v64) + 62784) = v14;
  SetDelayableTimer(v13, v14);
  result = W32GetUserSessionState(v67, v66);
  *(_BYTE *)(result + 62760) = 0;
  if ( BugCheckParameter3 != -1LL )
  {
    v72 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v70, v69, v71);
    if ( v72 )
      v4 = *v72;
    return Win32HM_UnlockFromThread<1>(v4, &BugCheckParameter3);
  }
  return result;
}
