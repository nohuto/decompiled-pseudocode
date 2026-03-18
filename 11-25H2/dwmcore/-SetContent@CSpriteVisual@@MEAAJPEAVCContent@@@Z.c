/*
 * XREFs of ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x1802B0210
 * Callers:
 *     ?SetReferenceProperty@CSpriteVisual@@UEAAJIPEAVCResource@@@Z @ 0x1802B02A0 (-SetReferenceProperty@CSpriteVisual@@UEAAJIPEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18012DD40 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVisual::SetContent(CSpriteVisual *this, struct CContent *a2)
{
  unsigned int v4; // ebx
  int v5; // eax

  if ( !a2 || (*(unsigned __int8 (__fastcall **)(struct CContent *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 17LL) )
  {
    v5 = CVisual::SetContent(this, a2);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x80u, 0LL);
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x7Du, 0LL);
  }
  return v4;
}
