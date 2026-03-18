/*
 * XREFs of GreSetRectRgn @ 0x1C008A530
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C004A2E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C004C660 (UserSetDCVisRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0059C2C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 *     EngSetRectRgn @ 0x1C008A2D0 (EngSetRectRgn.c)
 *     SetEmptyRgn @ 0x1C008A4F0 (SetEmptyRgn.c)
 *     NtGdiSetRectRgn @ 0x1C0158D10 (NtGdiSetRectRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003F148 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003F180 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00D2140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreSetRectRgn(HRGN a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // r14d
  struct _RECTL *v10; // [rsp+20h] [rbp-50h] BYREF
  struct _RECTL v11; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v12[7]; // [rsp+38h] [rbp-38h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v12, a1, 0, 0);
  v8 = 0;
  if ( v12[0] )
  {
    v11.left = a2;
    v11.top = a3;
    v11.right = a4;
    v11.bottom = a5;
    if ( ((a2 & 0xF8000000) == 0 || (a2 & 0xF8000000) == -134217728)
      && ((a5 & 0xF8000000) == 0 || (a5 & 0xF8000000) == 0xF8000000)
      && ((a4 & 0xF8000000) == 0 || (a4 & 0xF8000000) == 0xF8000000)
      && ((a3 & 0xF8000000) == 0 || (a3 & 0xF8000000) == 0xF8000000) )
    {
      if ( a2 > a4 )
      {
        v11.left = a4;
        v11.right = a2;
      }
      if ( a3 > a5 )
      {
        v11.top = a5;
        v11.bottom = a3;
      }
      v10 = (struct _RECTL *)((v12[0] + 24LL) & -(__int64)(v12[0] != 0LL));
      RGNCOREOBJ::vSet(&v10, &v11);
      v8 = 1;
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v12);
  return v8;
}
