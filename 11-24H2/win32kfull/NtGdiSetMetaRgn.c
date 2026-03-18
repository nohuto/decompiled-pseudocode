/*
 * XREFs of NtGdiSetMetaRgn @ 0x1401CF080
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iSetMetaRgn@DC@@QEAAHXZ @ 0x1401CF0D8 (-iSetMetaRgn@DC@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiSetMetaRgn(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = DC::iSetMetaRgn(v3[0]);
  else
    EngSetLastError(0x57u);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
