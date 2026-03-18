/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1402B9FC0
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
 *     _WindowFromDC @ 0x14015A3B8 (_WindowFromDC.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(__int64 *a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  int v8; // r13d
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rax
  _DWORD v28[6]; // [rsp+30h] [rbp-128h] BYREF
  void *Src; // [rsp+48h] [rbp-110h] BYREF
  __int64 v30; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v31[8]; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-F0h]
  __int128 v33; // [rsp+70h] [rbp-E8h]
  __int64 v34; // [rsp+80h] [rbp-D8h]
  ULONG_PTR BugCheckParameter3[5]; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-A8h] BYREF
  int v37; // [rsp+B8h] [rbp-A0h]
  __int64 v38; // [rsp+C0h] [rbp-98h]
  __int128 v39; // [rsp+C8h] [rbp-90h]
  __int128 v40; // [rsp+D8h] [rbp-80h]
  __int128 v41; // [rsp+E8h] [rbp-70h]
  __int128 v42; // [rsp+F8h] [rbp-60h]
  __int64 v43; // [rsp+108h] [rbp-50h]
  __int64 v44; // [rsp+110h] [rbp-48h]
  __int64 v45; // [rsp+118h] [rbp-40h]

  v8 = a2;
  v10 = 0LL;
  Src = 0LL;
  v28[0] = 0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v11 = PtiCurrent((__int64)a1, a2);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 64);
  else
    v13 = 0LL;
  memset_0(&v36, 0, 0x70uLL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
  v16 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v16 + 672), 4u) )
    return v10;
  v36 = v13;
  v37 = v8;
  v38 = a3;
  *((_DWORD *)a4 + 17) = 0;
  v39 = *a4;
  v40 = a4[1];
  v41 = a4[2];
  v42 = a4[3];
  v43 = *((_QWORD *)a4 + 8);
  v44 = a5;
  v45 = a6;
  v18 = WindowFromDC(*(_QWORD *)a4, v17);
  *(_QWORD *)&v39 = _GetDC(v18);
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v21 = *((_QWORD *)v12 + 65);
  v33 = *(_OWORD *)(v21 + 64);
  v34 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 72LL) = v13;
  v22 = 0LL;
  if ( a1 )
    v22 = *a1;
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224);
  else
    v23 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 80LL) = v23;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v31, v19, v20);
  EtwTraceBeginCallback(23LL);
  v24 = KeUserModeCallback(23LL, &v36, 112LL, &Src, v28);
  EtwTraceEndCallback(23LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v31);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v25);
  v26 = *((_QWORD *)v12 + 65);
  *(_OWORD *)(v26 + 64) = v33;
  *(_QWORD *)(v26 + 80) = v34;
  if ( v24 >= 0 && v28[0] == 24 )
  {
    v30 = 0LL;
    RtlCopyFromUser(&v30, Src, 8uLL);
    v10 = v30;
    v32 = v30;
    _ReleaseDC(v39);
    return v10;
  }
  return 0LL;
}
