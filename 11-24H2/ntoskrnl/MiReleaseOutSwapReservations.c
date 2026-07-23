/*
 * XREFs of MiReleaseOutSwapReservations @ 0x1403C697C
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x1403C68D4 (MiProcessWsInSwapRanges.c)
 * Callees:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

_QWORD *__fastcall MiReleaseOutSwapReservations(unsigned __int64 *a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  _QWORD v7[2]; // [rsp+28h] [rbp-49h] BYREF
  __int16 v8; // [rsp+38h] [rbp-39h] BYREF
  _QWORD *v9; // [rsp+40h] [rbp-31h]
  __int64 v10; // [rsp+48h] [rbp-29h]
  __int64 v11; // [rsp+50h] [rbp-21h]
  __int64 v12; // [rsp+58h] [rbp-19h]

  memset_0(&v8, 0, 0x78uLL);
  v7[0] = 0LL;
  result = v7;
  v11 = 0LL;
  v12 = 0LL;
  v9 = v7;
  v7[1] = 4096LL;
  v8 = 3;
  v10 = 1LL;
  while ( (unsigned __int64)a1 <= a2 )
  {
    v5 = *a1;
    v6 = *a1 + a1[1];
    while ( v5 < v6 )
    {
      do
      {
        v7[0] = v5;
        result = (_QWORD *)MmAccessFault(0LL, v5, 0, (ULONG_PTR)&v8 + 1);
      }
      while ( (_DWORD)result == 873 );
      v5 += 4096LL;
    }
    a1 += 2;
  }
  return result;
}
