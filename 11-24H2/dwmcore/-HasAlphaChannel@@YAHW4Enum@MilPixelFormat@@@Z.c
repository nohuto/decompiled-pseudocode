/*
 * XREFs of ?HasAlphaChannel@@YAHW4Enum@MilPixelFormat@@@Z @ 0x1801CF2D4
 * Callers:
 *     ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x1801CF0DC (-HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HasAlphaChannel(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( a1 <= 15 )
  {
    if ( a1 == 15 )
      return 1LL;
    if ( a1 < 8 )
    {
      v3 = a1 - 1;
      if ( !v3 )
        return 1LL;
      v4 = v3 - 1;
      if ( !v4 || (unsigned int)(v4 - 1) < 2 )
        return 1LL;
    }
  }
  else
  {
    if ( a1 > 68 )
      return a1 == 69;
    if ( a1 == 68 )
      return 1LL;
    if ( a1 <= 22 )
    {
      if ( a1 == 22 || a1 == 16 )
        return 1LL;
    }
    else
    {
      v1 = a1 - 23;
      if ( !v1 || (unsigned int)(v1 - 2) <= 1 )
        return 1LL;
    }
  }
  return 0LL;
}
