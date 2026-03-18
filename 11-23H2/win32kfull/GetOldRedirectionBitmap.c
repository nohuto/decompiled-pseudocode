/*
 * XREFs of GetOldRedirectionBitmap @ 0x1C01BC518
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F88D0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 */

__int64 __fastcall GetOldRedirectionBitmap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 Prop; // rax

  v4 = 0LL;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL, a4);
  if ( Prop )
    return *(_QWORD *)(Prop + 8);
  return v4;
}
