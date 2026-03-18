/*
 * XREFs of VfUtilGetDriverBaseAddress @ 0x140B83270
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetNode @ 0x1403F00E4 (VfTargetDriversGetNode.c)
 */

__int64 __fastcall VfUtilGetDriverBaseAddress(__int64 a1)
{
  __int64 result; // rax

  result = VfTargetDriversGetNode(a1);
  if ( result )
    return *(_QWORD *)result;
  return result;
}
