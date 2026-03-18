/*
 * XREFs of RoundUp64 @ 0x14000D3E0
 * Callers:
 *     NVMeControllerPreparePLDR @ 0x14001D3BC (NVMeControllerPreparePLDR.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RoundUp64(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = a1 % a2;
  if ( v3 )
    return a2 - v3 + a1;
  else
    return a1;
}
