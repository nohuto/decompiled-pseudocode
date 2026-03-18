/*
 * XREFs of SfnINOUTLPUAHMEASUREMENUITEM @ 0x1401DDB20
 * Callers:
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x14007F440 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x140080630 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140119C04 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140280A70 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     _ServerFixupMenuDC @ 0x14015A1FC (_ServerFixupMenuDC.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

ULONG_PTR __fastcall SfnINOUTLPUAHMEASUREMENUITEM(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r12d
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // r14
  HDC v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  ULONG_PTR v24; // r14
  __int64 v25; // rcx
  void *v26; // rbx
  int v28[6]; // [rsp+30h] [rbp-1D8h] BYREF
  void *Src; // [rsp+48h] [rbp-1C0h] BYREF
  ULONG_PTR v30; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-1B0h]
  char v32[8]; // [rsp+68h] [rbp-1A0h] BYREF
  __int128 v33; // [rsp+70h] [rbp-198h]
  __int64 v34; // [rsp+80h] [rbp-188h]
  ULONG_PTR BugCheckParameter3[7]; // [rsp+88h] [rbp-180h] BYREF
  _OWORD v36[7]; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v37; // [rsp+130h] [rbp-D8h] BYREF
  int v38; // [rsp+138h] [rbp-D0h]
  __int64 v39; // [rsp+140h] [rbp-C8h]
  __int128 v40; // [rsp+148h] [rbp-C0h]
  __int128 v41; // [rsp+158h] [rbp-B0h]
  __int128 v42; // [rsp+168h] [rbp-A0h]
  __int128 v43; // [rsp+178h] [rbp-90h]
  __int128 v44; // [rsp+188h] [rbp-80h]
  __int128 v45; // [rsp+198h] [rbp-70h]
  __int128 v46; // [rsp+1A8h] [rbp-60h]
  __int64 v47; // [rsp+1B8h] [rbp-50h]
  __int64 v48; // [rsp+1C0h] [rbp-48h]

  v10 = a2;
  Src = 0LL;
  v28[0] = 0;
  v33 = 0LL;
  v34 = 0LL;
  v12 = PtiCurrent((__int64)a1, a2);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 64);
  else
    v14 = 0LL;
  memset_0(&v37, 0, 0x98uLL);
  v31 = 0LL;
  v15 = ServerFixupMenuDC(*((HDC *)a4 + 5), *((_QWORD *)a4 + 4), *((_DWORD *)a4 + 14), 1);
  if ( v15 )
  {
    v31 = *((_QWORD *)a4 + 5);
    *((_QWORD *)a4 + 5) = v15;
  }
  v37 = v14;
  v38 = v10 & 0x1FFFF;
  v39 = a3;
  v40 = *a4;
  v41 = a4[1];
  v42 = a4[2];
  v43 = a4[3];
  v44 = a4[4];
  v45 = a4[5];
  v46 = a4[6];
  DWORD1(v41) = 0;
  DWORD1(v43) = 0;
  v47 = a5;
  v48 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v16 = *((_QWORD *)v13 + 65);
  v33 = *(_OWORD *)(v16 + 64);
  v34 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 72LL) = v14;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 80LL) = v18;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v32);
  EtwTraceBeginCallback(109LL);
  v19 = KeUserModeCallback(109LL, &v37, 152LL, &Src, v28);
  EtwTraceEndCallback(109LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v32);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v20);
  v21 = *((_QWORD *)v13 + 65);
  *(_OWORD *)(v21 + 64) = v33;
  *(_QWORD *)(v21 + 80) = v34;
  if ( v19 < 0 || v28[0] != 24 )
    return 0LL;
  v30 = 0LL;
  RtlCopyFromUser(&v30, Src, 8uLL);
  v24 = v30;
  BugCheckParameter3[2] = v30;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v25 = *((_QWORD *)PtiCurrent(v23, v22) + 69);
    if ( !v25 || (*(_DWORD *)(v25 + 84) & 1) == 0 || *(__int128 **)(v25 + 96) != a4 )
    {
      v26 = (void *)*((_QWORD *)Src + 2);
      memset_0(v36, 0, sizeof(v36));
      RtlCopyFromUser(v36, v26, 0x70uLL);
      *a4 = v36[0];
      a4[1] = v36[1];
      a4[2] = v36[2];
      a4[3] = v36[3];
      a4[4] = v36[4];
      a4[5] = v36[5];
      a4[6] = v36[6];
      goto LABEL_21;
    }
    return 0LL;
  }
LABEL_21:
  if ( v15 )
  {
    _ReleaseDC(v15);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *((_QWORD *)a4 + 5) = v31;
  }
  return v24;
}
