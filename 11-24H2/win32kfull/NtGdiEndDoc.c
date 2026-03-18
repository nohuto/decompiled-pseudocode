/*
 * XREFs of NtGdiEndDoc @ 0x140327D20
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z @ 0x140268328 (-bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall NtGdiEndDoc(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = bEndDocInternal((struct XDCOBJ *)v3, 0);
  else
    EngSetLastError(0x3EBu);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
