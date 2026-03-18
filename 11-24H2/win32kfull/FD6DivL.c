/*
 * XREFs of FD6DivL @ 0x1401B1D98
 * Callers:
 *     RaisePower @ 0x14013E960 (RaisePower.c)
 *     Log @ 0x14013F0BC (Log.c)
 *     ComputeBGRMappingTable @ 0x1402F3914 (ComputeBGRMappingTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FD6DivL(int a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  __int64 result; // rax

  v2 = a2;
  if ( a2 <= 0 )
  {
    v2 = -a2;
    v3 = 1;
    if ( !a2 )
      return (unsigned int)a1;
  }
  else
  {
    v3 = 0;
  }
  if ( a1 <= 0 )
  {
    a1 = -a1;
    if ( !a1 )
      return 0LL;
    v3 ^= 1u;
  }
  result = (a1 + (v2 >> 1)) / v2;
  if ( v3 )
    return (unsigned int)-(int)result;
  return result;
}
