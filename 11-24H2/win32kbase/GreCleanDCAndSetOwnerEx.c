/*
 * XREFs of GreCleanDCAndSetOwnerEx @ 0x1401C5BB0
 * Callers:
 *     ReleaseCacheDC @ 0x1400225A0 (ReleaseCacheDC.c)
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x14000F100 (GreSetDCOwnerEx.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x140035220 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 */

_BOOL8 __fastcall GreCleanDCAndSetOwnerEx(struct HOBJ__ *a1, unsigned int a2, int a3, int a4)
{
  BOOL v8; // ebx
  DC *v10[14]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v10, (HDC)a1);
  v8 = 0;
  if ( v10[0] && (unsigned int)XDCOBJ::bCleanDC(v10, 0) )
    v8 = GreSetDCOwnerEx(a1, a2, a3, a4) != 0;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
  return v8;
}
