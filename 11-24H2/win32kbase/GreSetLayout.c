/*
 * XREFs of GreSetLayout @ 0x14000DFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x14000F240 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetLayout(HDC a1, int a2, unsigned int a3)
{
  unsigned int v5; // ebx
  DC *v7[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  if ( v7[0] )
    v5 = DC::dwSetLayout(v7[0], a2, a3);
  else
    v5 = -1;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return v5;
}
