/*
 * XREFs of HalpSetResumeTime @ 0x14055A588
 * Callers:
 *     HalpEfiInitializeOnResume @ 0x14054CBF4 (HalpEfiInitializeOnResume.c)
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     HalpSetVirtualRtc @ 0x140425F30 (HalpSetVirtualRtc.c)
 *     RtlULongLongMult @ 0x140437830 (RtlULongLongMult.c)
 *     HalpQueryVirtualRtc @ 0x14054ADA0 (HalpQueryVirtualRtc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpSetResumeTime(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  NTSTATUS v5; // ecx
  unsigned __int64 v6; // r10
  ULONGLONG v7; // r9
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG pullResult; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v8[0] = 0LL;
  v10 = 0LL;
  pullResult = 0LL;
  if ( (_DWORD)a2 )
  {
    if ( HalpResumeFromHibernate )
    {
      if ( (_DWORD)a2 == 1 )
      {
        if ( (HalpResumeFlags & 1) == 0 && HalpResumeTime )
        {
          if ( (HalpResumeFlags & 2) == 0 && !ExpRealTimeIsUniversal )
            HalpResumeTime += (__int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
          v4 = guard_dispatch_icall_no_overrides(&v10, a2, a3, a4);
          v5 = RtlULongLongMult(v4 - HalpTimeStampAtResume, 0x989680uLL, &pullResult);
          v7 = pullResult / v10;
          if ( v5 < 0 )
            v7 = 10000000 * (v6 / v10) + 10000000 * (v6 % v10) / v10;
          HalpResumeTime += v7;
        }
      }
      else if ( (_DWORD)a2 == 2 )
      {
        if ( (HalpResumeFlags & 1) != 0 || !HalpResumeTime || HalpQueryVirtualRtc(v8, 0LL) && HalpResumeTime < v8[0] )
        {
          HalpVrtcTimeStale = 1;
        }
        else
        {
          HalpSetVirtualRtc(&HalpResumeTime);
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
