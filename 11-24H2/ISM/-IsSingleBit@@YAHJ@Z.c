/*
 * XREFs of ?IsSingleBit@@YAHJ@Z @ 0x180034050
 * Callers:
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180033E8C (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsSingleBit(int a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( a1 > 0 )
    return ((a1 - 1) & a1) == 0;
  return v1;
}
