/*
 * XREFs of MiComputeImageVadCommitCharge @ 0x14065E224
 * Callers:
 *     MiCheckCommitReleaseFromVad @ 0x14065DD60 (MiCheckCommitReleaseFromVad.c)
 *     MiComputeCommitChargeForZeroPteRange @ 0x14065E164 (MiComputeCommitChargeForZeroPteRange.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiComputeImageVadCommitCharge(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  unsigned int v10; // edx
  unsigned __int64 *v11; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v11 = 0LL;
  result = MiGetProtoPteAddress(a1, a2, 6, &v11);
  if ( result )
  {
    v8 = (__int64)(result - v11[1]) >> 3;
    v9 = (unsigned int)(*((_DWORD *)v11 + 11) - v8);
    if ( v9 > a3 )
      v9 = a3;
    if ( (v11[4] & 0xA) == 0xA )
    {
      v10 = *((_DWORD *)v11 + 11) - (*((_DWORD *)v11 + 13) & 0x3FFFFFFF);
      if ( (unsigned int)v8 < v10 )
      {
        v4 = v10 - (unsigned int)v8;
        if ( v4 > v9 )
          v4 = v9;
      }
    }
    *a4 = v9;
    return v4;
  }
  else
  {
    *a4 = 1LL;
  }
  return result;
}
