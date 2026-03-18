/*
 * XREFs of ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00AE83C
 * Callers:
 *     SelectWindowRgn @ 0x1C002387C (SelectWindowRgn.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     SkipWindowOnMonitor @ 0x1C00A3E08 (SkipWindowOnMonitor.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00A4EC4 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     CalcWindowFullScreen @ 0x1C00ABAD4 (CalcWindowFullScreen.c)
 *     xxxInheritWindowMonitor @ 0x1C00B04C0 (xxxInheritWindowMonitor.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00EA700 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetNewMonitor @ 0x1C010C10C (GetNewMonitor.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A55B4 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     NtUserSetWindowShowState @ 0x1C01DCC10 (NtUserSetWindowShowState.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215824 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 *     IsSmallerThanScreen @ 0x1C0221600 (IsSmallerThanScreen.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C00AE960 (_MonitorFromRect.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall _MonitorFromWindowInternal(struct tagWND *a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  unsigned int v4; // edi
  _DWORD **DispInfo; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 *v13; // rcx
  __int128 *Prop; // rax
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  v4 = a2;
  DispInfo = (_DWORD **)GetDispInfo(a1, a2, a3);
  v9 = 1LL;
  if ( **DispInfo == 1 && v4 )
    return *(struct tagMONITOR **)(GetDispInfo(v8, v7, v9) + 96);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      goto LABEL_6;
    Prop = (__int128 *)GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2), 1LL);
    v13 = Prop;
    if ( Prop )
    {
      if ( !v3 )
        return (struct tagMONITOR *)MonitorFromRect(v13, v4);
      v15 = *Prop;
      v16 = *((_QWORD *)a1 + 5);
      v17 = v15;
      v12 = *(unsigned int *)(v16 + 288);
      goto LABEL_8;
    }
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL);
    if ( (*(_WORD *)(v8 + 42) & 0x2FFF) != 0x29D )
    {
LABEL_6:
      v11 = *((_QWORD *)a1 + 5);
      if ( !v3 )
      {
        v13 = (__int128 *)(v11 + 88);
        return (struct tagMONITOR *)MonitorFromRect(v13, v4);
      }
      v17 = *(_OWORD *)(v11 + 88);
      v12 = *(unsigned int *)(v11 + 288);
LABEL_8:
      LogicalToPhysicalDPIRect(&v17, &v17, v12, 0LL);
      v13 = &v17;
      return (struct tagMONITOR *)MonitorFromRect(v13, v4);
    }
    return *(struct tagMONITOR **)(GetDispInfo(v8, v7, v9) + 96);
  }
  if ( v4 - 1 <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo(v8, v7, v9) + 96);
  return 0LL;
}
