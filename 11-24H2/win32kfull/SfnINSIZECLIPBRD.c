/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1402BA610
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
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINSIZECLIPBRD(__int64 *a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  int v8; // r13d
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rax
  _DWORD v26[6]; // [rsp+30h] [rbp-E8h] BYREF
  void *Src; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v29[8]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-B0h]
  __int128 v31; // [rsp+70h] [rbp-A8h]
  __int64 v32; // [rsp+80h] [rbp-98h]
  ULONG_PTR BugCheckParameter3[5]; // [rsp+88h] [rbp-90h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-68h] BYREF
  int v35; // [rsp+B8h] [rbp-60h]
  int v36; // [rsp+BCh] [rbp-5Ch]
  __int64 v37; // [rsp+C0h] [rbp-58h]
  __int128 v38; // [rsp+C8h] [rbp-50h]
  __int64 v39; // [rsp+D8h] [rbp-40h]
  __int64 v40; // [rsp+E0h] [rbp-38h]

  v8 = a2;
  v10 = 0LL;
  Src = 0LL;
  v26[0] = 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v11 = PtiCurrent((__int64)a1, a2);
  v13 = v11;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v11 + 64);
  else
    v14 = 0LL;
  v36 = 0;
  v38 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  v16 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(v16 + 672), 4u) )
  {
    v34 = v14;
    v35 = v8;
    v37 = a3;
    v38 = *a4;
    v39 = a5;
    v40 = a6;
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
    v19 = *((_QWORD *)v13 + 65);
    v31 = *(_OWORD *)(v19 + 64);
    v32 = *(_QWORD *)(v19 + 80);
    *(_QWORD *)(*((_QWORD *)v13 + 65) + 72LL) = v14;
    v20 = 0LL;
    if ( a1 )
      v20 = *a1;
    *(_QWORD *)(*((_QWORD *)v13 + 65) + 64LL) = v20;
    if ( a1 )
      v21 = *(_QWORD *)(a1[5] + 224);
    else
      v21 = 0LL;
    *(_QWORD *)(*((_QWORD *)v13 + 65) + 80LL) = v21;
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v29, v17, v18);
    EtwTraceBeginCallback(24LL);
    v22 = KeUserModeCallback(24LL, &v34, 56LL, &Src, v26);
    EtwTraceEndCallback(24LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v29);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v23);
    v24 = *((_QWORD *)v13 + 65);
    *(_OWORD *)(v24 + 64) = v31;
    *(_QWORD *)(v24 + 80) = v32;
    if ( v22 < 0 || v26[0] != 24 )
      return 0LL;
    v28 = 0LL;
    RtlCopyFromUser(&v28, Src, 8uLL);
    v10 = v28;
    v30 = v28;
  }
  return v10;
}
