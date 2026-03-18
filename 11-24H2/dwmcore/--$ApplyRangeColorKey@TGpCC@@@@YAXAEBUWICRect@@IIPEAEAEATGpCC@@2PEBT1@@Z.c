/*
 * XREFs of ??$ApplyRangeColorKey@TGpCC@@@@YAXAEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z @ 0x180196600
 * Callers:
 *     ?ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z @ 0x18019647C (-ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ApplyRangeColorKey<GpCC>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        __int64 a7)
{
  int v7; // ebx
  __int64 v10; // rsi
  int v11; // edx
  _BYTE *v12; // rax
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // cl

  v7 = 0;
  if ( *(int *)(a1 + 12) > 0 )
  {
    v10 = a2;
    do
    {
      v11 = 0;
      if ( *(int *)(a1 + 8) > 0 )
      {
        v12 = (_BYTE *)(a4 + 3);
        do
        {
          if ( a5[3] > *v12
            || *v12 > a6[3]
            || (v13 = *(v12 - 1), a5[2] > v13)
            || v13 > a6[2]
            || (v14 = *(v12 - 2), a5[1] > v14)
            || v14 > a6[1]
            || (v15 = *(v12 - 3), *a5 > v15)
            || v15 > *a6 )
          {
            if ( a7 )
              *v12 = *(_BYTE *)(a7 + 3);
          }
          else
          {
            *(_DWORD *)(v12 - 3) = 0;
          }
          v12 += 4;
          ++v11;
        }
        while ( v11 < *(_DWORD *)(a1 + 8) );
      }
      a4 += v10;
      ++v7;
    }
    while ( v7 < *(_DWORD *)(a1 + 12) );
  }
}
