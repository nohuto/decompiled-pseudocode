/*
 * XREFs of BgpFoInitialize @ 0x140C72100
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     FioFwReadUlongAtOffset @ 0x14069CFAC (FioFwReadUlongAtOffset.c)
 *     FopInitializeFonts @ 0x140C7234C (FopInitializeFonts.c)
 */

__int64 __fastcall BgpFoInitialize(__int64 a1, int a2)
{
  __int64 Memory; // rax
  __int64 v5; // rbx
  int UlongAtOffset; // edi
  __int64 v8; // rax
  int v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  v10 = 0;
  if ( !FontLibraryInitialized )
  {
    qword_140EF01F8 = (__int64)&FopFontFileListHead;
    FopFontFileListHead = (__int64)&FopFontFileListHead;
    FontLibraryInitialized = 1;
  }
  Memory = BgpFwAllocateMemory(0x38uLL);
  v5 = Memory;
  if ( !Memory )
    return (unsigned int)-1073741801;
  *(_OWORD *)Memory = 0LL;
  *(_OWORD *)(Memory + 16) = 0LL;
  *(_OWORD *)(Memory + 32) = 0LL;
  *(_QWORD *)(Memory + 48) = 0LL;
  *(_QWORD *)(Memory + 48) = Memory + 40;
  *(_QWORD *)(Memory + 40) = Memory + 40;
  *(_QWORD *)(Memory + 16) = a1;
  *(_DWORD *)(Memory + 28) = a2;
  UlongAtOffset = FioFwReadUlongAtOffset(a1, 0, &v9);
  if ( UlongAtOffset < 0 )
    goto LABEL_10;
  if ( v9 != 1953784678 )
  {
    *(_DWORD *)(v5 + 24) = 1;
    goto LABEL_15;
  }
  *(_DWORD *)(v5 + 32) |= 1u;
  UlongAtOffset = FioFwReadUlongAtOffset(a1, 4u, &v10);
  if ( UlongAtOffset < 0 )
  {
LABEL_10:
    BgpFwFreeMemory(v5);
    return (unsigned int)UlongAtOffset;
  }
  if ( ((v10 - 0x10000) & 0xFFFEFFFF) != 0 )
  {
    UlongAtOffset = -1073741701;
    goto LABEL_10;
  }
  UlongAtOffset = FioFwReadUlongAtOffset(a1, 8u, (_DWORD *)(v5 + 24));
  if ( UlongAtOffset < 0 )
    goto LABEL_10;
LABEL_15:
  UlongAtOffset = FopInitializeFonts(v5);
  if ( UlongAtOffset < 0 )
    goto LABEL_10;
  v8 = FopFontFileListHead;
  if ( *(__int64 **)(FopFontFileListHead + 8) != &FopFontFileListHead )
    __fastfail(3u);
  *(_QWORD *)v5 = FopFontFileListHead;
  *(_QWORD *)(v5 + 8) = &FopFontFileListHead;
  *(_QWORD *)(v8 + 8) = v5;
  FopFontFileListHead = v5;
  return (unsigned int)UlongAtOffset;
}
