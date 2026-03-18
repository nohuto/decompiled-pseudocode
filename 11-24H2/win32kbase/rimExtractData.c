/*
 * XREFs of rimExtractData @ 0x1400CF834
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1400AE898 (rimExtractPointerDeviceUsages.c)
 *     rimExtractTouchInfo @ 0x1401814CC (rimExtractTouchInfo.c)
 *     rimExtractPenInfo @ 0x1401EE0B8 (rimExtractPenInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimExtractData(__int64 a1, __int16 a2, __int16 a3, int a4, _DWORD *a5)
{
  unsigned int v5; // r10d
  unsigned int i; // r11d
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // r11d
  unsigned int v12; // r8d
  __int64 v13; // rax
  unsigned int v14; // r9d
  int v16; // edx
  int v17; // eax

  v5 = 0;
  for ( i = 0; i < 6; ++i )
  {
    v9 = 2LL * i;
    if ( *(_WORD *)(a1 + 16LL * i + 28) == a2 && *(_WORD *)(a1 + 16LL * i + 30) == a3 )
    {
      v10 = *(unsigned int *)(a1 + 16 * (i + 2LL));
      if ( (_DWORD)v10 != -1 )
      {
        v11 = *(_DWORD *)(a1 + 16LL * i + 40);
        v12 = *(_DWORD *)(a1 + 8 * v9 + 36);
        v13 = 60 * v10;
        v5 = *(_DWORD *)(60 * v10 + a1 + 460);
        v14 = *(_DWORD *)(a1 + 8 * v9 + 40) - v12;
        if ( v14 )
        {
          v16 = *(_DWORD *)(v13 + a1 + 444);
          v17 = *(_DWORD *)(v13 + a1 + 440);
          if ( v16 != v17 )
          {
            if ( (int)v5 < v17 )
            {
              v5 = v12;
            }
            else if ( (int)v5 > v16 )
            {
              v5 = v11;
            }
            else
            {
              v5 = v12 + (int)(v14 * (v5 - v17)) / (v16 - v17);
            }
          }
        }
        if ( a5 )
          *a5 |= a4;
        return v5;
      }
    }
  }
  return v5;
}
