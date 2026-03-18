/*
 * XREFs of SfnINLPUAHINITMENU @ 0x1401CF210
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
 */

__int64 __fastcall SfnINLPUAHINITMENU(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v9; // r12d
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r13
  HDC v15; // rax
  HDC v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int128 v25; // [rsp+48h] [rbp-C0h]
  __int64 v26; // [rsp+58h] [rbp-B0h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  int v29; // [rsp+78h] [rbp-90h]
  int v30; // [rsp+7Ch] [rbp-8Ch]
  __int64 v31; // [rsp+80h] [rbp-88h]
  _BYTE v32[24]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  void *Src; // [rsp+110h] [rbp+8h] BYREF
  int v37; // [rsp+118h] [rbp+10h] BYREF
  __int64 v38; // [rsp+120h] [rbp+18h] BYREF

  v38 = a3;
  v9 = a2;
  Src = 0LL;
  v37 = 0;
  v11 = PtiCurrent((__int64)a1, a2);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 64);
  else
    v13 = 0LL;
  v30 = 0;
  memset(v32, 0, sizeof(v32));
  v14 = 0LL;
  v15 = ServerFixupMenuDC(*(HDC *)(a4 + 8), *(_QWORD *)a4, 0, 0);
  v16 = v15;
  if ( v15 )
  {
    v14 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v15;
  }
  v28 = v13;
  v29 = v9 & 0x1FFFF;
  v31 = v38;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)v32 = *(_OWORD *)a4;
  *(_QWORD *)&v32[16] = *(_QWORD *)(a4 + 16);
  v33 = a5;
  v34 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v17 = *((_QWORD *)v12 + 65);
  v25 = *(_OWORD *)(v17 + 64);
  v26 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v13;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 80LL) = v19;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  EtwTraceBeginCallback(108LL);
  v20 = KeUserModeCallback(108LL, &v28, 64LL, &Src, &v37);
  EtwTraceEndCallback(108LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v21);
  v22 = *((_QWORD *)v12 + 65);
  *(_OWORD *)(v22 + 64) = v25;
  *(_QWORD *)(v22 + 80) = v26;
  if ( v20 < 0 || v37 != 24 )
    return 0LL;
  v38 = 0LL;
  RtlCopyFromUser(&v38, Src, 8uLL);
  v23 = v38;
  v35 = v38;
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 8) = v14;
  }
  return v23;
}
