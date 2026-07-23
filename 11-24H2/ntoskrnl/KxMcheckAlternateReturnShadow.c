/*
 * XREFs of KxMcheckAlternateReturnShadow @ 0x140BBDA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KxMcheckAlternateReturnShadow(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int16 a14)
{
  unsigned __int64 v14; // rsi
  _KIDTENTRY64 *v17; // rsi
  __int64 v19; // [rsp-28h] [rbp-28h] BYREF
  _KIDTENTRY64 v20; // [rsp-20h] [rbp-20h]
  _KIDTENTRY64 v21; // [rsp-10h] [rbp-10h]

  if ( (v20.OffsetLow & 1) != 0 )
  {
    __asm { swapgs }
    _mm_lfence();
    if ( !_bittest(MK_FP(__GS__, 45080LL), 1u) )
      __writecr3((unsigned __int64)&v19);
    __writegsqword(0x10u, v14);
    v17 = KeGetPcr()->IdtBase + 1056;
    v21 = v17[-1];
    v20 = v17[-2];
    v19 = *(&v17[-3].Alignment + 1);
    __writegsqword(0x10u, 0LL);
    return KxMcheckAlternateReturn(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  }
  else
  {
    _mm_lfence();
    return KxMcheckAlternateReturn(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  }
}
