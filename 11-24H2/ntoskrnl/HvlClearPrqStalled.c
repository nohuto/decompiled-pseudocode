/*
 * XREFs of HvlClearPrqStalled @ 0x140585F60
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1403AE3F8 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x1403AF3C0 (HvcallFastExtended.c)
 */

__int64 __fastcall HvlClearPrqStalled(int a1)
{
  unsigned __int16 v1; // ax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  v3[1] = 0;
  v3[0] = a1;
  v1 = HvcallFastExtended(65705LL, (__int64)v3, 8u, 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
