/*
 * XREFs of ?AreEffectsSupported@CDrawingContext@@QEBA_NXZ @ 0x1801D322C
 * Callers:
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801D2FBC (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::AreEffectsSupported(CDrawingContext *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 5);
  result = 0;
  if ( *(int *)(v1 + 616) >= 37632 )
    return *(_BYTE *)(v1 + 1497) == 0;
  return result;
}
