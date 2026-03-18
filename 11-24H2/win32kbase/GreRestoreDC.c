/*
 * XREFs of GreRestoreDC @ 0x140121140
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC (--1APIDCOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall GreRestoreDC(HDC a1, int a2)
{
  unsigned int v3; // ebx
  _QWORD v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0;
  if ( v5[0] )
    v3 = GrepRestoreDCOBJ((struct XDCOBJ *)v5, a2);
  else
    EngSetLastError(6u);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
