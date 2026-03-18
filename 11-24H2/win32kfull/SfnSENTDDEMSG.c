/*
 * XREFs of SfnSENTDDEMSG @ 0x1402BB320
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
 *     xxxDDETrackGetMessageHook @ 0x14024E7A4 (xxxDDETrackGetMessageHook.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

ULONG_PTR __fastcall SfnSENTDDEMSG(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  int v9; // edi
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rsi
  __int64 v13; // r14
  signed int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG_PTR result; // rax
  ULONG_PTR v24[2]; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v25[8]; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v26; // [rsp+58h] [rbp-E0h]
  __int64 v27; // [rsp+68h] [rbp-D0h]
  __int64 v28; // [rsp+70h] [rbp-C8h] BYREF
  int v29; // [rsp+78h] [rbp-C0h]
  int v30; // [rsp+7Ch] [rbp-BCh]
  __int64 v31; // [rsp+80h] [rbp-B8h]
  __int64 v32; // [rsp+88h] [rbp-B0h]
  __int128 v33; // [rsp+90h] [rbp-A8h]
  __int64 v34; // [rsp+A0h] [rbp-98h] BYREF
  signed int v35; // [rsp+A8h] [rbp-90h]
  int v36; // [rsp+ACh] [rbp-8Ch]
  __int64 v37; // [rsp+B0h] [rbp-88h]
  __int64 v38; // [rsp+B8h] [rbp-80h]
  __int64 v39; // [rsp+C0h] [rbp-78h]
  __int64 v40; // [rsp+C8h] [rbp-70h]
  BOOL v41; // [rsp+D0h] [rbp-68h]
  int v42; // [rsp+D4h] [rbp-64h]
  ULONG_PTR BugCheckParameter3[12]; // [rsp+D8h] [rbp-60h] BYREF
  void *Src; // [rsp+140h] [rbp+8h] BYREF
  int v45; // [rsp+148h] [rbp+10h] BYREF

  v9 = a2;
  v30 = 0;
  v33 = 0LL;
  Src = 0LL;
  v45 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v11 = PtiCurrent((__int64)a1, a2);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 64);
  else
    v13 = 0LL;
  v36 = 0;
  v42 = 0;
  v14 = v9 & 0xBFFFFFFF;
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)a1);
  v17 = *((_QWORD *)v12 + 65);
  v26 = *(_OWORD *)(v17 + 64);
  v27 = *(_QWORD *)(v17 + 80);
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
  if ( v14 >= 0 )
  {
    v34 = v13;
    v35 = v14;
    v37 = a3;
    v38 = a4;
  }
  else
  {
    if ( a1 )
      v28 = *a1;
    else
      v28 = 0LL;
    v29 = v14 & 0x7FFFFFFF;
    v31 = a3;
    v32 = a4;
    xxxDDETrackGetMessageHook((__int64)&v28);
    v34 = _HMObjectFromHandle(v28) - *((_QWORD *)v12 + 64);
    v35 = v29;
    v37 = v31;
    v38 = v32;
  }
  v39 = a5;
  v40 = a6;
  v41 = (a7 & 1) == 0;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v25, v15, v16);
  EtwTraceBeginCallback(38LL);
  v20 = KeUserModeCallback(38LL, &v34, 56LL, &Src, &v45);
  EtwTraceEndCallback(38LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v25);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v21);
  v22 = *((_QWORD *)v12 + 65);
  *(_OWORD *)(v22 + 64) = v26;
  *(_QWORD *)(v22 + 80) = v27;
  if ( v20 < 0 || v45 != 24 )
    return 0LL;
  v24[0] = 0LL;
  RtlCopyFromUser(v24, Src, 8uLL);
  result = v24[0];
  BugCheckParameter3[2] = v24[0];
  return result;
}
