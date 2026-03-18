/*
 * XREFs of DNG_InitStretch @ 0x1400A0BB0
 * Callers:
 *     RenderNineGridInternal @ 0x14009F6F0 (RenderNineGridInternal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DNG_InitStretch(__int64 a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  __int64 v6; // r11
  unsigned __int64 v7; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  bool v13; // cf

  *(_DWORD *)(a1 + 28) = a5;
  v6 = a4;
  *(_DWORD *)(a1 + 24) = a4;
  v7 = (((unsigned __int64)a3 << 32) - 1) / a2 + 1;
  result = ((unsigned __int64)a3 << 32) / a2;
  *(_QWORD *)(a1 + 8) = v7;
  v9 = result >> 1;
  v10 = result >> 33;
  if ( (int)v6 <= 5 )
  {
    if ( (int)v6 > 0 )
    {
      v12 = (unsigned int)v6;
      do
      {
        result = (unsigned int)(v9 + v7);
        v13 = (unsigned int)result < (unsigned int)v9;
        LODWORD(v9) = v9 + v7;
        LODWORD(v10) = HIDWORD(v7) + v13 + (_DWORD)v10;
        --v12;
      }
      while ( v12 );
    }
  }
  else
  {
    v11 = (unsigned int)v9 + v6 * (unsigned int)v7;
    LODWORD(v9) = v9 + v6 * v7;
    result = HIDWORD(v11);
    LODWORD(v10) = HIDWORD(v11) + v6 * HIDWORD(v7) + v10;
  }
  *(_DWORD *)a1 = v10;
  *(_DWORD *)(a1 + 4) = v9;
  return result;
}
