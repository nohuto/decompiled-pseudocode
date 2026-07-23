/*
 * XREFs of MiPrefetchDriverPages @ 0x1409E63EC
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 * Callees:
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 */

__int64 MiPrefetchDriverPages()
{
  __int64 result; // rax
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  result = MiMakeDemandZeroPte(4);
  v9 = 0LL;
  v8 = 0LL;
  if ( v1 <= v3 )
  {
    do
    {
      v4 = *(_QWORD *)v1;
      if ( (*(_QWORD *)v1 & 1) != 0 || (v4 & 0x400) == 0 && ((v4 & 0x800) != 0 || v4 == result) )
      {
        v5 = v9;
      }
      else
      {
        v6 = v1 << 25;
        if ( v9 )
        {
          v7 = v8;
        }
        else
        {
          v7 = v6 >> 16;
          v8 = v6 >> 16;
        }
        v5 = ((v6 + 0x10000000) >> 16) - v7;
        v9 = v5;
      }
      v1 += 8LL;
    }
    while ( v1 <= v2 );
    if ( v5 > 0x1000 )
      return MiPrefetchVirtualMemory(1uLL, (__int64)&v8, 1LL, 45);
  }
  return result;
}
