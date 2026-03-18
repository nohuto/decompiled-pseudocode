/*
 * XREFs of GreCleanDC @ 0x1401073F0
 * Callers:
 *     UserThreadCallout @ 0x140166CD0 (UserThreadCallout.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x140035220 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 */

_BOOL8 __fastcall GreCleanDC(HDC a1)
{
  BOOL v1; // ebx
  DC *v3[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = XDCOBJ::bCleanDC(v3, 0) != 0;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
