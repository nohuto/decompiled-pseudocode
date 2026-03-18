/*
 * XREFs of ?CopyPixels@CSectionBitmapRealization@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180216D50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSectionBitmapRealization::CopyPixels(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, void *a5)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax

  v5 = *(_QWORD *)(a1 + 16);
  v6 = -2003292412;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x7Eu, 0LL);
  }
  else
  {
    memset_0(a5, 0, a4);
  }
  return v6;
}
