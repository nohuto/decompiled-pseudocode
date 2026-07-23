/*
 * XREFs of MiSplitMirrorBitMap @ 0x1407EC424
 * Callers:
 *     MiActOnMirrorBitmap @ 0x140AA4F10 (MiActOnMirrorBitmap.c)
 *     MiUpdateMirrorBitmaps @ 0x140ABBD20 (MiUpdateMirrorBitmaps.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x14026C5E4 (MiSplitBitmapPages.c)
 */

__int64 __fastcall MiSplitMirrorBitMap(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 result; // rax

  v3 = a2 + a3;
  result = MiSplitBitmapPages(8LL);
  if ( (_DWORD)result )
  {
    if ( v3 > *a1 )
      *a1 = v3;
    return 1LL;
  }
  return result;
}
