/*
 * XREFs of EditionNonDwmTouchHitTest @ 0x1402A36C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x140068C78 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x140159868 (INPUTDEST_FROM_PWND.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1401598B0 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     TouchTargetChildTree @ 0x1401B69B8 (TouchTargetChildTree.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1401B6C08 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 */

_OWORD *__fastcall EditionNonDwmTouchHitTest(_OWORD *a1, __int64 a2, struct tagTOUCHTARGETINGCONTACT *a3, _DWORD *a4)
{
  __int64 UserSessionState; // rax
  _OWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagPOINT *v12; // r14
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  struct tagWND *v20; // rax
  struct tagWND *v21; // rax
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rcx
  struct tagWND *v30; // r15
  __int64 v31; // rdx
  _QWORD *v32; // rax
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct tagWND *v38; // rbx
  _OWORD *v39; // rax
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  _DWORD v47[28]; // [rsp+30h] [rbp-88h] BYREF
  struct tagPOINT v48; // [rsp+C0h] [rbp+8h] BYREF

  if ( a4 )
    *a4 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v9 = INPUTDEST_FROM_PWND(v47, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 19200) + 8LL) + 24LL));
  v12 = (struct tagPOINT *)(a2 + 20);
  v13 = v9[1];
  *a1 = *v9;
  v14 = v9[2];
  a1[1] = v13;
  v15 = v9[3];
  a1[2] = v14;
  v16 = v9[4];
  a1[3] = v15;
  v17 = v9[5];
  a1[4] = v16;
  v18 = v9[6];
  a1[5] = v17;
  a1[6] = v18;
  if ( a3 )
  {
    v48 = 0LL;
    v29 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19200);
    v30 = *(struct tagWND **)(*(_QWORD *)(v29 + 8) + 24LL);
    v32 = *(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v29, v31) + 19200) + 8LL);
    v33 = *(_DWORD *)(*v32 + 64LL) & 1;
    v35 = W32GetUserSessionState(*v32, v34);
    v38 = TopLevelTouchTarget(
            *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v35 + 19200) + 8LL) + 24LL),
            a3,
            v12,
            &v48,
            v33);
    if ( v38 )
    {
      if ( a4 )
        *a4 = 1;
      W32GetUserSessionState(v37, v36);
      v30 = TouchTargetChildTree(v38, a3, (unsigned __int64)*v12, &v48);
    }
    v39 = INPUTDEST_FROM_PWND(v47, (__int64)v30);
    v40 = v39[1];
    *a1 = *v39;
    v41 = v39[2];
    a1[1] = v40;
    v42 = v39[3];
    a1[2] = v41;
    v43 = v39[4];
    a1[3] = v42;
    v44 = v39[5];
    a1[4] = v43;
    v45 = v39[6];
    a1[5] = v44;
    a1[6] = v45;
  }
  else if ( !*(_DWORD *)(a2 + 68) )
  {
    v19 = W32GetUserSessionState(v11, v10);
    v20 = TopLevelSpeedHitTest(*(struct tagDESKTOP **)(v19 + 19200), (struct tagPOINT *)(a2 + 20), 0LL);
    if ( v20 )
    {
      v21 = ClassicChildTreeSpeedHitTest(v20, *v12);
      if ( v21 )
      {
        v22 = INPUTDEST_FROM_PWND(v47, (__int64)v21);
        v23 = v22[1];
        *a1 = *v22;
        v24 = v22[2];
        a1[1] = v23;
        v25 = v22[3];
        a1[2] = v24;
        v26 = v22[4];
        a1[3] = v25;
        v27 = v22[5];
        a1[4] = v26;
        v28 = v22[6];
        a1[5] = v27;
        a1[6] = v28;
        if ( a4 )
          *a4 = 1;
      }
    }
  }
  return a1;
}
