/*
 * XREFs of GreSelectBitmap @ 0x14001C680
 * Callers:
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 */

__int64 __fastcall GreSelectBitmap(HDC a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  _BYTE v6[16]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v7[15]; // [rsp+30h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  v4 = 0LL;
  if ( v7[0] )
  {
    LOBYTE(v3) = 4;
    v4 = *(_QWORD *)GrepSelectBitmap(v6, v7, a2, v3);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return v4;
}
