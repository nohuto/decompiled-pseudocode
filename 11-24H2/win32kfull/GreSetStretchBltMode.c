/*
 * XREFs of GreSetStretchBltMode @ 0x14007A398
 * Callers:
 *     BltIcon @ 0x140079FFC (BltIcon.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetStretchBltMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  char v5; // r8
  _QWORD v7[15]; // [rsp+20h] [rbp-78h] BYREF

  v3 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = *(_QWORD *)(v7[0] + 976LL);
    v5 = 2;
    v3 = *(_DWORD *)(v4 + 232);
    *(_DWORD *)(v4 + 232) = a2;
    if ( a2 <= 4 )
      v5 = a2;
    *(_BYTE *)(*(_QWORD *)(v7[0] + 976LL) + 215LL) = v5;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return v3;
}
