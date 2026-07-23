/*
 * XREFs of MiGetSinglePageToZero @ 0x1403332A0
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x1403310D0 (MiGetBackgroundHugePageToZero.c)
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiGetBestPageToZero @ 0x140413ED0 (MiGetBestPageToZero.c)
 */

__int64 __fastcall MiGetSinglePageToZero(__int64 a1, __int64 a2, volatile signed __int32 *a3, int a4)
{
  volatile signed __int32 *v5; // r9
  unsigned __int64 v8; // r10
  __int64 v9; // r8
  unsigned __int8 v10; // cl
  int v11; // r13d
  unsigned int v12; // esi
  int i; // ebp
  unsigned __int8 v14; // di
  unsigned __int32 v15; // et2
  unsigned __int8 v16; // dl
  unsigned __int64 v17; // rbx
  int v18; // r9d
  unsigned __int8 v19; // al
  __int64 v20; // r8
  __int64 result; // rax

  v5 = a3;
  v8 = 0xF51E5A7CD9A0EE3FuLL * ((a2 - *(_QWORD *)(*(_QWORD *)(a2 + 14984) + 16LL)) >> 7);
  if ( (_DWORD)v8 == -1 )
    LODWORD(v8) = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 34644);
  v9 = qword_140E38D50 + 57216LL * (unsigned int)v8;
  if ( (*(_DWORD *)(v9 + 15184) & 1) == 0 )
    goto LABEL_10;
  v10 = 0;
  if ( MmNumberOfChannels )
  {
    while ( *(_BYTE *)(v10 + v9 + 15237) != 1 )
    {
      if ( ++v10 >= (unsigned __int8)MmNumberOfChannels )
        goto LABEL_7;
    }
    goto LABEL_11;
  }
LABEL_7:
  v10 = 0;
  if ( MmNumberOfChannels )
  {
    while ( *(_BYTE *)(v10 + v9 + 15237) != 2 )
    {
      if ( ++v10 >= (unsigned __int8)MmNumberOfChannels )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v10 = 0;
  }
LABEL_11:
  v11 = 3;
  v12 = (v10 & 1 | (2 * (v8 & 0x3F | ((a4 & 3 | 4u) << 7)))) << 8;
  do
  {
    v12 ^= (v12 ^ (--v11 << 18)) & 0xC0000;
    for ( i = 0; i <= 1; ++i )
    {
      v12 ^= ((unsigned __int16)v12 ^ (unsigned __int16)((_WORD)i << 15)) & 0x8000;
      v14 = 0;
      v15 = _InterlockedExchangeAdd(v5, 1u) % (unsigned int)dword_140E2DD00[HIWORD(v12) & 3];
      v16 = MmNumberOfChannels;
      v17 = v12 ^ (unsigned __int8)(v12 ^ v15);
      if ( MmNumberOfChannels )
      {
        while ( 1 )
        {
          v18 = v17;
          v19 = v14;
          if ( v14 == 2 )
          {
            v20 = qword_140E38D50 + 57216 * ((v17 >> 9) & 0x3F);
            if ( (*(_DWORD *)(v20 + 15184) & 1) == 0 )
              goto LABEL_22;
            v19 = 0;
            if ( v16 )
            {
              while ( *(_BYTE *)(v19 + v20 + 15237) != 1 )
              {
                if ( ++v19 >= v16 )
                  goto LABEL_19;
              }
              goto LABEL_23;
            }
LABEL_19:
            v19 = 0;
            if ( v16 )
            {
              while ( *(_BYTE *)(v19 + v20 + 15237) != 2 )
              {
                if ( ++v19 >= v16 )
                  goto LABEL_22;
              }
            }
            else
            {
LABEL_22:
              v19 = 0;
            }
          }
LABEL_23:
          v17 = (unsigned int)v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(v19 << 8)) & 0x100;
          result = MiGetBestPageToZero(a1, a2, v18 ^ ((unsigned __int16)v18 ^ (unsigned __int16)(v19 << 8)) & 0x100u);
          if ( result )
            return result;
          v16 = MmNumberOfChannels;
          if ( ++v14 >= (unsigned __int8)MmNumberOfChannels )
          {
            v5 = a3;
            break;
          }
        }
      }
      if ( a4 == 3 )
        break;
    }
  }
  while ( v11 );
  return 0LL;
}
