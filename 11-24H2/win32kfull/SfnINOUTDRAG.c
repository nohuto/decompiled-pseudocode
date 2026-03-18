/*
 * XREFs of SfnINOUTDRAG @ 0x1402B9720
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
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall SfnINOUTDRAG(
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rcx
  void *v27; // rdx
  __int128 v29; // [rsp+48h] [rbp-110h]
  __int64 v30; // [rsp+58h] [rbp-100h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v32; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v33; // [rsp+80h] [rbp-D8h]
  __int128 v34; // [rsp+90h] [rbp-C8h]
  __int64 v35; // [rsp+A0h] [rbp-B8h]
  __int64 v36; // [rsp+D0h] [rbp-88h] BYREF
  int v37; // [rsp+D8h] [rbp-80h]
  __int64 v38; // [rsp+E0h] [rbp-78h]
  __int64 v39; // [rsp+E8h] [rbp-70h]
  __int64 v40; // [rsp+F0h] [rbp-68h]
  __int128 v41; // [rsp+F8h] [rbp-60h]
  __int128 v42; // [rsp+108h] [rbp-50h]
  __int128 v43; // [rsp+118h] [rbp-40h]
  void *Src; // [rsp+160h] [rbp+8h] BYREF
  int v45; // [rsp+168h] [rbp+10h] BYREF

  v10 = a2;
  Src = 0LL;
  v45 = 0;
  v12 = PtiCurrent((__int64)a1, a2);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 64);
  else
    v14 = 0LL;
  memset_0(&v36, 0, 0x58uLL);
  v36 = v14;
  v37 = v10;
  v38 = a3;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 11) = 0;
  v41 = *a4;
  v42 = a4[1];
  v43 = a4[2];
  v39 = a5;
  v40 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v17 = *((_QWORD *)v13 + 65);
  v29 = *(_OWORD *)(v17 + 64);
  v30 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 65) + 80LL) = v19;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6, v15, v16);
  EtwTraceBeginCallback(5LL);
  v20 = KeUserModeCallback(5LL, &v36, 88LL, &Src, &v45);
  EtwTraceEndCallback(5LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v21);
  v22 = *((_QWORD *)v13 + 65);
  *(_OWORD *)(v22 + 64) = v29;
  *(_QWORD *)(v22 + 80) = v30;
  if ( v20 >= 0 && v45 == 24 )
  {
    a5 = 0LL;
    RtlCopyFromUser(&a5, Src, 8uLL);
    v25 = a5;
    v35 = a5;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v25;
    v26 = *((_QWORD *)PtiCurrent(v24, v23) + 69);
    if ( !v26 || (*(_DWORD *)(v26 + 84) & 1) == 0 || *(__int128 **)(v26 + 96) != a4 )
    {
      v27 = (void *)*((_QWORD *)Src + 2);
      v32 = 0LL;
      v33 = 0LL;
      v34 = 0LL;
      RtlCopyFromUser(&v32, v27, 0x30uLL);
      *a4 = v32;
      a4[1] = v33;
      a4[2] = v34;
      return v25;
    }
  }
  return 0LL;
}
