/*
 * XREFs of SfnINLPUAHDRAWMENUITEM @ 0x1401CCCE0
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

ULONG_PTR __fastcall SfnINLPUAHDRAWMENUITEM(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // r12
  HDC v15; // rax
  HDC v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG_PTR v23; // rdi
  int v25; // [rsp+30h] [rbp-178h] BYREF
  ULONG_PTR v26[3]; // [rsp+38h] [rbp-170h] BYREF
  void *Src; // [rsp+50h] [rbp-158h] BYREF
  char v28[8]; // [rsp+60h] [rbp-148h] BYREF
  __int128 v29; // [rsp+68h] [rbp-140h]
  __int64 v30; // [rsp+78h] [rbp-130h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+80h] [rbp-128h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-F8h] BYREF
  int v33; // [rsp+B8h] [rbp-F0h]
  __int64 v34; // [rsp+C0h] [rbp-E8h]
  __int128 v35; // [rsp+C8h] [rbp-E0h]
  __int128 v36; // [rsp+D8h] [rbp-D0h]
  __int128 v37; // [rsp+E8h] [rbp-C0h]
  __int128 v38; // [rsp+F8h] [rbp-B0h]
  __int128 v39; // [rsp+108h] [rbp-A0h]
  __int128 v40; // [rsp+118h] [rbp-90h]
  __int128 v41; // [rsp+128h] [rbp-80h]
  __int128 v42; // [rsp+138h] [rbp-70h]
  __int128 v43; // [rsp+148h] [rbp-60h]
  __int64 v44; // [rsp+158h] [rbp-50h]
  __int64 v45; // [rsp+160h] [rbp-48h]

  LODWORD(v26[0]) = a2;
  Src = 0LL;
  v25 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v11 = PtiCurrent((__int64)a1, a2);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 64);
  else
    v13 = 0LL;
  memset_0(&v32, 0, 0xB8uLL);
  v14 = 0LL;
  v15 = ServerFixupMenuDC(*((HDC *)a4 + 4), *((_QWORD *)a4 + 8), *((_DWORD *)a4 + 22), 1);
  v16 = v15;
  if ( v15 )
  {
    v14 = *((_QWORD *)a4 + 4);
    *((_QWORD *)a4 + 4) = v15;
    *((_QWORD *)a4 + 9) = v15;
  }
  v32 = v13;
  v33 = v26[0];
  v34 = a3;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 21) = 0;
  v35 = *a4;
  v36 = a4[1];
  v37 = a4[2];
  v38 = a4[3];
  v39 = a4[4];
  v40 = a4[5];
  v41 = a4[6];
  v42 = a4[7];
  v43 = a4[8];
  v44 = a5;
  v45 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v17 = *((_QWORD *)v12 + 65);
  v29 = *(_OWORD *)(v17 + 64);
  v30 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(*((_QWORD *)v12 + 65) + 72LL) = v13;
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
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v28);
  EtwTraceBeginCallback(107LL);
  v20 = KeUserModeCallback(107LL, &v32, 184LL, &Src, &v25);
  EtwTraceEndCallback(107LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v28);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v21);
  v22 = *((_QWORD *)v12 + 65);
  *(_OWORD *)(v22 + 64) = v29;
  *(_QWORD *)(v22 + 80) = v30;
  if ( v20 < 0 || v25 != 24 )
    return 0LL;
  v26[0] = 0LL;
  RtlCopyFromUser(v26, Src, 8uLL);
  v23 = v26[0];
  BugCheckParameter3[2] = v26[0];
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      *((_QWORD *)a4 + 4) = v14;
      *((_QWORD *)a4 + 9) = v14;
    }
  }
  return v23;
}
