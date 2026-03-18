/*
 * XREFs of SfnGETWINDOWDATA @ 0x1402B88A0
 * Callers:
 *     xxxDefWindowProc @ 0x14007E7C0 (xxxDefWindowProc.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x14007F440 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x140080630 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140119C04 (xxxSendMessageCallback.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140280A70 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall SfnGETWINDOWDATA(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // ebx
  __int64 v17; // [rsp+40h] [rbp-48h] BYREF
  int v18; // [rsp+48h] [rbp-40h]
  int v19; // [rsp+4Ch] [rbp-3Ch]
  __int64 v20; // [rsp+50h] [rbp-38h]
  __int64 v21; // [rsp+58h] [rbp-30h]
  __int64 v22; // [rsp+60h] [rbp-28h]
  __int64 v23; // [rsp+68h] [rbp-20h]
  void *Src; // [rsp+90h] [rbp+8h] BYREF
  int v25; // [rsp+98h] [rbp+10h] BYREF

  v7 = a2;
  Src = 0LL;
  v25 = 0;
  PtiCurrent((__int64)a1, a2);
  v19 = 0;
  if ( a1 )
    v11 = *a1;
  else
    v11 = 0LL;
  v17 = v11;
  v18 = v7;
  v20 = a3;
  v21 = a4;
  v22 = a5;
  if ( (*(_BYTE *)(a1[5] + 18) & 8) != 0 )
    v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19928) + 424LL);
  else
    v12 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19928) + 616LL);
  v23 = v12;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5, v13, v14);
  EtwTraceBeginCallback(125LL);
  v15 = KeUserModeCallback(125LL, &v17, 48LL, &Src, &v25);
  EtwTraceEndCallback(125LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  if ( v15 < 0 || v25 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  return a5;
}
