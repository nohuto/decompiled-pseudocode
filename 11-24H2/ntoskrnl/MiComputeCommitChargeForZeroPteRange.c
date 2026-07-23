/*
 * XREFs of MiComputeCommitChargeForZeroPteRange @ 0x14066AE54
 * Callers:
 *     MiCheckCommitReleaseFromVad @ 0x14066AA50 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MiComputeImageVadCommitCharge @ 0x14066AF14 (MiComputeImageVadCommitCharge.c)
 */

__int64 __fastcall MiComputeCommitChargeForZeroPteRange(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 48);
  v4 = 0LL;
  v10 = 0LL;
  v5 = a3;
  if ( (v3 & 0x200000) != 0 )
    return a3 & -(__int64)((v3 & 0x2000000) != 0);
  if ( (v3 & 0x70) == 0x20 )
  {
    v7 = (unsigned __int64)(a2 << 25 >> 16) >> 12;
    if ( a3 )
    {
      do
      {
        v8 = MiComputeImageVadCommitCharge(a1, v7, v5, &v10);
        v7 += v10;
        v4 += v8;
        v5 -= v10;
      }
      while ( v5 );
    }
  }
  else
  {
    if ( (v3 & 0x280) != 0x280 )
      return 0LL;
    return v5;
  }
  return v4;
}
