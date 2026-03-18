/*
 * XREFs of vAlphaPerPixelAndConst @ 0x14011C5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vAlphaPerPixelAndConst(_DWORD *a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // r9d
  int v5; // r11d
  _DWORD *v6; // r10
  __int64 v7; // rdi
  unsigned int v8; // edx
  unsigned int v9; // eax
  int v10; // esi
  int v11; // ebx
  int v12; // r8d
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebp
  unsigned int v19; // edx
  unsigned int v20; // ecx

  v4 = HIWORD(a4);
  v5 = a3;
  v6 = a1;
  if ( a3 )
  {
    v7 = a2 - (_QWORD)a1;
    do
    {
      v8 = *(_DWORD *)((char *)v6 + v7);
      --v5;
      v9 = HIBYTE(v8);
      if ( HIBYTE(v8) )
      {
        v10 = *v6 & 0xFF00FF;
        v11 = (*v6 >> 8) & 0xFF00FF;
        v12 = (v8 >> 8) & 0xFF00FF;
        v13 = v8 & 0xFF00FF;
        if ( (_BYTE)v9 == 0xFF )
        {
          v14 = (unsigned __int8)v4 * (v13 - v10) + 8388736 + 255 * v10;
          v15 = (unsigned __int8)v4 * (v12 - v11) + 8388736 + 255 * v11;
          v16 = ((v14 + ((v14 >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF;
          v17 = (v15 + ((v15 >> 8) & 0xFF00FF)) & 0xFF00FF00;
        }
        else
        {
          v18 = v13 * (unsigned __int8)v4 + 8388736;
          v19 = v12 * (unsigned __int8)v4
              + 8388736
              + (((v12 * (unsigned int)(unsigned __int8)v4 + 8388736) >> 8) & 0xFF00FF);
          v20 = 255 - ((v19 ^ (v19 ^ ((v18 + ((v18 >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF) >> 24);
          v16 = (v20 * v11 + 8388736 + (((v20 * v11 + 8388736) >> 8) & 0xFF00FF)) & 0xFF00FF00;
          v17 = (v19 ^ (v19 ^ ((v18 + ((v18 >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF)
              + (((v20 * v10 + 8388736 + (((v20 * v10 + 8388736) >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF);
        }
        *v6 = v17 + v16;
      }
      ++v6;
    }
    while ( v5 );
  }
}
