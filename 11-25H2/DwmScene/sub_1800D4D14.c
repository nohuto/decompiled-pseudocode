/*
 * XREFs of sub_1800D4D14 @ 0x1800D4D14
 * Callers:
 *     sub_18000AB60 @ 0x18000AB60 (sub_18000AB60.c)
 *     sub_18000AB90 @ 0x18000AB90 (sub_18000AB90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D4D14(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = 0LL;
  result = a1 + 4;
  while ( v1 < 3 )
  {
    if ( *(float *)(result + 12) < *(float *)result )
    {
      *(_BYTE *)a1 = 0;
      *(_DWORD *)(a1 + 4) = 2139095039;
      *(_DWORD *)(a1 + 8) = 2139095039;
      *(_DWORD *)(a1 + 12) = 2139095039;
      result = 4286578687LL;
      *(_DWORD *)(a1 + 16) = -8388609;
      *(_DWORD *)(a1 + 20) = -8388609;
      *(_DWORD *)(a1 + 24) = -8388609;
      return result;
    }
    ++v1;
    result += 4LL;
  }
  return result;
}
