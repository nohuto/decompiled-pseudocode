/*
 * XREFs of FopInitializeFonts @ 0x140C5EE0C
 * Callers:
 *     BgpFoInitialize @ 0x140C5EBC0 (BgpFoInitialize.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140468D2C (BgpFwAllocateMemory.c)
 *     FioFwReadUlongAtOffset @ 0x140690BDC (FioFwReadUlongAtOffset.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     FopFreeFontData @ 0x140BA2800 (FopFreeFontData.c)
 *     FopGetTableOffsetAndSize @ 0x140C5ED08 (FopGetTableOffsetAndSize.c)
 *     FopReadMappingTable @ 0x140C5F0B4 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140C5F424 (FopValidateFontNameTable.c)
 *     BgpRasInitializeRasterizer @ 0x140C5FF34 (BgpRasInitializeRasterizer.c)
 */

__int64 __fastcall FopInitializeFonts(__int64 a1)
{
  int v1; // esi
  int v2; // ebp
  unsigned int i; // r14d
  char *Memory; // rax
  char *v6; // rbx
  unsigned int v7; // ecx
  int v8; // eax
  _QWORD *v9; // rcx
  unsigned __int32 v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    for ( i = 12; ; i += 4 )
    {
      Memory = (char *)BgpFwAllocateMemory(0x80uLL);
      v6 = Memory;
      if ( Memory )
        break;
LABEL_14:
      if ( (unsigned int)++v2 >= *(_DWORD *)(a1 + 24) )
        return v1 == 0 ? 0xC000007B : 0;
    }
    memset_0(Memory, 0, 0x80uLL);
    *((_QWORD *)v6 + 14) = v6 + 104;
    *((_QWORD *)v6 + 13) = v6 + 104;
    v7 = 0;
    *((_QWORD *)v6 + 2) = a1;
    *((_DWORD *)v6 + 10) = v2;
    v8 = *(_DWORD *)(a1 + 32);
    v11 = 0;
    if ( (v8 & 1) != 0 )
    {
      if ( (int)FioFwReadUlongAtOffset(*(_QWORD *)(a1 + 16), i, &v11) < 0 )
      {
LABEL_13:
        FopFreeFontData(v6);
        goto LABEL_14;
      }
      v7 = v11;
    }
    v11 = 0;
    *((_DWORD *)v6 + 11) = v7;
    if ( (int)FopGetTableOffsetAndSize(*(_QWORD *)(a1 + 16), v7, 1668112752, (unsigned __int32 *)v6 + 12, &v11) >= 0
      && (int)FopValidateFontNameTable(*(_QWORD *)(a1 + 16), *((unsigned int *)v6 + 11), v6 + 32) >= 0
      && (int)FopReadMappingTable(*(_QWORD *)(a1 + 16), *((unsigned int *)v6 + 12), v6 + 24) >= 0
      && (int)BgpRasInitializeRasterizer(v6) >= 0 )
    {
      v9 = *(_QWORD **)(a1 + 48);
      if ( *v9 != a1 + 40 )
        __fastfail(3u);
      *(_QWORD *)v6 = a1 + 40;
      ++v1;
      *((_QWORD *)v6 + 1) = v9;
      *v9 = v6;
      *(_QWORD *)(a1 + 48) = v6;
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  return v1 == 0 ? 0xC000007B : 0;
}
