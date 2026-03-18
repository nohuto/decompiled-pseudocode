/*
 * XREFs of ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x140049924
 * Callers:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x14014C0EC (-OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z.c)
 *     ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEAUtagWND@@@Z @ 0x1402519A0 (-GetPhysicalFrameBounds@WindowMargins@@YA-AUtagRECT@@PEAUtagWND@@@Z.c)
 *     ?SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1402BF6B0 (-SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1400312D0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??$CreateWindowProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAJPEAPEAVCWindowMarginProp@WindowMargins@@@Z @ 0x1401BC380 (--$CreateWindowProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAJPEAPEAVCWindowMarginProp@.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

struct WindowMargins::CWindowMarginProp *__fastcall WindowMargins::CWindowMarginProp::GetOrCreate(
        struct tagWND *a1,
        __int64 a2)
{
  __int64 UserSessionState; // rax
  char v4; // di
  CWindowProp *v5; // rbx
  __int64 v6; // rdx
  bool v8; // si
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  CWindowProp *Prop; // [rsp+68h] [rbp+10h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = 1;
  Prop = (CWindowProp *)GetProp(a1, *(unsigned __int16 *)(UserSessionState + 42312), 1LL);
  v5 = Prop;
  if ( !Prop )
  {
    if ( (int)CWindowProp::CreateWindowProp<WindowMargins::CWindowMarginProp>(&Prop) < 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v4 = 0;
      }
      v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v9 = *(_QWORD *)a1;
        v10 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
        LOBYTE(v11) = v8;
        LOBYTE(v12) = v4;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v12,
          v11,
          *(_QWORD *)(v10 + 69416),
          2,
          21,
          10,
          (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
          v9);
      }
      return Prop;
    }
    else
    {
      v5 = Prop;
      if ( !(unsigned int)CWindowProp::SetProp(Prop, (unsigned __int64)a1) )
      {
        (**(void (__fastcall ***)(CWindowProp *))v5)(v5);
        return 0LL;
      }
    }
  }
  return v5;
}
