/*
 * XREFs of ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x180022088
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180023E20 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180022118 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::InsertAfterAtlasImage(
        CAtlasedRectsVisual *this,
        struct CAtlasedImage *a2,
        struct CAtlasedImage *a3)
{
  unsigned int v4; // r8d
  unsigned int v5; // r10d
  unsigned int v6; // eax
  struct CAtlasedImage **i; // r9
  int inserted; // eax
  unsigned int v9; // ebx

  v4 = 0;
  if ( a3 )
  {
    v5 = *((_DWORD *)this + 56);
    v6 = 0;
    for ( i = (struct CAtlasedImage **)*((_QWORD *)this + 25); v6 < v5; ++i )
    {
      if ( a3 == *i )
        break;
      ++v6;
    }
    if ( v6 == v5 )
    {
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2Au, 0LL);
      return v9;
    }
    v4 = v6 + 1;
  }
  inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex(this, a2, v4);
  v9 = inserted;
  if ( inserted < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x31u, 0LL);
  return v9;
}
