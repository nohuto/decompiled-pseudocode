/*
 * XREFs of GreCreateCompatibleDC @ 0x1C003BC40
 * Callers:
 *     NtGdiCreateCompatibleDC @ 0x1C003B5C0 (NtGdiCreateCompatibleDC.c)
 *     InitUserScreen @ 0x1C005CD6C (InitUserScreen.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00385C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     GreSetLayout @ 0x1C00C2AA0 (GreSetLayout.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C01521C4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

HDC __fastcall GreCreateCompatibleDC(HDC a1)
{
  HDC v1; // rbx
  HDC DisplayDC; // rax
  __int64 v3; // rax
  unsigned int v4; // r8d
  _QWORD v6[6]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v7[7]; // [rsp+50h] [rbp-38h] BYREF
  char v8; // [rsp+90h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v6, a1);
    if ( v6[0] )
    {
      DisplayDC = (HDC)GreCreateDisplayDC(*(HDEV *)(v6[0] + 48LL), 1u);
      v1 = DisplayDC;
      if ( DisplayDC )
      {
        DCOBJ::DCOBJ((DCOBJ *)v7, DisplayDC);
        v3 = v6[0];
        if ( v7[0] && (*(_DWORD *)(v6[0] + 520LL) & 1) != 0 )
        {
          DC::vSetDpiScaling(v7[0], *(_QWORD *)(v6[0] + 524LL));
          v3 = v6[0];
        }
        v4 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 108LL);
        if ( (v4 & 7) != 0 )
          GreSetLayout(v1, -1, v4);
        DCOBJ::~DCOBJ((DCOBJ *)v7);
      }
    }
    DCOBJ::~DCOBJ((DCOBJ *)v6);
  }
  else
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
    v1 = (HDC)GreCreateDisplayDC(*((HDEV *)gpDispInfo + 5), 1u);
    if ( !v8 )
      UserSessionSwitchLeaveCrit();
  }
  return v1;
}
