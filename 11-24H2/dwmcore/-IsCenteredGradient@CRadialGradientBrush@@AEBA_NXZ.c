/*
 * XREFs of ?IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ @ 0x1802A3114
 * Callers:
 *     ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x1802A2B94 (-CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z.c)
 *     ?SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1802A319C (-SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRadialGradientBrush::IsCenteredGradient(CRadialGradientBrush *this)
{
  return COERCE_FLOAT(*((_DWORD *)this + 66) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(*((_DWORD *)this + 67) & _xmm) < 0.0000011920929;
}
