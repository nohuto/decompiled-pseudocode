/*
 * XREFs of ?noOverflowCJSCAN@@YAKKGGK@Z @ 0x1C00C23EC
 * Callers:
 *     NtGdiCreateDIBSection @ 0x1C0046FD0 (NtGdiCreateDIBSection.c)
 *     GreGetBitmapBitsSize @ 0x1C00C2398 (GreGetBitmapBitsSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall noOverflowCJSCAN(unsigned int a1, unsigned __int16 a2, unsigned __int16 a3, unsigned int a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r10

  v4 = ((a3 * a2 * (unsigned __int64)a1 + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL;
  if ( v4 > 0xFFFFFFFF )
    return 0LL;
  v5 = a4 * v4;
  if ( v5 > 0xFFFFFFFF )
    return 0LL;
  else
    return (unsigned int)v5;
}
