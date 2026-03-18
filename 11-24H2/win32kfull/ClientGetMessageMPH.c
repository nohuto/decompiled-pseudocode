/*
 * XREFs of ClientGetMessageMPH @ 0x140107C90
 * Callers:
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     xxxInternalGetMessage @ 0x140107C10 (xxxInternalGetMessage.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall ClientGetMessageMPH(_OWORD *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v7; // ebx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rdx
  __int64 v14; // [rsp+30h] [rbp-78h] BYREF
  __int64 v15; // [rsp+38h] [rbp-70h] BYREF
  int v16; // [rsp+40h] [rbp-68h]
  int v17; // [rsp+44h] [rbp-64h]
  int v18; // [rsp+48h] [rbp-60h]
  int v19; // [rsp+4Ch] [rbp-5Ch]
  __int128 v20; // [rsp+50h] [rbp-58h] BYREF
  __int128 v21; // [rsp+60h] [rbp-48h]
  __int128 v22; // [rsp+70h] [rbp-38h]
  __int64 v23; // [rsp+80h] [rbp-28h]
  void *Src; // [rsp+B8h] [rbp+10h] BYREF
  int v25; // [rsp+C0h] [rbp+18h] BYREF

  Src = 0LL;
  v25 = 0;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v18 = a5;
  v19 = a6;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v14);
  EtwTraceBeginCallback(73LL);
  v7 = KeUserModeCallback(73LL, &v15, 24LL, &Src, &v25);
  EtwTraceEndCallback(73LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v14);
  if ( v7 < 0 )
    return 0LL;
  if ( v25 != 24 )
    return 0LL;
  v14 = 0LL;
  RtlCopyFromUser(&v14, Src, 8uLL);
  v8 = v14;
  v23 = v14;
  v11 = *((_QWORD *)PtiCurrent(v10, v9) + 69);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 84) & 1) != 0 && *(_OWORD **)(v11 + 96) == a1 )
      return 0LL;
  }
  v12 = (void *)*((_QWORD *)Src + 2);
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  RtlCopyFromUser(&v20, v12, 0x30uLL);
  *a1 = v20;
  a1[1] = v21;
  a1[2] = v22;
  return v8;
}
