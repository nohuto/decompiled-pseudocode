/*
 * XREFs of GetBootSystemTime @ 0x140C0CA8C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     HalSetRealTimeClock @ 0x1404191C0 (HalSetRealTimeClock.c)
 *     HalQueryRealTimeClock @ 0x1404196C0 (HalQueryRealTimeClock.c)
 *     RtlpTimeToTimeFields @ 0x140419FC0 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x14041A578 (RtlpTimeFieldsToTime.c)
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall GetBootSystemTime(__int64 *a1, ULONGLONG *a2)
{
  __int64 v2; // rdi
  int v3; // r15d
  int v6; // esi
  unsigned __int8 RealTimeClock; // r14
  __int64 v8; // rax
  NTSTATUS v9; // eax
  unsigned __int64 v10; // r9
  unsigned __int64 Blink; // rcx
  ULONGLONG v12; // rdx
  ULONGLONG v13; // r10
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  bool v16; // zf
  ULONGLONG v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  __int64 result; // rax
  __int128 v21; // [rsp+20h] [rbp-10h] BYREF
  ULONGLONG pullResult; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp+48h] BYREF

  v2 = a1[329];
  v3 = -1;
  v23 = 0LL;
  pullResult = 0LL;
  v6 = 1;
  RealTimeClock = 0;
  v21 = 0LL;
  if ( (a1[332] & 1) == 0 && !ExpRealTimeIsUniversal )
    v2 += (__int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
  v8 = guard_dispatch_icall_no_overrides(&v23, a2);
  v9 = RtlULongLongMult(v8 - a1[330], 0x989680uLL, &pullResult);
  Blink = (unsigned int)v9;
  v12 = pullResult % v23;
  v13 = pullResult / v23;
  if ( v9 < 0 )
  {
    v14 = v10 / v23;
    Blink = v23 * (v10 / v23);
    v15 = v10 % v23;
    v12 = 10000000 * v15 % v23;
    v13 = 10000000 * v14 + 10000000 * v15 / v23;
  }
  v16 = (a1[332] & 2) == 0;
  v17 = v13 + v2;
  pullResult = v13 + v2;
  if ( v16 )
  {
    if ( !ExpRealTimeIsUniversal )
      pullResult = v17 - (unsigned __int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
    RtlpTimeToTimeFields((__int64 *)&pullResult, &v21);
    v3 = 1;
    RealTimeClock = HalSetRealTimeClock((__int64)&v21);
    v6 = 0;
  }
  else if ( (qword_140EFEE18 & 4) == 0 )
  {
    v6 = 0;
    RealTimeClock = HalQueryRealTimeClock((__int64)&v21);
    v3 = 2;
    if ( RealTimeClock )
    {
      v3 = 3;
      RealTimeClock = RtlpTimeFieldsToTime((__int64)&v21, (__int64 *)&pullResult);
      if ( RealTimeClock )
      {
        if ( ExpRealTimeIsUniversal )
        {
          v17 = pullResult;
        }
        else
        {
          Blink = (unsigned __int64)PsGetCurrentServerSiloGlobals()[76].Blink;
          v17 = *(_QWORD *)(Blink + 440) + pullResult;
        }
        v3 = 0;
      }
      else
      {
        v17 = pullResult;
      }
    }
  }
  *a2 = v17;
  v18 = guard_dispatch_icall_no_overrides(Blink, v12);
  KeBootTimeInfo = *a2;
  qword_140FC70F8 = v2;
  v19 = a1[332];
  dword_140FC7108 = v18;
  result = RealTimeClock;
  dword_140FC7114 = RealTimeClock;
  qword_140FC7100 = v19;
  dword_140FC7110 = v6;
  dword_140FC7118 = v3;
  return result;
}
