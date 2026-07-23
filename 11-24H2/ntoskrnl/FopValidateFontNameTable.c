/*
 * XREFs of FopValidateFontNameTable @ 0x140C72964
 * Callers:
 *     FopInitializeFonts @ 0x140C7234C (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14045DF18 (FioFwReadBytesAtOffset.c)
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     FopGetTableOffsetAndSize @ 0x140C72248 (FopGetTableOffsetAndSize.c)
 *     FopReadNamingTable @ 0x140C727E0 (FopReadNamingTable.c)
 */

__int64 __fastcall FopValidateFontNameTable(__int64 a1, unsigned int a2, __int64 *a3)
{
  int TableOffsetAndSize; // edi
  unsigned __int32 v6; // r15d
  int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned int i; // eax
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  void *Memory; // rax
  __int64 v14; // rsi
  unsigned int j; // edx
  __int64 v16; // rcx
  unsigned __int32 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int32 v20; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0;
  v19 = 0LL;
  v18 = 0;
  TableOffsetAndSize = FopGetTableOffsetAndSize(a1, a2, 1851878757, &v20, &v18);
  if ( TableOffsetAndSize >= 0 )
  {
    v6 = v20;
    v7 = FopReadNamingTable(a1, v20, &v19);
    v8 = v19;
    TableOffsetAndSize = v7;
    if ( v7 >= 0 )
    {
      v9 = v19 + 6;
      for ( i = 0; ; ++i )
      {
        if ( i >= *(unsigned __int16 *)(v19 + 2) )
        {
          TableOffsetAndSize = -1073741701;
          goto LABEL_18;
        }
        if ( *(_DWORD *)v9 == 65539 && *(_DWORD *)(v9 + 4) == 66569 )
          break;
        v9 += 12LL;
      }
      v11 = *(unsigned __int16 *)(v9 + 8);
      v12 = v11 + 2;
      if ( (unsigned int)v12 < v11 )
      {
        TableOffsetAndSize = -1073741675;
      }
      else
      {
        Memory = (void *)BgpFwAllocateMemory(v12);
        v14 = (__int64)Memory;
        if ( Memory )
        {
          TableOffsetAndSize = FioFwReadBytesAtOffset(
                                 a1,
                                 v6 + *(unsigned __int16 *)(v8 + 4) + *(unsigned __int16 *)(v9 + 10),
                                 *(unsigned __int16 *)(v9 + 8),
                                 Memory);
          if ( TableOffsetAndSize < 0 )
          {
            BgpFwFreeMemory(v14);
          }
          else
          {
            *(_WORD *)(v9 + 8) >>= 1;
            for ( j = 0;
                  j < *(unsigned __int16 *)(v9 + 8);
                  *(_WORD *)(v14 + 2 * v16) = __ROR2__(*(_WORD *)(v14 + 2 * v16), 8) )
            {
              v16 = j++;
            }
            *(_WORD *)(v14 + 2LL * j) = 0;
            *a3 = v14;
          }
        }
        else
        {
          TableOffsetAndSize = -1073741801;
        }
      }
    }
LABEL_18:
    if ( v8 )
      BgpFwFreeMemory(v8);
  }
  return (unsigned int)TableOffsetAndSize;
}
