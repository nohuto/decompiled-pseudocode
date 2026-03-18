/*
 * XREFs of xxxSetInformationThread @ 0x140106AA0
 * Callers:
 *     NtUserSetInformationThread @ 0x140106950 (NtUserSetInformationThread.c)
 *     xxxSetInformationThread @ 0x140106AA0 (xxxSetInformationThread.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     QueueShutdownData @ 0x1400A5D70 (QueueShutdownData.c)
 *     W32GetThreadWin32Thread @ 0x140105FF4 (W32GetThreadWin32Thread.c)
 *     xxxSetInformationThread @ 0x140106AA0 (xxxSetInformationThread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x140107100 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x140107460 (xxxSetCsrssThreadDesktop.c)
 *     xxxBroadcastMessage @ 0x140117780 (xxxBroadcastMessage.c)
 *     ?InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1402561B4 (-InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     xxxRefreshDisplayOrientation @ 0x1402690E0 (xxxRefreshDisplayOrientation.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1402B6180 (-TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1402DE1F4 (-EndShutdown@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxSetInformationThread(void *a1, int a2, __int64 *a3, int a4)
{
  unsigned __int64 v7; // r14
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // r12
  int v10; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  _QWORD *v18; // rdi
  unsigned int v19; // esi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  int i; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct tagTHREADINFO *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 UserSessionState; // rax
  void *v34; // rcx
  NTSTATUS v35; // eax
  PVOID v36; // rdi
  __int64 v37; // rax
  void *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // r8d
  __int64 v58; // rax
  __int64 j; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  char v62[8]; // [rsp+40h] [rbp-79h] BYREF
  PVOID v63; // [rsp+48h] [rbp-71h] BYREF
  PVOID Object; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v65[4]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v66; // [rsp+68h] [rbp-51h]
  _DWORD v67[2]; // [rsp+70h] [rbp-49h] BYREF
  _WORD *v68; // [rsp+78h] [rbp-41h]
  _WORD v69[40]; // [rsp+80h] [rbp-39h] BYREF

  Object = 0LL;
  v7 = 1LL;
  result = ObReferenceObjectByHandle(a1, 0x20u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
  v9 = (struct _KTHREAD *)Object;
  v10 = result;
  if ( result >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
    if ( a2 > 10 )
    {
      if ( a2 == 12 )
      {
        v45 = ValidateHwnd(*a3);
        if ( !v45 )
          goto LABEL_45;
        v48 = *(_QWORD *)(v45 + 16);
        if ( !v48 || !*(_QWORD *)(v48 + 496) )
          goto LABEL_45;
        v49 = *a3;
        *(_QWORD *)(W32GetUserSessionState(v47, v46) + 19176) = v49;
        PostWinlogonMessage(1031LL, 0LL);
        v50 = *(_QWORD *)(v48 + 496);
        if ( !*(_QWORD *)(*(_QWORD *)(v50 + 8) + 168LL) )
          v7 = *(_QWORD *)(v50 + 288) != 0LL;
        QueueShutdownData(0xFFFFLL, v7);
      }
      else
      {
        v24 = (unsigned int)(a2 - 13);
        if ( a2 == 13 )
        {
          v10 = -1073741790;
          v63 = 0LL;
          for ( i = 0; i < 10000; i += 100 )
          {
            if ( *(_QWORD *)(W32GetUserSessionState(v24, v12) + 63512) )
            {
              v28 = PtiCurrent(v27, v26);
              *(_QWORD *)(W32GetUserSessionState(v30, v29) + 69296) = v28;
              W32GetUserSessionState(v32, v31);
              QueueShutdownData(*a3, 1uLL);
              v10 = 0;
              break;
            }
            LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v62, 1);
            v63 = (PVOID)-1000000LL;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&v63);
            LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v62);
          }
          if ( i > 0 )
          {
            UserSessionState = W32GetUserSessionState(v24, v12);
            TraceLoggingBSDRRaceConditionEvent(***(_DWORD ***)(UserSessionState + 57008), i);
          }
          goto LABEL_15;
        }
        if ( a2 == 14 )
        {
          QueueShutdownData(*a3, 0LL);
          *(_QWORD *)(W32GetUserSessionState(v40, v39) + 69296) = 0LL;
          W32GetUserSessionState(v42, v41);
          *(_QWORD *)(W32GetUserSessionState(v44, v43) + 19176) = 0LL;
        }
        else
        {
          v53 = (unsigned int)(a2 - 15);
          if ( a2 != 15 )
          {
            v53 = (unsigned int)(a2 - 16);
            if ( a2 != 16 )
            {
              if ( a2 == 17 )
              {
                v66 = 0LL;
                *(_OWORD *)v65 = 0LL;
                v10 = xxxSetInformationThread(-2LL, 7LL, v65, 24LL);
                if ( v10 < 0 )
                  goto LABEL_15;
                PostShellHookMessagesEx((LastWokenThread *)0x37, 0LL);
                v20 = xxxSetInformationThread(-2LL, 9LL, v65, 24LL);
                goto LABEL_14;
              }
              goto LABEL_79;
            }
          }
          v54 = *(_DWORD *)a3;
          v63 = 0LL;
          v66 = 0LL;
          if ( a2 == 15 )
          {
            if ( v54 )
            {
              v55 = W32GetUserSessionState(v53, v12);
              *(_DWORD *)(*(_QWORD *)(v55 + 19928) + 2236LL) |= 8u;
            }
            else
            {
              v58 = W32GetUserSessionState(v53, v12);
              *(_DWORD *)(*(_QWORD *)(v58 + 19928) + 2236LL) &= ~8u;
            }
            RtlLoadStringOrError(629LL, v69, 40LL);
            xxxRefreshDisplayOrientation();
            EtwTraceConvertibleState(*(unsigned int *)a3);
          }
          else
          {
            if ( v54 )
            {
              v60 = W32GetUserSessionState(v53, v12);
              *(_DWORD *)(*(_QWORD *)(v60 + 19928) + 2236LL) |= 0x10u;
            }
            else
            {
              v61 = W32GetUserSessionState(v53, v12);
              *(_DWORD *)(*(_QWORD *)(v61 + 19928) + 2236LL) &= ~0x10u;
            }
            RtlLoadStringOrError(630LL, v69, 40LL);
            xxxRefreshDisplayOrientation();
            EtwTraceDockState(*(unsigned int *)a3);
          }
          v68 = v69;
          v56 = -1LL;
          do
            ++v56;
          while ( v69[v56] );
          v57 = *(_DWORD *)a3;
          v67[0] = 2 * v56;
          v65[0] = 0;
          v65[1] = 100;
          v67[1] = (2 * v56 + 2) & 0x7FFFFFFF;
          *(_QWORD *)&v65[2] = &v63;
          xxxBroadcastMessage((unsigned int)v69, 26, v57, (unsigned int)v67, 6u, (union tagBROADCASTMSG *)v65, 1);
        }
      }
    }
    else
    {
      if ( a2 == 10 )
      {
        v20 = SetCsrApiPortHandle(*a3);
        goto LABEL_14;
      }
      v13 = a2 - 1;
      if ( !v13 )
      {
        if ( ThreadWin32Thread )
        {
          if ( a4 == 8 && (*(_DWORD *)a3 & 0x20000) == *(_DWORD *)a3 )
          {
            if ( *(_DWORD *)a3 )
              _InterlockedOr((volatile signed __int32 *)(ThreadWin32Thread + 528), 0x20000u);
            else
              _InterlockedAnd((volatile signed __int32 *)(ThreadWin32Thread + 528), 0xFFFDFFFF);
          }
          else
          {
            v10 = -1073741811;
          }
          goto LABEL_15;
        }
        goto LABEL_19;
      }
      v14 = v13 - 4;
      if ( !v14 )
      {
        v20 = InitiateShutdown(v9, (unsigned int *)a3);
        goto LABEL_14;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( !v17 )
          {
            v34 = (void *)*a3;
            v63 = 0LL;
            v35 = ObReferenceObjectByHandle(v34, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v63, 0LL);
            v36 = v63;
            v10 = v35;
            if ( v35 >= 0 )
            {
              v37 = W32GetThreadWin32Thread((__int64)v63);
              if ( v37 && (v38 = *(void **)(v37 + 496)) != 0LL )
                v10 = xxxSetCsrssThreadDesktop(v38);
              else
                v10 = -1073741816;
              ObfDereferenceObject(v36);
            }
            goto LABEL_15;
          }
          if ( v17 == 1 )
          {
            v18 = a3 + 1;
            if ( a4 == 32 )
              v19 = *((_DWORD *)a3 + 6);
            else
              v19 = 0;
            if ( !*v18 )
            {
LABEL_13:
              v20 = xxxRestoreCsrssThreadDesktop(v18, v19);
LABEL_14:
              v10 = v20;
LABEL_15:
              ObfDereferenceObject(v9);
              return v10;
            }
            v51 = 0LL;
            v52 = *(_QWORD *)(W32GetUserSessionState(ThreadWin32Thread, v12) + 63560);
            if ( v52 )
            {
              while ( !v51 )
              {
                for ( j = *(_QWORD *)(v52 + 16); j; j = *(_QWORD *)(j + 32) )
                {
                  if ( j == *v18 )
                  {
                    v51 = j;
                    break;
                  }
                }
                v52 = *(_QWORD *)(v52 + 8);
                if ( !v52 )
                {
                  if ( v51 )
                    goto LABEL_13;
                  goto LABEL_45;
                }
              }
              goto LABEL_13;
            }
LABEL_45:
            v10 = -1073741823;
            goto LABEL_15;
          }
LABEL_79:
          v10 = -1073741821;
          goto LABEL_15;
        }
        if ( *(_QWORD *)(W32GetUserSessionState(ThreadWin32Thread, v12) + 19200) )
        {
          v23 = W32GetUserSessionState(v22, v21);
          v20 = xxxSetCsrssThreadDesktop(*(PVOID *)(v23 + 19200));
          goto LABEL_14;
        }
LABEL_19:
        v10 = -1073741816;
        goto LABEL_15;
      }
      EndShutdown(*(_DWORD *)a3);
    }
    v10 = 0;
    goto LABEL_15;
  }
  return result;
}
