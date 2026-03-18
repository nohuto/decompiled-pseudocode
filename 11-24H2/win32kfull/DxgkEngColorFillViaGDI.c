/*
 * XREFs of DxgkEngColorFillViaGDI @ 0x140325110
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400C4DA4 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 */

__int64 __fastcall DxgkEngColorFillViaGDI(HDC a1, _DWORD *a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v5; // esi
  __int64 v6; // rdi
  HBRUSH SolidBrush; // rax
  HBRUSH v10; // r14
  HBRUSH v11; // rbp
  unsigned int *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  DC *v16[14]; // [rsp+30h] [rbp-88h] BYREF

  v5 = 0;
  v6 = a4;
  if ( a1 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, a1);
    if ( v16[0] )
    {
      SolidBrush = (HBRUSH)GreCreateSolidBrush(((unsigned __int8)a5 << 16) | BYTE2(a5) | a5 & 0xFF00u);
      v10 = SolidBrush;
      if ( SolidBrush )
      {
        v11 = GrepSelectBrush((struct XDCOBJ *)v16, SolidBrush, 1);
        if ( (_DWORD)v6 )
        {
          v12 = (unsigned int *)(a3 + 4);
          if ( a2 )
          {
            do
            {
              v13 = GrepPatBlt(v16, *a2 + *(v12 - 1), *v12 + a2[1], v12[1] - *(v12 - 1), v12[2] - *v12, 0xF00021u);
              v12 += 4;
              v5 = v13;
              --v6;
            }
            while ( v6 );
          }
          else
          {
            do
            {
              v14 = GrepPatBlt(v16, *(v12 - 1), *v12, v12[1] - *(v12 - 1), v12[2] - *v12, 0xF00021u);
              v12 += 4;
              v5 = v14;
              --v6;
            }
            while ( v6 );
          }
        }
        if ( v11 )
          GrepSelectBrush((struct XDCOBJ *)v16, v11, 1);
        GreDeleteObject(v10);
      }
    }
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
  }
  return v5;
}
