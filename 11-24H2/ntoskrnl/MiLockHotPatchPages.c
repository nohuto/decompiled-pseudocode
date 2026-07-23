/*
 * XREFs of MiLockHotPatchPages @ 0x1407F3D80
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x1407F5B04 (MiPrepareDriverForHotPatch.c)
 * Callees:
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     RtlDetermineHotPatchExtent @ 0x14082F6F4 (RtlDetermineHotPatchExtent.c)
 */

__int64 __fastcall MiLockHotPatchPages(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5, unsigned int a6)
{
  __int64 v8; // rsi
  __int64 result; // rax
  unsigned int v11; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  v12 = 0;
  v8 = a4;
  while ( a3 )
  {
    RtlDetermineHotPatchExtent(a5, *(_DWORD *)(a2 + 4LL * a6), 34404, (unsigned int)&v11, (__int64)&v12);
    result = MiLockDriverPageRange(a1, v11, v12, 1, 0LL);
    if ( (int)result < 0 )
      return result;
    a2 += 4 * v8;
    --a3;
  }
  return 0LL;
}
