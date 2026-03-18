/*
 * XREFs of NtGdiMoveTo @ 0x140338190
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepMoveTo@@YAHAEAVXDCOBJ@@HHPEAUtagPOINT@@@Z @ 0x140330B20 (-GrepMoveTo@@YAHAEAVXDCOBJ@@HHPEAUtagPOINT@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiMoveTo(HDC a1, int a2, int a3, void *a4)
{
  unsigned int v8; // ebx
  struct tagPOINT Src[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v10[14]; // [rsp+30h] [rbp-78h] BYREF

  Src[0] = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v10, a1);
  if ( v10[0] )
  {
    v8 = GrepMoveTo((struct XDCOBJ *)v10, a2, a3, Src);
    if ( v8 && a4 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(a4, Src, 8uLL);
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
    return v8;
  }
  else
  {
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
    return 0LL;
  }
}
