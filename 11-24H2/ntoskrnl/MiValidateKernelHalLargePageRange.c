/*
 * XREFs of MiValidateKernelHalLargePageRange @ 0x140C5DFC0
 * Callers:
 *     <none>
 * Callees:
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 */

__int64 __fastcall MiValidateKernelHalLargePageRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rsi
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rbp

  if ( (a3 & 0x20000000) != 0 )
  {
    v4 = (_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v5 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    while ( (unsigned __int64)v4 < v5 )
    {
      v6 = 48 * ((*v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v7 = v6 + 24576;
      while ( v6 < v7 )
      {
        *(_QWORD *)(v6 + 16) = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x60;
        MiMarkPfnVerified(v6, 0LL, a3, a4);
        v6 += 48LL;
      }
      ++v4;
    }
  }
  return 0LL;
}
