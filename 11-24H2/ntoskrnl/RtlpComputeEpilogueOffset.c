/*
 * XREFs of RtlpComputeEpilogueOffset @ 0x14051AB4C
 * Callers:
 *     IopTimerDispatch @ 0x140495850 (IopTimerDispatch.c)
 *     ExpTimerDpcRoutine @ 0x140496BE0 (ExpTimerDpcRoutine.c)
 *     CmpLazyFlushDpcRoutine @ 0x14049EA10 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1404AEAE0 (ExpTimeRefreshDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x1405D40A0 (PopThermalZoneDpc.c)
 *     FsRtlTruncateSmallMcb @ 0x140695170 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KeExitRetpoline @ 0x14046029C (KeExitRetpoline.c)
 *     sub_140BD8DF0 @ 0x140BD8DF0 (sub_140BD8DF0.c)
 *     KeGuardDispatchICall @ 0x140BDAA60 (KeGuardDispatchICall.c)
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
  sub_140BD8DF0(a1, v3, 0LL, 0LL);
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v3[36])(v3 + 247, 1LL);
}
