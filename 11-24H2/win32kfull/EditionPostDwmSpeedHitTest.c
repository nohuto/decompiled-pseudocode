/*
 * XREFs of EditionPostDwmSpeedHitTest @ 0x1402A3910
 * Callers:
 *     <none>
 * Callees:
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1400224D4 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140067238 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxTouchTargetWindow @ 0x140068F84 (xxxTouchTargetWindow.c)
 *     INPUTDEST_FROM_PWND @ 0x140159868 (INPUTDEST_FROM_PWND.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1401598B0 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1401599AC (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x140195C2C (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     TouchTargetChildTree @ 0x1401B69B8 (TouchTargetChildTree.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1401B6C08 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_DWORD *__fastcall EditionPostDwmSpeedHitTest(
        __int64 a1,
        struct tagPOINT *a2,
        const struct _SUBPIXELS *a3,
        struct tagTOUCHTARGETINGCONTACT *a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v6; // rbx
  struct tagWND *TopLevelWindow; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  const struct tagWND **v14; // r14
  bool v15; // zf
  struct tagWND *CompositionInputWindowUIOwner; // rdi
  const struct tagWND *v17; // rcx
  _DWORD *result; // rax
  __int64 v19; // r14
  __int64 UserSessionState; // rax
  struct tagWND *v21; // rax
  __int64 v22; // rax
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int128 v26; // xmm3
  __int128 v27; // xmm4
  __int128 v28; // xmm5
  __int128 v29; // xmm6
  struct tagPOINT v30; // [rsp+48h] [rbp-79h] BYREF
  int v31; // [rsp+50h] [rbp-71h] BYREF
  __int64 v32; // [rsp+58h] [rbp-69h] BYREF
  _DWORD v33[34]; // [rsp+60h] [rbp-61h] BYREF
  __int64 v34; // [rsp+118h] [rbp+57h] BYREF

  v6 = 0LL;
  TopLevelWindow = 0LL;
  v12 = 2LL;
  *a6 = 0;
  v13 = *(unsigned int *)(a1 + 92);
  if ( (_DWORD)v13 == 2 && (*(_DWORD *)(a1 + 88) & 1) != 0 )
  {
    v14 = (const struct tagWND **)(a1 + 80);
    TopLevelWindow = (struct tagWND *)GetTopLevelWindow(*(_QWORD *)(a1 + 80));
    v15 = TopLevelWindow == 0LL;
  }
  else
  {
    v14 = (const struct tagWND **)(a1 + 80);
    v15 = (_DWORD)v13 == 2;
  }
  if ( !v15 || !*v14 )
  {
    v19 = a5;
    if ( *(_DWORD *)(a5 + 80) )
    {
      LODWORD(v34) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 438);
    }
    v30 = *a2;
    if ( a4 )
    {
      v32 = 0LL;
      v31 = 0;
      LOWORD(v34) = 0;
      if ( !TopLevelWindow )
        goto LABEL_24;
      UserSessionState = W32GetUserSessionState(v13, v12);
      if ( !(unsigned int)xxxTouchTargetWindow(
                            TopLevelWindow,
                            a4,
                            &v30,
                            &v31,
                            &v34,
                            (__int64)&v32,
                            *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(UserSessionState + 19200) + 8LL) + 64LL) & 1) )
        goto LABEL_24;
      W32GetUserSessionState(v13, v12);
      v21 = TouchTargetChildTree(TopLevelWindow, a4, *(_QWORD *)&v30, &v32);
    }
    else
    {
      if ( !TopLevelWindow || !(unsigned int)DCEIsWindowHit(TopLevelWindow, &v30, a3) )
      {
        v22 = W32GetUserSessionState(v13, v12);
        TopLevelWindow = TopLevelSpeedHitTest(*(struct tagDESKTOP **)(v22 + 19200), &v30, a3);
        if ( !TopLevelWindow )
          goto LABEL_24;
      }
      if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v13, v12) + 96) + 120LL) )
        v21 = DCEChildTreeSpeedHitTest(TopLevelWindow, *a2, &v30, a3);
      else
        v21 = ClassicChildTreeSpeedHitTest(TopLevelWindow, v30);
    }
    v12 = (__int64)v21;
    if ( v21 )
    {
      *a6 = 1;
      *a2 = v30;
      goto LABEL_25;
    }
LABEL_24:
    v30 = *a2;
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v13, v12) + 19200) + 8LL) + 24LL);
    *a2 = v30;
    if ( !v12 )
    {
LABEL_26:
      *(_QWORD *)v19 = v6;
      v23 = INPUTDEST_FROM_PWND(v33, v12);
      v24 = v23[1];
      v25 = v23[2];
      v26 = v23[3];
      v27 = v23[4];
      v28 = v23[5];
      v29 = v23[6];
      *(_OWORD *)a1 = *v23;
      *(_OWORD *)(a1 + 16) = v24;
      *(_OWORD *)(a1 + 32) = v25;
      *(_OWORD *)(a1 + 48) = v26;
      *(_OWORD *)(a1 + 64) = v27;
      *(_OWORD *)(a1 + 80) = v28;
      *(_OWORD *)(a1 + 96) = v29;
      result = (_DWORD *)*(unsigned int *)(v19 + 100);
      *(_DWORD *)(a1 + 4) = (_DWORD)result;
      return result;
    }
LABEL_25:
    v6 = *(_QWORD *)v12;
    goto LABEL_26;
  }
  CompositionInputWindowUIOwner = *v14;
  if ( (unsigned int)IsIndependentInputWindow(*v14) )
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v17);
  v34 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 256LL));
  PhysicalToLogicalDPIPoint(a2, a2, *(unsigned int *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 288LL), &v34);
  result = a6;
  *a6 = 1;
  return result;
}
