/*
 * XREFs of ?GetProperty@CNineGridBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1802A1420
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x1801E2444 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 */

__int64 __fastcall CNineGridBrush::GetProperty(CNineGridBrush *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  float *InsetFieldPointer; // rax
  _DWORD *v5; // r8

  v3 = 0;
  InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(this, a2);
  if ( InsetFieldPointer )
  {
    *v5 = *(_DWORD *)InsetFieldPointer;
    v5[18] = 18;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0xD3u, 0LL);
  }
  return v3;
}
