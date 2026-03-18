/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140118208
 * Callers:
 *     xxxSendMessageBSM @ 0x1401171C0 (xxxSendMessageBSM.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140049A98 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _PostTransformableMessageIL @ 0x140118950 (_PostTransformableMessageIL.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1401886E8 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendBSMtoDesktop(
        struct tagWND **a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  unsigned int v8; // r14d
  void *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *i; // rax
  __int64 v14; // r15
  ULONG_PTR v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 UserSessionState; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r8
  ULONG_PTR *v25; // r12
  ULONG_PTR v26; // rbx
  struct tagTHREADINFO *v27; // r15
  int v28; // r12d
  __int64 v29; // rcx
  int v30; // ebx
  int v31; // edx
  unsigned int v32; // ebx
  unsigned int v33; // r15d
  struct tagDRAWITEMSTRUCT *v34; // r9
  __int64 v35; // rdx
  void *v36; // rcx
  PETHREAD *v37; // rcx
  ULONG_PTR *CurrentThreadNonPaged; // rax
  ULONG_PTR v39; // rcx
  bool v40; // zf
  _QWORD *v42; // rcx
  _QWORD *v43; // rcx
  __int128 v44; // xmm0
  int v45; // eax
  LastWokenThread *v46; // rcx
  struct tagTHREADINFO *v47; // rax
  HANDLE InputBuffer; // [rsp+50h] [rbp-89h] BYREF
  int v49; // [rsp+58h] [rbp-81h]
  __int64 v50; // [rsp+60h] [rbp-79h]
  int v51; // [rsp+68h] [rbp-71h]
  unsigned __int64 v52; // [rsp+70h] [rbp-69h]
  void *Handle; // [rsp+78h] [rbp-61h] BYREF
  __int64 v54; // [rsp+80h] [rbp-59h] BYREF
  __int64 v55; // [rsp+88h] [rbp-51h]
  int v56; // [rsp+90h] [rbp-49h]
  __int64 v57; // [rsp+98h] [rbp-41h] BYREF
  struct tagTHREADINFO *v58; // [rsp+A0h] [rbp-39h]
  struct tagBWL *v59; // [rsp+A8h] [rbp-31h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v61; // [rsp+C0h] [rbp-19h] BYREF
  int v62; // [rsp+D0h] [rbp-9h]

  v49 = 1;
  v55 = a4;
  v52 = a3;
  v8 = a2;
  v10 = 0LL;
  v58 = PtiCurrent((__int64)a1, a2);
  v61 = 0LL;
  v62 = 0;
  if ( !a1 )
    return 0LL;
  if ( v8 - 1024 <= 0xBBFF )
  {
    UserSetLastError(87);
    return 1LL;
  }
  if ( !a6 && (v8 == 295 || v8 == 21 || v8 == 26 || v8 == 29 || v8 == 794) )
    a6 = 1;
  v59 = BuildHwndList(a1[14], 2LL, 0LL, 1);
  if ( !v59 )
    return 0LL;
  if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80 )
  {
    v46 = *(LastWokenThread **)(W32GetUserSessionState(v12, v11) + 19200);
    if ( a1[3] == v46
      && ((_InterlockedCompareExchange((volatile signed __int32 *)v58 + 132, 0, 0) & 8) != 0
       || CanForceForeground(*((const struct tagPROCESSINFO **)v58 + 58))) )
    {
      LastWokenThread::Clear(v46);
    }
  }
  v50 = 0LL;
  if ( v8 != 537 )
    goto LABEL_14;
  if ( a3 != 32772 )
  {
    v50 = 0LL;
    if ( a3 != 0x8000 )
      goto LABEL_14;
  }
  v40 = *(_DWORD *)(a4 + 4) == 2;
  v50 = 0LL;
  if ( !v40 )
    goto LABEL_14;
  if ( (*(_DWORD *)(a4 + 12) & 0x40000000) != 0 )
    return 0LL;
  v44 = *(_OWORD *)a4;
  v62 = *(_DWORD *)(a4 + 16);
  v45 = HIDWORD(*(_QWORD *)(a4 + 8)) | 0x40000000;
  v50 = 0LL;
  v40 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
  v61 = v44;
  HIDWORD(v61) = v45;
  if ( v40 )
  {
    InputBuffer = 0LL;
    GetProcessLuid(0LL, &InputBuffer);
    v50 = 0LL;
    if ( (_DWORD)InputBuffer == luidSystem[0] )
    {
      v11 = HIDWORD(InputBuffer) == luidSystem[1];
      v50 = v11;
    }
  }
LABEL_14:
  for ( i = (__int64 *)((char *)v59 + 32); ; i = (__int64 *)((char *)Handle + 8) )
  {
    v14 = *i;
    Handle = i;
    if ( v14 == 1 )
    {
      v32 = v49;
      goto LABEL_68;
    }
    v51 = 0;
    v15 = 0LL;
    W32GetCurrentThreadNonPaged(1LL, v11);
    v18 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19928);
    if ( (unsigned __int64)(unsigned __int16)v14 < *(_QWORD *)(v18 + 8) )
    {
      UserSessionState = W32GetUserSessionState(v18, v11);
      v22 = *(_DWORD *)(W32GetUserSessionState(v21, v20) + 19952) * (unsigned int)(unsigned __int16)v14
          + *(_QWORD *)(UserSessionState + 19944);
      v25 = (ULONG_PTR *)HMPkheFromPhe(v22);
      LOWORD(v14) = WORD1(v14) & 0x7FFF;
      if ( ((WORD1(v14) & 0x7FFF) == *(_WORD *)(v22 + 26)
         || (_WORD)v14 == 0x7FFF
         || !(_WORD)v14 && PsGetCurrentProcessWow64Process(v23, v11, v24))
        && (*(_BYTE *)(v22 + 25) & 1) == 0
        && *(_BYTE *)(v22 + 24) == 1 )
      {
        v15 = *v25;
      }
    }
    if ( v15 )
    {
      v11 = *((unsigned int *)a5 + 1);
      v26 = v15 + 16;
      v27 = v58;
      if ( (v11 & 2) == 0 || *(_QWORD *)(*(_QWORD *)v26 + 472LL) != *((_QWORD *)v58 + 59) )
      {
        if ( (v11 & 0x400) == 0
          || (v43 = *(_QWORD **)v26, v54 = 0LL, (int)GetProcessLuid(*v43, &v54) >= 0) && *((_QWORD *)a5 + 4) == v54 )
        {
          v28 = 1;
          if ( v50 == 1 )
          {
            v42 = *(_QWORD **)v26;
            InputBuffer = 0LL;
            if ( (int)GetProcessLuid(*v42, &InputBuffer) < 0 )
              continue;
            if ( (HANDLE)__PAIR64__(luidSystem[1], luidSystem[0]) != InputBuffer )
              v51 = 1;
          }
          v29 = *(_WORD *)(*(_QWORD *)(v15 + 40) + 42LL) & 0x2FFF;
          if ( (_DWORD)v29 != 668 )
          {
            v11 = *(unsigned __int16 *)(W32GetUserSessionState(v29, v11) + 41394);
            if ( (_WORD)v11 != **(_WORD **)(*(_QWORD *)(v15 + 136) + 8LL) )
              break;
          }
        }
      }
    }
LABEL_47:
    ;
  }
  BugCheckParameter3[0] = *((_QWORD *)v27 + 57);
  *((_QWORD *)v27 + 57) = BugCheckParameter3;
  BugCheckParameter3[1] = v15;
  HMLockObject(v15);
  v30 = *((_DWORD *)a5 + 1);
  if ( (v30 & 0x10) != 0 )
  {
    PostTransformableMessageIL((struct tagWND *)v15, v8, v52, v55, a6);
LABEL_44:
    CurrentThreadNonPaged = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v36, v35);
    if ( CurrentThreadNonPaged )
      v39 = *CurrentThreadNonPaged;
    else
      v39 = 0LL;
    Win32HM_UnlockFromThread<0>(v39, BugCheckParameter3);
    goto LABEL_47;
  }
  if ( (v30 & 0x100) != 0 )
  {
    xxxSendNotifyMessage(v15, v8, v52, v55, a6);
    goto LABEL_44;
  }
  if ( (v30 & 0x20000000) != 0 )
  {
    SendNotifyMessageAlways((struct tagWND *)v15, v8, v52, v55, (a6 != 0) + 2);
    goto LABEL_44;
  }
  v57 = 0LL;
  v31 = v30 & 8;
  InputBuffer = 0LL;
  v32 = v30 & 0x20;
  v56 = v31;
  if ( v8 != 536 || v52 != 4 )
    v28 = 0;
  if ( v31 )
    v33 = v28 != 0 ? 2000 : 5000;
  else
    v33 = 0;
  if ( v28 )
  {
    InputBuffer = PsGetThreadProcessId(**(PETHREAD **)(v15 + 16));
    ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
    v31 = v56;
  }
  v34 = (struct tagDRAWITEMSTRUCT *)&v61;
  if ( !v51 )
    v34 = (struct tagDRAWITEMSTRUCT *)v55;
  if ( xxxSendTransformableMessageTimeout(
         (struct tagTHREADINFO **)v15,
         v8,
         v52,
         v34,
         (v31 != 0 ? 2 : 0) | (*((_DWORD *)a5 + 1) >> 3) & 8u,
         v33,
         (unsigned __int64 *)&v57,
         a6,
         1) )
  {
    if ( (*((_DWORD *)a5 + 1) & 1) == 0 )
    {
      v32 = v49;
      goto LABEL_41;
    }
    v32 = 0;
    if ( v8 == 17 )
      v40 = v57 == 0;
    else
      v40 = v57 == 1112363332;
    LOBYTE(v32) = !v40;
  }
  v49 = v32;
LABEL_41:
  if ( v28 )
  {
    v37 = *(PETHREAD **)(v15 + 16);
    InputBuffer = 0LL;
    InputBuffer = PsGetThreadProcessId(*v37);
    ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
  }
  if ( v32 )
    goto LABEL_44;
  v40 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
  *((_QWORD *)a5 + 3) = *(_QWORD *)v15;
  if ( !v40 )
  {
    v36 = *(void **)(v15 + 24);
    Handle = 0LL;
    if ( v36 )
    {
      ObOpenObjectByPointer(v36, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
      v10 = Handle;
    }
    *((_QWORD *)a5 + 2) = v10;
  }
  v47 = PtiCurrent((__int64)v36, v35);
  Win32HM_UnlockFromThread<0>((ULONG_PTR)v47, BugCheckParameter3);
LABEL_68:
  FreeHwndList(v59, v11);
  return v32;
}
