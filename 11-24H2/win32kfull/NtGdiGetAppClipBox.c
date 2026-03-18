/*
 * XREFs of NtGdiGetAppClipBox @ 0x1400CCA90
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400CCB64 (-GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiGetAppClipBox(HDC a1, void *a2)
{
  unsigned int AppClipBox; // ebx
  _QWORD v5[14]; // [rsp+20h] [rbp-98h] BYREF
  struct tagRECT Src; // [rsp+90h] [rbp-28h] BYREF

  Src = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    AppClipBox = GrepGetAppClipBox((struct XDCOBJ *)v5, &Src);
  }
  else
  {
    EngSetLastError(6u);
    AppClipBox = 0;
  }
  if ( AppClipBox )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, &Src, 0x10uLL);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return AppClipBox;
}
