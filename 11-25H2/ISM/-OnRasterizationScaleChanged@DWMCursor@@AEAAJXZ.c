/*
 * XREFs of ?OnRasterizationScaleChanged@DWMCursor@@AEAAJXZ @ 0x18007CDB4
 * Callers:
 *     ?CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z @ 0x180071230 (-CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z.c)
 * Callees:
 *     ?OnRasterizationScaleChanged@DWMCursorBroker@@QEAAJPEAVDWMCursor@@I@Z @ 0x18007CE04 (-OnRasterizationScaleChanged@DWMCursorBroker@@QEAAJPEAVDWMCursor@@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DWMCursor::OnRasterizationScaleChanged(DWMCursor *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 4) )
    return 0LL;
  v1 = DWMCursorBroker::OnRasterizationScaleChanged(*((DWMCursorBroker **)this + 4), this, *((_DWORD *)this + 22));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C5,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
    (const char *)(unsigned int)v1,
    v4);
  return v2;
}
