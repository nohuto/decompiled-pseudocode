/*
 * XREFs of SfnINLPCOMPAREITEMSTRUCT @ 0x1401D8D10
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

ULONG_PTR __fastcall SfnINLPCOMPAREITEMSTRUCT(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        ULONG_PTR a5,
        __int64 a6)
{
  int v8; // r12d
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  ULONG_PTR result; // rax
  __int128 v20; // [rsp+48h] [rbp-D0h]
  __int64 v21; // [rsp+58h] [rbp-C0h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+90h] [rbp-88h] BYREF
  int v24; // [rsp+98h] [rbp-80h]
  __int64 v25; // [rsp+A0h] [rbp-78h]
  __int128 v26; // [rsp+A8h] [rbp-70h]
  __int128 v27; // [rsp+B8h] [rbp-60h]
  __int128 v28; // [rsp+C8h] [rbp-50h]
  __int64 v29; // [rsp+D8h] [rbp-40h]
  ULONG_PTR v30; // [rsp+E0h] [rbp-38h]
  __int64 v31; // [rsp+E8h] [rbp-30h]
  void *Src; // [rsp+120h] [rbp+8h] BYREF
  int v33; // [rsp+128h] [rbp+10h] BYREF

  v8 = a2;
  Src = 0LL;
  v33 = 0;
  v10 = PtiCurrent((__int64)a1, a2);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 64);
  else
    v12 = 0LL;
  memset_0(&v23, 0, 0x60uLL);
  v23 = v12;
  v24 = v8;
  v25 = a3;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 9) = 0;
  *((_DWORD *)a4 + 13) = 0;
  v26 = *a4;
  v27 = a4[1];
  v28 = a4[2];
  v29 = *((_QWORD *)a4 + 6);
  v30 = a5;
  v31 = a6;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v13 = *((_QWORD *)v11 + 65);
  v20 = *(_OWORD *)(v13 + 64);
  v21 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v12;
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 65) + 64LL) = v14;
  if ( a1 )
    v15 = *(_QWORD *)(a1[5] + 224);
  else
    v15 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 65) + 80LL) = v15;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6);
  EtwTraceBeginCallback(9LL);
  v16 = KeUserModeCallback(9LL, &v23, 96LL, &Src, &v33);
  EtwTraceEndCallback(9LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a6);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v17);
  v18 = *((_QWORD *)v11 + 65);
  *(_OWORD *)(v18 + 64) = v20;
  *(_QWORD *)(v18 + 80) = v21;
  if ( v16 < 0 || v33 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  result = a5;
  BugCheckParameter3[2] = a5;
  return result;
}
