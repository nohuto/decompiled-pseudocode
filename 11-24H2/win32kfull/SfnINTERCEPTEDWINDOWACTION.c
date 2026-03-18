/*
 * XREFs of SfnINTERCEPTEDWINDOWACTION @ 0x1402BA8A0
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
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

ULONG_PTR __fastcall SfnINTERCEPTEDWINDOWACTION(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r15d
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  ULONG_PTR result; // rax
  _DWORD v22[6]; // [rsp+30h] [rbp-148h] BYREF
  void *Src; // [rsp+48h] [rbp-130h] BYREF
  ULONG_PTR v24[2]; // [rsp+50h] [rbp-128h] BYREF
  _BYTE v25[8]; // [rsp+60h] [rbp-118h] BYREF
  __int128 v26; // [rsp+68h] [rbp-110h]
  __int64 v27; // [rsp+78h] [rbp-100h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-C8h] BYREF
  int v30; // [rsp+B8h] [rbp-C0h]
  __int64 v31; // [rsp+C0h] [rbp-B8h]
  __int128 v32; // [rsp+C8h] [rbp-B0h]
  __int128 v33; // [rsp+D8h] [rbp-A0h]
  __int128 v34; // [rsp+E8h] [rbp-90h]
  __int128 v35; // [rsp+F8h] [rbp-80h]
  __int128 v36; // [rsp+108h] [rbp-70h]
  __int128 v37; // [rsp+118h] [rbp-60h]
  __int64 v38; // [rsp+128h] [rbp-50h]
  __int64 v39; // [rsp+130h] [rbp-48h]

  v8 = a2;
  Src = 0LL;
  v22[0] = 0;
  v26 = 0LL;
  v27 = 0LL;
  v10 = PtiCurrent((__int64)a1, a2);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 64);
  else
    v12 = 0LL;
  memset_0(&v29, 0, 0x88uLL);
  v29 = v12;
  v30 = v8 & 0x1FFFF;
  v31 = a3;
  *((_DWORD *)a4 + 7) = 0;
  *((_DWORD *)a4 + 23) = 0;
  v32 = *a4;
  v33 = a4[1];
  v34 = a4[2];
  v35 = a4[3];
  v36 = a4[4];
  v37 = a4[5];
  v38 = a5;
  v39 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *((_QWORD *)v11 + 65);
  v26 = *(_OWORD *)(v15 + 64);
  v27 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(*((_QWORD *)v11 + 65) + 72LL) = v12;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 65) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 65) + 80LL) = v17;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v25, v13, v14);
  EtwTraceBeginCallback(131LL);
  v18 = KeUserModeCallback(131LL, &v29, 136LL, &Src, v22);
  EtwTraceEndCallback(131LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v25);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v19);
  v20 = *((_QWORD *)v11 + 65);
  *(_OWORD *)(v20 + 64) = v26;
  *(_QWORD *)(v20 + 80) = v27;
  if ( v18 < 0 || v22[0] != 24 )
    return 0LL;
  v24[0] = 0LL;
  RtlCopyFromUser(v24, Src, 8uLL);
  result = v24[0];
  BugCheckParameter3[2] = v24[0];
  return result;
}
