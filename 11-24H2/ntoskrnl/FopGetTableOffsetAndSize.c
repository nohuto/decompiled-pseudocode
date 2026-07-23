/*
 * XREFs of FopGetTableOffsetAndSize @ 0x140C72248
 * Callers:
 *     FopInitializeFonts @ 0x140C7234C (FopInitializeFonts.c)
 *     FopValidateFontNameTable @ 0x140C72964 (FopValidateFontNameTable.c)
 *     BgpRasInitializeRasterizer @ 0x140C73474 (BgpRasInitializeRasterizer.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14045DF18 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FopGetTableOffsetAndSize(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned __int32 *a4,
        unsigned __int32 *a5)
{
  int v9; // r8d
  unsigned int v10; // ebx
  unsigned int v11; // edi
  unsigned int v12; // esi
  unsigned __int32 v13; // edx
  unsigned __int32 v14; // r9d
  __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  int v17; // [rsp+28h] [rbp-18h]
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF

  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v9 = FioFwReadBytesAtOffset(a1, a2, 0xCu, &v16);
  if ( v9 >= 0 )
  {
    if ( _byteswap_ulong(v16) == 0x10000 )
    {
      v10 = 0;
      v11 = a2 + 12;
      v12 = (unsigned __int16)__ROR2__(WORD2(v16), 8);
      while ( v10 < v12 )
      {
        v9 = FioFwReadBytesAtOffset(a1, v11, 0x10u, &v18);
        if ( v9 < 0 )
          return (unsigned int)v9;
        v9 = 0;
        *(_QWORD *)&v18 = _byteswap_uint64(__PAIR64__(v18, DWORD1(v18)));
        v13 = _byteswap_ulong(DWORD2(v18));
        DWORD2(v18) = v13;
        v14 = _byteswap_ulong(HIDWORD(v18));
        HIDWORD(v18) = v14;
        if ( (_DWORD)v18 == a3 )
        {
          *a4 = v13;
          *a5 = v14;
          return (unsigned int)v9;
        }
        ++v10;
        v11 += 16;
      }
      return (unsigned int)-1073741275;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v9;
}
