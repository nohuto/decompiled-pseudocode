/*
 * XREFs of HvlpDiscoverTopologyAmd @ 0x140C1B5AC
 * Callers:
 *     HvlpDiscoverTopologyWorker @ 0x14070CC94 (HvlpDiscoverTopologyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HvlpLpCpuid @ 0x14070CCC4 (HvlpLpCpuid.c)
 */

__int64 __fastcall HvlpDiscoverTopologyAmd(int a1, unsigned int a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int v7; // edi
  unsigned int v8; // ebx
  unsigned int v10; // ebp
  int v11; // ecx
  __int64 result; // rax
  __int128 v13; // [rsp+28h] [rbp-40h] BYREF

  v7 = 1;
  v13 = 0LL;
  v8 = 1;
  HvlpLpCpuid(a1, 0x80000000, 0, &v13);
  v10 = v13;
  if ( (unsigned int)v13 >= 0x80000008 )
  {
    HvlpLpCpuid(a1, 0x80000008, 0, &v13);
    LOWORD(v11) = WORD4(v13) >> 12;
    if ( !(WORD4(v13) >> 12) )
      _BitScanReverse((unsigned int *)&v11, 2 * BYTE8(v13) + 1);
    v8 = 1 << v11;
    if ( v10 >= 0x8000001E )
    {
      HvlpLpCpuid(a1, 0x80000001, 0, &v13);
      if ( (DWORD2(v13) & 0x400000) != 0 )
      {
        HvlpLpCpuid(a1, 0x8000001E, 0, &v13);
        v7 = BYTE5(v13) + 1;
        v8 /= v7;
      }
    }
  }
  *a3 = a2 / (v8 * v7);
  result = a2 / v7;
  *a4 = result;
  return result;
}
