/*
 * XREFs of MiQueueCoreWorkingSetEntries @ 0x1402B9360
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x1402C5040 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteRestrictedImageFault @ 0x140464CC4 (MiCompleteRestrictedImageFault.c)
 * Callees:
 *     MiAddWorkingSetEntries @ 0x1402BA2B0 (MiAddWorkingSetEntries.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402BB160 (MiEmptyDeferredWorkingSetEntries.c)
 */

__int64 __fastcall MiQueueCoreWorkingSetEntries(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v5; // cl
  unsigned int v6; // edi
  int v7; // eax
  char v8; // r9
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  __int16 v11; // ax
  char v13; // al
  char v14; // al

  v5 = *((_BYTE *)a1 + 13);
  v6 = a2;
  if ( (v5 & 9) != 8 || (v5 & 4) != 0 )
    return 0LL;
  v7 = *((unsigned __int16 *)a1 + 5);
  if ( (_WORD)v7 )
  {
    if ( *((unsigned __int16 *)a1 + 4) + v7 == (((unsigned int)a2 >> 3) & 0x1FF) )
    {
      v8 = *((_BYTE *)a1 + 13);
      if ( *(__int64 *)(a3 + 40) < 0 )
      {
        if ( (v8 & 2) != 0 )
        {
LABEL_7:
          v9 = *((_BYTE *)a1 + 13) & 2;
          v10 = ((unsigned __int64)*((unsigned __int16 *)a1 + 4) << 12) + ((__int64)(a1[2] << 25) >> 16 << 25 >> 16);
          if ( v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            v9 = (unsigned int)v9 | 5;
          }
          else if ( (*(_DWORD *)(*a1 + 184LL) & 0xF) == 0 )
          {
            v9 = (unsigned int)v9 | 4;
          }
          MiAddWorkingSetEntries(*a1, v10, *((unsigned __int16 *)a1 + 5), v9);
          *((_WORD *)a1 + 5) = 0;
        }
      }
      else if ( (v8 & 2) == 0 )
      {
        goto LABEL_7;
      }
    }
    else
    {
      MiEmptyDeferredWorkingSetEntries(a1, a2, a3);
    }
  }
  v11 = *((_WORD *)a1 + 5);
  if ( v11 )
  {
    *((_WORD *)a1 + 5) = v11 + 1;
  }
  else
  {
    *((_WORD *)a1 + 5) = 1;
    *((_WORD *)a1 + 4) = (v6 >> 3) & 0x1FF;
    v13 = *((_BYTE *)a1 + 13);
    if ( *(__int64 *)(a3 + 40) < 0 )
      v14 = v13 & 0xFD;
    else
      v14 = v13 | 2;
    *((_BYTE *)a1 + 13) = v14;
  }
  return 1LL;
}
