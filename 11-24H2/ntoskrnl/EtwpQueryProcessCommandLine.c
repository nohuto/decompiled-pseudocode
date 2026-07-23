/*
 * XREFs of EtwpQueryProcessCommandLine @ 0x1408F0230
 * Callers:
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x1404C7CB0 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     EtwTimLogBlockNonCetBinaries @ 0x1407AB958 (EtwTimLogBlockNonCetBinaries.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1407ABD74 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1407AC594 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1407AC8F0 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408EF7A4 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x1408EFB30 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x1408F057C (EtwTraceAppStateChange.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x140A28934 (EtwTimLogProhibitChildProcessCreation.c)
 *     EtwpTimLogMitigationForProcess @ 0x140A63DF0 (EtwpTimLogMitigationForProcess.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140A9DA78 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x140ADB280 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpQueryProcessCommandLine(__int64 a1, __int64 a2)
{
  __int64 *v3; // r12
  _WORD *v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int16 v8; // si
  unsigned __int16 v9; // ax
  __int64 Pool2; // rax
  __int64 i; // rax
  void *Src[2]; // [rsp+20h] [rbp-48h]
  __m128i v15; // [rsp+30h] [rbp-38h]

  *(_OWORD *)Src = 0LL;
  *(_WORD *)a2 = 0;
  v3 = (__int64 *)(a2 + 8);
  v4 = *(_WORD **)(a2 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 736) + 32LL);
  if ( v5 )
  {
    v15.m128i_i32[1] = 0;
    v6 = v5 + 112;
    if ( v6 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    v15.m128i_i32[0] = *(_DWORD *)v6;
    v7 = *(_QWORD *)(v6 + 8);
    v15.m128i_i64[1] = v7;
    Src[1] = (void *)v7;
    v8 = _mm_cvtsi128_si32(v15) & 0xFFFE;
    if ( v8 )
    {
      if ( v7 )
      {
        if ( (v7 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v8 > 0x800u )
          v8 = 2048;
      }
      else
      {
        v8 = 0;
      }
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v8 )
  {
    v9 = *(_WORD *)(a2 + 2);
    if ( v9 )
    {
      if ( v8 >= v9 )
        v8 = *(_WORD *)(a2 + 2);
    }
    else
    {
      Pool2 = ExAllocatePool2(0x100uLL, v8, 0x50777445u);
      v4 = (_WORD *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      *v3 = Pool2;
      *(_WORD *)(a2 + 2) = v8;
    }
    memmove(v4, Src[1], v8);
    for ( i = v8 >> 1; i; --i )
    {
      if ( !*v4 )
        *v4 = 32;
      ++v4;
    }
    *(_WORD *)a2 = v8;
  }
  return 0;
}
