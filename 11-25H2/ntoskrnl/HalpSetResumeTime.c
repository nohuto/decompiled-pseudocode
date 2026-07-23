/*
 * XREFs of HalpSetResumeTime @ 0x140557C88
 * Callers:
 *     HalpEfiInitializeOnResume @ 0x14054A304 (HalpEfiInitializeOnResume.c)
 *     HalpPostSleepMP @ 0x140B58A3C (HalpPostSleepMP.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     HalpSetVirtualRtc @ 0x14042DE60 (HalpSetVirtualRtc.c)
 *     RtlULongLongMult @ 0x14043A9F0 (RtlULongLongMult.c)
 *     HalpQueryVirtualRtc @ 0x1405484B0 (HalpQueryVirtualRtc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpSetResumeTime(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  NTSTATUS v3; // ecx
  unsigned __int64 v4; // r10
  ULONGLONG v5; // r9
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG pullResult; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v6[0] = 0LL;
  v8 = 0LL;
  pullResult = 0LL;
  if ( a2 )
  {
    if ( HalpResumeFromHibernate )
    {
      if ( a2 == 1 )
      {
        if ( (HalpResumeFlags & 1) == 0 && HalpResumeTime )
        {
          if ( (HalpResumeFlags & 2) == 0 && !ExpRealTimeIsUniversal )
            HalpResumeTime += (__int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
          v2 = guard_dispatch_icall_no_overrides(&v8);
          v3 = RtlULongLongMult(v2 - HalpTimeStampAtResume, 0x989680uLL, &pullResult);
          v5 = pullResult / v8;
          if ( v3 < 0 )
            v5 = 10000000 * (v4 / v8) + 10000000 * (v4 % v8) / v8;
          HalpResumeTime += v5;
        }
      }
      else if ( a2 == 2 )
      {
        if ( (HalpResumeFlags & 1) != 0 || !HalpResumeTime || HalpQueryVirtualRtc(v6, 0LL) && HalpResumeTime < v6[0] )
        {
          HalpVrtcTimeStale = 1;
        }
        else
        {
          HalpSetVirtualRtc((LARGE_INTEGER *)&HalpResumeTime);
          HalpResumeTime = 0LL;
        }
      }
    }
  }
  else if ( a1 )
  {
    HalpResumeTime = a1[15];
    HalpTimeStampAtResume = a1[16];
    HalpResumeFlags = a1[17];
  }
}
