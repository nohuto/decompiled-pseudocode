/*
 * XREFs of ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14024C350
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x14018716C (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     GreIsWindowResizeInProgress @ 0x1401C90F0 (GreIsWindowResizeInProgress.c)
 *     bSetDevDragRect @ 0x1401D7390 (bSetDevDragRect.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x140221584 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x140248FAC (-SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x140274E78 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402A9F8C (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 *     ?CheckAndEmitRequiredHaptic@MoveSizeHaptic@@QEAAXXZ @ 0x1402DC1F4 (-CheckAndEmitRequiredHaptic@MoveSizeHaptic@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxTM_MoveDragRect(struct MOVESIZEDATA *a1, unsigned int a2)
{
  __int64 v2; // rax
  Gre::Base **v4; // rcx
  char v5; // bl
  Gre::Base *v7; // rcx
  struct tagMONITOR *v8; // r8
  bool v9; // zf
  struct tagRECT *v10; // r14
  struct tagRECT *v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  bool v14; // al
  struct tagRECT *v15; // r13
  unsigned int v16; // r12d
  char v17; // di
  char v18; // bl
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rcx
  char v23; // di
  char v24; // bl
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rax
  int v29; // eax
  unsigned __int64 v30; // r8
  struct tagTHREADINFO **v31; // rcx
  char v32; // di
  char v33; // bl
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  unsigned __int64 v37; // r8
  struct tagTHREADINFO **v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  int v45; // r12d
  int v46; // r13d
  char v47; // r15
  char v48; // r14
  LONG top; // ebx
  LONG left; // edi
  __int64 v51; // rax
  __int64 v52; // [rsp+40h] [rbp-59h]
  unsigned int v53; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v54; // [rsp+84h] [rbp-15h] BYREF
  struct tagPOINT v55; // [rsp+88h] [rbp-11h]
  __int64 v56; // [rsp+90h] [rbp-9h]
  struct tagRECT *v57; // [rsp+98h] [rbp-1h]
  struct tagRECT v58; // [rsp+A0h] [rbp+7h] BYREF

  v2 = *((_QWORD *)a1 + 27);
  v4 = (Gre::Base **)*((_QWORD *)a1 + 2);
  v53 = 0;
  v5 = 0;
  v56 = v2;
  v55.x = (__int16)a2;
  v58 = 0LL;
  v7 = *v4;
  v55.y = SHIWORD(a2);
  v54 = 0;
  if ( GreIsWindowResizeInProgress(v7) )
  {
    *((_DWORD *)a1 + 50) |= 0x2000000u;
    return;
  }
  v9 = *((_DWORD *)a1 + 44) == 9;
  v10 = (struct tagRECT *)((char *)a1 + 40);
  v11 = (struct tagRECT *)((char *)a1 + 24);
  v57 = (struct tagRECT *)((char *)a1 + 40);
  *(_OWORD *)((char *)a1 + 40) = *(_OWORD *)((char *)a1 + 24);
  *(_OWORD *)((char *)a1 + 72) = *(_OWORD *)((char *)a1 + 56);
  if ( v9 )
  {
    v14 = xxxSizeOrMoveRect(a1, v55, (struct tagRECT *)((char *)a1 + 40), &v53);
    v13 = 0LL;
    if ( !v14 )
      return;
  }
  else
  {
    v12 = SizeRect(a1, a2, v8, &v54);
    v13 = 0LL;
    if ( !v12 )
      return;
    v5 = v54;
    v53 = 532;
  }
  v15 = (struct tagRECT *)((char *)a1 + 40);
  v16 = 0;
  if ( (*((_DWORD *)a1 + 50) & 0x20) != 0 )
  {
    if ( (v5 & 2) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v17 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v17 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v18 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v18 = 0;
      }
      if ( v17 || v18 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v20) = v18;
        LOBYTE(v21) = v17;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v21,
          v20,
          *(_QWORD *)(UserSessionState + 69416),
          5,
          1,
          52,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
      }
      xxxDrawDragRectEx(a1, 0LL, 0x80000000, (struct tagRECT *)((char *)a1 + 24));
    }
    else if ( (v5 & 1) != 0 )
    {
      v22 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v23 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v23 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v24 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v24 = 0;
      }
      if ( v23 || v24 )
      {
        v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v26) = v24;
        LOBYTE(v27) = v23;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v27,
          v26,
          *(_QWORD *)(v25 + 69416),
          5,
          1,
          53,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
      }
      v28 = W32GetUserSessionState(v22, v13);
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v28 + 57008) + 48LL), 0LL, 0LL, 0);
    }
  }
  v29 = *((_DWORD *)a1 + 50);
  if ( (v29 & 0x80000) != 0 )
  {
    if ( (v29 & 0x20) != 0 )
    {
      v30 = *((int *)a1 + 44);
      v31 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 2);
      v58 = *(struct tagRECT *)((char *)a1 + 72);
      xxxSendTransformableMessageTimeout(v31, v53, v30, (struct tagDRAWITEMSTRUCT *)&v58, 0, 0, 0LL, 1, 0);
      xxxDrawDragRectEx(a1, (struct tagRECT *)((char *)a1 + 72), 0x80000000, (struct tagRECT *)((char *)a1 + 56));
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v32 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v32 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v33 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v33 = 0;
      }
      if ( v32 || v33 )
      {
        v34 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v35) = v33;
        LOBYTE(v36) = v32;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v36,
          v35,
          *(_QWORD *)(v34 + 69416),
          5,
          1,
          54,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
      }
      v15 = (struct tagRECT *)((char *)a1 + 72);
      v16 = 0x80000000;
      v11 = (struct tagRECT *)((char *)a1 + 56);
    }
  }
  v37 = *((int *)a1 + 44);
  v38 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 2);
  v58 = *v15;
  xxxSendTransformableMessageTimeout(v38, v53, v37, (struct tagDRAWITEMSTRUCT *)&v58, 0, 0, 0LL, 1, 0);
  xxxDrawDragRectEx(a1, &v58, v16 | 3, v11);
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v40, v39, v41)
    && *((_DWORD *)a1 + 44) == 9 )
  {
    v43 = *((_QWORD *)a1 + 2);
    if ( (*(_DWORD *)(v43 + 384) & 0x10) == 0
      && ((*(_DWORD *)(*(_QWORD *)(v43 + 40) + 288LL) & 0xF) == 2 || *((_QWORD *)a1 + 27) == v56) )
    {
      v44 = *((_DWORD *)a1 + 50);
      if ( (v44 & 0x80000) == 0 || (v44 & 0x20) != 0 )
      {
        v10 = &v58;
        v57 = &v58;
      }
      v45 = v10->left - v55.x;
      v46 = v10->top - v55.y;
      LODWORD(v56) = v45 + *((_DWORD *)a1 + 42);
      *((_DWORD *)a1 + 42) = v56;
      v54 = v46 + *((_DWORD *)a1 + 43);
      *((_DWORD *)a1 + 43) = v54;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v47 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v48 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v48 = 0;
      }
      if ( v47 || v48 )
      {
        top = v57->top;
        left = v57->left;
        v51 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v42);
        LODWORD(v52) = v45;
        WPP_RECORDER_AND_TRACE_SF_dddddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v47,
          v48,
          *(_QWORD *)(v51 + 69416),
          5u,
          1u,
          0x37u,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
          v52,
          v46,
          v56,
          v54,
          left,
          top,
          v55.x,
          v55.y);
      }
    }
  }
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
    MoveSizeHaptic::CheckAndEmitRequiredHaptic((struct MOVESIZEDATA *)((char *)a1 + 288));
  DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((struct MOVESIZEDATA *)((char *)a1 + 400), a1);
}
