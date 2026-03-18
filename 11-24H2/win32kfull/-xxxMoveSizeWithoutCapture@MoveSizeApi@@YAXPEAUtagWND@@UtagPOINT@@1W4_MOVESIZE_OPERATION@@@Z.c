/*
 * XREFs of ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402A905C
 * Callers:
 *     ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A8928 (-xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVES.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x14018716C (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x140187278 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x140187EB4 (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 *     ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x140220B14 (-FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z @ 0x140255F20 (-CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140269664 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

__int64 __fastcall MoveSizeApi::xxxMoveSizeWithoutCapture(struct tagWND *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  bool v8; // bl
  bool v9; // si
  __int64 v10; // rax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  char v17; // r15
  __int64 UserSessionState; // rax
  struct MOVESIZEDATA *v19; // r15
  struct MOVESIZEDATA *v20; // rdx
  unsigned int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rdx
  char v24; // [rsp+20h] [rbp-60h]
  __int16 v25; // [rsp+30h] [rbp-50h]
  char v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+68h] [rbp-18h] BYREF
  __int64 v28; // [rsp+70h] [rbp-10h] BYREF
  struct MOVESIZEDATA *v29; // [rsp+78h] [rbp-8h] BYREF
  int v30; // [rsp+CCh] [rbp+4Ch]
  __int64 v31; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v32; // [rsp+D8h] [rbp+58h]

  v32 = a4;
  v31 = a3;
  v30 = HIDWORD(a2);
  v4 = a2;
  result = (__int64)MOVESIZEDATA::CreateMoveSizeData(a1, a2);
  v29 = (struct MOVESIZEDATA *)result;
  if ( result )
  {
    v13 = *((_QWORD *)a1 + 5);
    v27 = 0LL;
    v14 = ValidateHmonitor(*(_QWORD *)(v13 + 256));
    v15 = *((_QWORD *)a1 + 5);
    v28 = v14;
    PhysicalToLogicalDPIPoint(&v27, &v31, *(unsigned int *)(v15 + 288), &v28);
    v17 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
      WPP_RECORDER_AND_TRACE_SF_dddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v17,
        v26,
        *(_QWORD *)(UserSessionState + 69416),
        4u,
        1u,
        0x77u,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
        v4,
        v30,
        v27,
        HIDWORD(v27));
    }
    xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 561LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    v19 = v29;
    v20 = v29;
    v21 = v32;
    *(_QWORD *)((char *)v29 + 260) = v31;
    *((_DWORD *)v20 + 50) &= 0xFFFFC7FF;
    xxxInitializeMoveSizeData(a1, v20, v21, (unsigned __int16)v4 | ((unsigned __int16)v30 << 16));
    xxxMS_TrackMove(
      (__int64)a1,
      514LL,
      0LL,
      (unsigned __int16)(*((_WORD *)v19 + 84) + v27) | ((unsigned __int16)(*((_WORD *)v19 + 86) + WORD2(v27)) << 16),
      v19);
    DWM_ARRANGEMENT_DATA::SetShrinkWidth((struct MOVESIZEDATA *)((char *)v19 + 400), 0LL, v19);
    DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((struct MOVESIZEDATA *)((char *)v19 + 400), v19);
    DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter((struct MOVESIZEDATA *)((char *)v19 + 400), 0LL, v19);
    MOVESIZEDATA::FreeMoveSizeData(&v29, v22);
    result = xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 562LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (result = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (result & 1) == 0)
      || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v8 = 0;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
      v25 = 120;
      v24 = 4;
      goto LABEL_25;
    }
  }
  else
  {
    v8 = 0;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
    {
      result = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
      if ( (result & 1) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u )
        v8 = 1;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
      v25 = 118;
      v24 = 2;
LABEL_25:
      LOBYTE(v12) = v9;
      LOBYTE(v11) = v8;
      return WPP_RECORDER_AND_TRACE_SF_(
               *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
               v11,
               v12,
               *(_QWORD *)(v10 + 69416),
               v24,
               1,
               v25,
               (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
    }
  }
  return result;
}
