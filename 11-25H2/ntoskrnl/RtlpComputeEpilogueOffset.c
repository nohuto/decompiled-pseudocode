/*
 * XREFs of RtlpComputeEpilogueOffset @ 0x1405183CC
 * Callers:
 *     IopTimerDispatch @ 0x1404963F0 (IopTimerDispatch.c)
 *     ExpTimerDpcRoutine @ 0x1404970A0 (ExpTimerDpcRoutine.c)
 *     CmpLazyFlushDpcRoutine @ 0x14049F750 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1404ADBC0 (ExpTimeRefreshDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x1405CF690 (PopThermalZoneDpc.c)
 *     FsRtlTruncateSmallMcb @ 0x140689D20 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KeExitRetpoline @ 0x14046112C (KeExitRetpoline.c)
 *     sub_140BC7DF0 @ 0x140BC7DF0 (sub_140BC7DF0.c)
 *     KeGuardDispatchICall @ 0x140BC9A60 (KeGuardDispatchICall.c)
 */

__int64 __fastcall RtlpComputeEpilogueOffset(__int64 a1, _QWORD *a2, signed __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned int i; // eax
  __int64 v6; // rcx
  _QWORD *v7; // r9
  signed __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  for ( i = 0; i < 0x19; ++i )
    *a2++ ^= a3;
  *(_DWORD *)v3 ^= a3;
  v6 = *((int *)v3 + 49);
  if ( a3 && (_DWORD)v6 )
  {
    v7 = &a2[v6 - 1];
    while ( 1 )
    {
      *v7-- ^= a3;
      v9 = __ROR8__(a3, v6);
      _bittestandcomplement64(&v9, v9 & 0x3F);
      v6 = (unsigned int)(v6 - 1);
      if ( !(_DWORD)v6 )
        break;
      a3 = v9;
    }
  }
  if ( (*((_DWORD *)v3 + 631) & 0x100000) != 0 )
    KeExitRetpoline(v6, a2);
  else
    _mm_lfence();
  sub_140BC7DF0(a1, v3, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v3[36])(v3 + 247, 1LL);
}
