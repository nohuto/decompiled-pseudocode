/*
 * XREFs of ?AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ @ 0x1C022D5A4
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ECFA8 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall WindowArrangement::AreDockTargetActiveForSnapMoveSize(WindowArrangement *this)
{
  bool result; // al

  result = 0;
  if ( byte_1C03591E1 )
    return byte_1C03591E5 != 0;
  return result;
}
