/*
 * XREFs of NtGdiAngleArc @ 0x1400EC320
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x1400EC404 (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 */

__int64 __fastcall NtGdiAngleArc(HDC a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v9; // ebx
  float v11; // [rsp+30h] [rbp-88h] BYREF
  float v12[3]; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v13[14]; // [rsp+40h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v13, a1);
  v9 = 0;
  if ( v13[0] )
  {
    v12[0] = 0.0;
    v11 = 0.0;
    if ( bConvertDwordToFloat(a5, v12) && bConvertDwordToFloat(a6, &v11) )
      v9 = GrepAngleArc((struct XDCOBJ *)v13, a2, a3, a4, v12[0], v11);
  }
  else
  {
    EngSetLastError(6u);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v13);
  return v9;
}
