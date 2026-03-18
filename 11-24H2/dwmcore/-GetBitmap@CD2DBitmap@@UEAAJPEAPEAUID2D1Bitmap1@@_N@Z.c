/*
 * XREFs of ?GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801C43F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1801C4488 (-EnsureBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x1802CD304 (-EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::GetBitmap(CD2DBitmap *this, struct ID2D1Bitmap1 **a2, char a3)
{
  CD2DBitmap *v4; // rcx
  int v6; // ebx
  struct ID2D1Bitmap1 *v7; // rcx
  struct ID2D1Bitmap1 *v9; // rcx

  *a2 = 0LL;
  v4 = (CD2DBitmap *)((char *)this - 72);
  if ( a3 )
  {
    v6 = CD2DBitmap::EnsureIgnoreAlphaBitmap(v4);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x8Fu, 0LL);
    }
    else
    {
      v9 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 8);
      *a2 = v9;
      (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  else
  {
    v6 = CD2DBitmap::EnsureBitmap(v4);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x88u, 0LL);
    }
    else
    {
      v7 = (struct ID2D1Bitmap1 *)*((_QWORD *)this + 7);
      *a2 = v7;
      (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return (unsigned int)v6;
}
