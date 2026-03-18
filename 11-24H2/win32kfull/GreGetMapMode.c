/*
 * XREFs of GreGetMapMode @ 0x14033C55C
 * Callers:
 *     IsSysFontAndDefaultMode @ 0x1402179BC (IsSysFontAndDefaultMode.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetMapMode(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  v1 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 976LL) + 104LL);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return v1;
}
