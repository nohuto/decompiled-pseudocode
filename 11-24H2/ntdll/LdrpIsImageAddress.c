/*
 * XREFs of LdrpIsImageAddress @ 0x18015DD60
 * Callers:
 *     LdrpQueryCurrentPatch @ 0x1800AE798 (LdrpQueryCurrentPatch.c)
 * Callees:
 *     NpQueryVirtualMemory @ 0x18015FBF0 (NpQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpIsImageAddress(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  __int64 result; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+50h] [rbp-18h]

  v3 = 0;
  memset(v5, 0, sizeof(v5));
  v6 = 0LL;
  result = NpQueryVirtualMemory(-1LL, a1, 0LL, v5, 48LL, 0LL);
  if ( (int)result >= 0 )
  {
    LOBYTE(v3) = DWORD2(v6) == 0x1000000;
    *a2 = v3;
  }
  return result;
}
