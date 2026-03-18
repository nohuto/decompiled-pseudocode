/*
 * XREFs of NtGdiScaleRgn @ 0x14020FE50
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepScaleRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z @ 0x14020FEAC (-GrepScaleRgn@@YAHAEAVXDCOBJ@@PEAUHRGN__@@@Z.c)
 */

__int64 __fastcall NtGdiScaleRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // ebx
  _QWORD v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
    v3 = GrepScaleRgn((struct XDCOBJ *)v5, a2);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
