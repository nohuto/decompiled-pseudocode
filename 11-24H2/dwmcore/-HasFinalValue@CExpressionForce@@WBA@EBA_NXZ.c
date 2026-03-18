/*
 * XREFs of ?HasFinalValue@CExpressionForce@@WBA@EBA_NXZ @ 0x1802AF9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CExpressionForce::HasFinalValue(__int64 a1)
{
  return CWICBitmapRealization::IsProtected((CWICBitmapRealization *)(a1 - 16));
}
