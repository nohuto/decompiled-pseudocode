/*
 * XREFs of DxgkEngGetWindowGdiDpiScalingFactor @ 0x1C00E06B0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsWindowGdiScaled @ 0x1C009B0E0 (UserIsWindowGdiScaled.c)
 *     GreGetScaledLogPixels @ 0x1C016CB10 (GreGetScaledLogPixels.c)
 */

__int64 __fastcall DxgkEngGetWindowGdiDpiScalingFactor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( (unsigned int)UserIsWindowGdiScaled(a1, &v5, a3, a4) )
    return (unsigned __int16)GreGetScaledLogPixels(v5) / 0x60u;
  else
    return 1LL;
}
