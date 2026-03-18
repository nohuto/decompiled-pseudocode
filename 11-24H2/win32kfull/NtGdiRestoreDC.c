/*
 * XREFs of NtGdiRestoreDC @ 0x14018D820
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?W32PidDCOwnerFast@XDCOBJ@@QEAAKXZ @ 0x140330A10 (-W32PidDCOwnerFast@XDCOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall NtGdiRestoreDC(HDC a1, int a2)
{
  unsigned int v3; // ebx
  _QWORD v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  if ( v5[0] && XDCOBJ::W32PidDCOwnerFast((XDCOBJ *)v5) )
  {
    v3 = GrepRestoreDCOBJ((struct XDCOBJ *)v5, a2);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
    return v3;
  }
  else
  {
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
    return 0LL;
  }
}
