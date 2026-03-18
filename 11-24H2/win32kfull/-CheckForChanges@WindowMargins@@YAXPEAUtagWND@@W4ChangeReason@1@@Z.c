/*
 * XREFs of ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338
 * Callers:
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     xxxDoPaint @ 0x140033DBC (xxxDoPaint.c)
 *     xxxBeginPaint @ 0x140034CB0 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x140035878 (xxxEndPaint.c)
 *     InternalInvalidate3 @ 0x140044BB8 (InternalInvalidate3.c)
 *     xxxSimpleDoSyncPaint @ 0x1400477B0 (xxxSimpleDoSyncPaint.c)
 *     DwmChildRectChange @ 0x140048630 (DwmChildRectChange.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     xxxCalcClientRect @ 0x1400712A8 (xxxCalcClientRect.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x14018A33C (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018A400 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AE054 (-DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 * Callees:
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1400315C4 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     GetWindowDpiLastNotify @ 0x140045FC8 (GetWindowDpiLastNotify.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x140049924 (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014C388 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddqdddds @ 0x140181A88 (WPP_RECORDER_AND_TRACE_SF_ddddqdddds.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x14019AC0C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     DwmAsyncNotifyWindowFrameMarginsChange @ 0x1401BE948 (DwmAsyncNotifyWindowFrameMarginsChange.c)
 *     ?ChangeReasonToString@WindowMargins@@YAQEADW4ChangeReason@1@@Z @ 0x140251930 (-ChangeReasonToString@WindowMargins@@YAQEADW4ChangeReason@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x140269664 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

struct WindowMargins::CWindowMarginProp *__fastcall WindowMargins::CheckForChanges(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // r14d
  char v4; // r12
  struct WindowMargins::CWindowMarginProp *result; // rax
  char v6; // si
  char v7; // di
  __int64 v8; // rdx
  struct WindowMargins::CWindowMarginProp *v9; // rsi
  __int64 v10; // rdi
  char v11; // bp
  char v12; // bl
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  char v15; // si
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  void *v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 UserSessionState; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  int v37; // r9d
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  int v41; // [rsp+20h] [rbp-A8h]
  int v42; // [rsp+28h] [rbp-A0h]
  int v43; // [rsp+30h] [rbp-98h]
  int v44; // [rsp+38h] [rbp-90h]
  bool v45; // [rsp+D8h] [rbp+10h]
  __int64 v46; // [rsp+E0h] [rbp+18h]
  unsigned __int64 v47; // [rsp+E8h] [rbp+20h] BYREF

  v2 = a2;
  v4 = 1;
  if ( (unsigned int)(a2 - 3) > 1 )
  {
    result = (struct WindowMargins::CWindowMarginProp *)IsTopLevelWindow(a1);
    if ( !(_DWORD)result )
      return result;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
    || (v6 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v6 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v7 = 0;
  }
  if ( v6 || v7 )
  {
    v30 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    v34 = WindowMargins::ChangeReasonToString(v2, v32, v33, *(_QWORD *)(UserSessionState + 69416));
    LOBYTE(v35) = v7;
    LOBYTE(v36) = v6;
    WPP_RECORDER_AND_TRACE_SF_qs(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v36,
      v35,
      v37,
      5,
      21,
      27,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
      v30,
      v34);
  }
  result = WindowMargins::CWindowMarginProp::GetOrCreate(a1);
  v9 = result;
  if ( !result )
    return result;
  v46 = 0LL;
  LOWORD(v10) = 0;
  if ( !v2 )
  {
    v47 = 0LL;
LABEL_27:
    v26 = *((_QWORD *)a1 + 5);
    v27 = *(_DWORD *)(v26 + 288) & 0xF;
    if ( v27 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v26 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v26 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( !v27
           && (v29 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v29 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
    }
    v41 = 1;
    v13 = *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(v9, &v47, a1, WindowDpiLastNotify);
    v47 = v13;
    *(_QWORD *)((char *)v9 + 44) = v13;
    goto LABEL_19;
  }
  v10 = *(_QWORD *)((char *)result + 44);
  v46 = v10;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
    || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v11 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v12 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v12 = 0;
  }
  if ( v11 || v12 )
  {
    v38 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
    LOBYTE(v39) = v12;
    LOBYTE(v40) = v11;
    WPP_RECORDER_AND_TRACE_SF_dddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v40,
      v39,
      *(_QWORD *)(v38 + 69416),
      5,
      21,
      28,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
      v10,
      SBYTE4(v10),
      SBYTE2(v10),
      SBYTE6(v10));
  }
  v13 = 0LL;
  v47 = 0LL;
  if ( v2 != 4 )
    goto LABEL_27;
  CWindowProp::RemoveAndDeleteProp(v9);
LABEL_19:
  if ( __PAIR32__(WORD1(v46), v10) == (_DWORD)v13 )
  {
    v15 = BYTE6(v46);
    if ( WORD2(v46) == WORD2(v13) )
    {
      result = (struct WindowMargins::CWindowMarginProp *)HIWORD(v13);
      if ( HIWORD(v46) == HIWORD(v13) )
        return result;
    }
  }
  else
  {
    v15 = BYTE6(v46);
  }
  v16 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v4 = 0;
  }
  v45 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v17 = *(_QWORD *)a1;
    v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
    v21 = WindowMargins::ChangeReasonToString(v2, v19, v20, *(_QWORD *)(v18 + 69416));
    LOBYTE(v22) = v4;
    LOBYTE(v23) = v45;
    WPP_RECORDER_AND_TRACE_SF_ddddqdddds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v22,
      v23,
      v24,
      v41,
      v42,
      v43,
      v44,
      v13,
      SBYTE4(v47),
      SBYTE2(v47),
      SBYTE6(v47),
      v17,
      v10,
      SBYTE4(v46),
      SBYTE2(v46),
      v15,
      v21);
  }
  v25 = (void *)UserReferenceDwmApiPort(v16);
  return (struct WindowMargins::CWindowMarginProp *)DwmAsyncNotifyWindowFrameMarginsChange(v25);
}
