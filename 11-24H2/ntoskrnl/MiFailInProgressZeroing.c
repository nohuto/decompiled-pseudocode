/*
 * XREFs of MiFailInProgressZeroing @ 0x1406908C0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetZeroingContext @ 0x14041F9E0 (MiGetZeroingContext.c)
 */

unsigned __int64 __fastcall MiFailInProgressZeroing(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int i; // edx
  __int64 v4; // rdi
  _QWORD *v5; // r10
  __int64 v6; // rsi
  _QWORD *j; // r9
  __int64 ZeroingContext; // rax
  _QWORD *v9; // r9
  unsigned int k; // r11d
  _QWORD *m; // r8
  unsigned int n; // r9d
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v4 = *(_QWORD *)(57216LL * i + *(_QWORD *)(a1 + 16) + 15272);
    if ( v4 )
    {
      v5 = (_QWORD *)(v4 + 328);
      v6 = 3LL;
      do
      {
        if ( *((_BYTE *)v5 - 161) )
        {
          for ( j = (_QWORD *)*v5; j != v5; j = (_QWORD *)*v9 )
          {
            ZeroingContext = MiGetZeroingContext((__int64)(j - 52));
            for ( k = 0; k < *(_DWORD *)(ZeroingContext + 280); ++k )
            {
              if ( (*(_QWORD *)(ZeroingContext + 8LL * k + 24) & 0xA) == 8 )
                *(_QWORD *)(ZeroingContext + 8LL * k + 24) |= 2uLL;
            }
          }
          for ( m = *(_QWORD **)(v4 + 32); m != (_QWORD *)(v4 + 32); m = (_QWORD *)*m )
          {
            for ( n = 0; n < *((_DWORD *)m - 12); ++n )
            {
              if ( (m[n - 38] & 0xA) == 8 )
                m[n - 38] |= 2uLL;
            }
          }
        }
        v5 += 38;
        --v6;
      }
      while ( v6 );
    }
    result = (unsigned __int16)KeNumberNodes;
  }
  return result;
}
