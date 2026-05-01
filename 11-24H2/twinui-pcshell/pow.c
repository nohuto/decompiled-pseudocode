/*
 * XREFs of pow @ 0x1802D2560
 * Callers:
 *     ?ComputeCubicBezierProgress@AnimationCoordinationHelper@KeyboardHosting@@CAN_NM@Z @ 0x18048367C (-ComputeCubicBezierProgress@AnimationCoordinationHelper@KeyboardHosting@@CAN_NM@Z.c)
 *     ?LinearizeRGBColorValue@@YANN@Z @ 0x18067E284 (-LinearizeRGBColorValue@@YANN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
