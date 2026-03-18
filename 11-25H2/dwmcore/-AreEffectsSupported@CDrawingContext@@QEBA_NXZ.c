/*
 * XREFs of ?AreEffectsSupported@CDrawingContext@@QEBA_NXZ @ 0x1802067A0
 * Callers:
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x18011C3F0 (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
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
