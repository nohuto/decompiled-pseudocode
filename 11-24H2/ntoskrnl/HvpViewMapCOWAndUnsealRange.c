/*
 * XREFs of HvpViewMapCOWAndUnsealRange @ 0x14097FDC0
 * Callers:
 *     HvpMarkDirty @ 0x140882A90 (HvpMarkDirty.c)
 *     HvpSetRangeProtection @ 0x1408832A4 (HvpSetRangeProtection.c)
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 * Callees:
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x14097FE30 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapFindViewForFileOffset @ 0x14097FF54 (HvpViewMapFindViewForFileOffset.c)
 */

__int64 __fastcall HvpViewMapCOWAndUnsealRange(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // rbx
  __int64 ViewForFileOffset; // rax
  __int64 v7; // r10
  __int64 v8; // rdi
  __int64 result; // rax

  v3 = (unsigned int)(a2 + 4096);
  v4 = v3 + a3;
  while ( v3 < v4 )
  {
    ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1, v3);
    v8 = v4;
    if ( v4 >= *(_QWORD *)(ViewForFileOffset + 48) )
      v8 = *(_QWORD *)(ViewForFileOffset + 48);
    result = HvpViewMapMakeViewRangeCOWByCaller(a1, ViewForFileOffset, v7, v8);
    if ( (int)result < 0 )
      return result;
    v3 = v8;
  }
  return 0LL;
}
