/*
 * XREFs of SfnINOUTLPSCROLLINFO @ 0x1401A5A30
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

ULONG_PTR __fastcall SfnINOUTLPSCROLLINFO(
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
  struct tagTHREADINFO *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG_PTR v23; // rbx
  __int64 v24; // rcx
  void *v25; // rdx
  int v27[6]; // [rsp+30h] [rbp-138h] BYREF
  void *Src; // [rsp+48h] [rbp-120h] BYREF
  ULONG_PTR v29[2]; // [rsp+50h] [rbp-118h] BYREF
  char v30[8]; // [rsp+60h] [rbp-108h] BYREF
  __int128 v31; // [rsp+68h] [rbp-100h]
  __int64 v32; // [rsp+78h] [rbp-F0h]
  __int128 v33; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+90h] [rbp-D8h]
  int v35; // [rsp+98h] [rbp-D0h]
  ULONG_PTR BugCheckParameter3[8]; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-88h] BYREF
  int v38; // [rsp+E8h] [rbp-80h]
  __int64 v39; // [rsp+F0h] [rbp-78h]
  __int128 v40; // [rsp+F8h] [rbp-70h]
  __int64 v41; // [rsp+108h] [rbp-60h]
  int v42; // [rsp+110h] [rbp-58h]
  __int64 v43; // [rsp+118h] [rbp-50h]
  __int64 v44; // [rsp+120h] [rbp-48h]

  v10 = a2;
  Src = 0LL;
  v27[0] = 0;
  v31 = 0LL;
  v32 = 0LL;
  v12 = PtiCurrent((__int64)a1, a2);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 64);
  else
    v14 = 0LL;
  memset_0(&v37, 0, 0x48uLL);
  v37 = v14;
  v38 = v10;
  v39 = a3;
  v40 = *a4;
  v41 = *((_QWORD *)a4 + 2);
  v42 = *((_DWORD *)a4 + 6);
  v43 = a5;
  v44 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *((_QWORD *)v13 + 65);
  v31 = *(_OWORD *)(v15 + 64);
  v32 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 72LL) = v14;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 80LL) = v17;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v30);
  EtwTraceBeginCallback(19LL);
  v18 = KeUserModeCallback(19LL, &v37, 72LL, &Src, v27);
  EtwTraceEndCallback(19LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v30);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v19);
  v20 = *((_QWORD *)v13 + 65);
  *(_OWORD *)(v20 + 64) = v31;
  *(_QWORD *)(v20 + 80) = v32;
  if ( v18 >= 0 && v27[0] == 24 )
  {
    v29[0] = 0LL;
    RtlCopyFromUser(v29, Src, 8uLL);
    v23 = v29[0];
    BugCheckParameter3[2] = v29[0];
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v23;
    v24 = *((_QWORD *)PtiCurrent(v22, v21) + 69);
    if ( !v24 || (*(_DWORD *)(v24 + 84) & 1) == 0 || *(__int128 **)(v24 + 96) != a4 )
    {
      v25 = (void *)*((_QWORD *)Src + 2);
      v33 = 0LL;
      v34 = 0LL;
      v35 = 0;
      RtlCopyFromUser(&v33, v25, 0x1CuLL);
      *a4 = v33;
      *((_QWORD *)a4 + 2) = v34;
      *((_DWORD *)a4 + 6) = v35;
      return v23;
    }
  }
  return 0LL;
}
