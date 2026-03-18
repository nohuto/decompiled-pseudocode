/*
 * XREFs of NtGdiUpdateTransform @ 0x14033C5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall NtGdiUpdateTransform(HDC a1)
{
  unsigned int v1; // ebx
  DC *v3[15]; // [rsp+20h] [rbp-78h] BYREF

  v1 = 1;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  if ( v3[0] )
    DC::vUpdateWtoDXform(v3[0]);
  else
    v1 = 0;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
