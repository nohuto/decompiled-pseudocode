/*
 * XREFs of PpvUtilFailDriver @ 0x1405A5B0C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     IoGetDeviceProperty @ 0x140834450 (IoGetDeviceProperty.c)
 * Callees:
 *     VfErrorReport7 @ 0x140B834E0 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140B83578 (VfErrorReport8.c)
 */

__int64 __fastcall PpvUtilFailDriver(int a1)
{
  int v1; // ecx
  __int64 v2; // rcx
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
  {
    if ( a1 )
    {
      v1 = a1 - 1;
      if ( v1 )
      {
        if ( v1 != 1 )
          return result;
        v2 = 589LL;
      }
      else
      {
        v2 = 587LL;
      }
      return VfErrorReport8(v2);
    }
    else
    {
      return VfErrorReport7();
    }
  }
  return result;
}
