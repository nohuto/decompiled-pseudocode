/*
 * XREFs of ?MiPConvertPoint@@YA?AUtagPOINT@@PEAUtagWND@@AEBU1@@Z @ 0x140026108
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x140236870 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x14002622C (GetScreenRectForDpi.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1400266E0 (VirtualizeMultiMonDigitizerSize.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagPOINT __fastcall MiPConvertPoint(struct tagWND *a1, const struct tagPOINT *a2)
{
  unsigned __int16 v4; // bx
  __int128 v6; // [rsp+20h] [rbp-38h]
  INT b[4]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h]

  if ( *((_QWORD *)PtiCurrent() + 62)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent() + 62) + 8LL) + 64LL) & 1) != 0 )
  {
    v4 = (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) & 0x1FF;
  }
  else
  {
    v4 = 0;
  }
  v6 = *(_OWORD *)GetScreenRectForDpi(b, v4);
  *(_OWORD *)b = *(_OWORD *)RIMGetVirtualDesktopPhysicalSize(v8);
  if ( ***(_DWORD ***)(W32GetUserSessionState() + 57008) > 1u )
    VirtualizeMultiMonDigitizerSize(b, v4);
  LODWORD(v9) = EngMulDiv(a2->x - v6, b[2], DWORD2(v6) - v6);
  HIDWORD(v9) = EngMulDiv(a2->y - DWORD1(v6), b[3], HIDWORD(v6) - DWORD1(v6));
  return (struct tagPOINT)v9;
}
