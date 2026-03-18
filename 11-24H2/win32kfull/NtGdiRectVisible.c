/*
 * XREFs of NtGdiRectVisible @ 0x1400C3C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400C3D24 (-GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1, const void *a2)
{
  unsigned int v3; // ebx
  _QWORD v5[14]; // [rsp+30h] [rbp-98h] BYREF
  struct tagRECT v6; // [rsp+A0h] [rbp-28h] BYREF

  v6 = 0LL;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v6, a2, 0x10uLL);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v3 = GrepRectVisible((struct XDCOBJ *)v5, &v6);
  }
  else
  {
    EngSetLastError(6u);
    v3 = -1;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
