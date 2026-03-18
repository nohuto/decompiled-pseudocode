/*
 * XREFs of GetBootSystemTime @ 0x140C0AA8C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     HalSetRealTimeClock @ 0x140425310 (HalSetRealTimeClock.c)
 *     HalQueryRealTimeClock @ 0x140425810 (HalQueryRealTimeClock.c)
 *     RtlpTimeToTimeFields @ 0x140426110 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x1404266C8 (RtlpTimeFieldsToTime.c)
 *     RtlULongLongMult @ 0x140437830 (RtlULongLongMult.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall GetBootSystemTime(__int64 *a1, ULONGLONG *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // r15d
  int v8; // esi
  unsigned __int8 RealTimeClock; // r14
  __int64 v10; // rax
  NTSTATUS v11; // eax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 Blink; // rcx
  ULONGLONG v15; // rdx
  ULONGLONG v16; // r10
  bool v17; // zf
  ULONGLONG v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  __int64 result; // rax
  __int128 v22; // [rsp+20h] [rbp-10h] BYREF
  ULONGLONG pullResult; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp+48h] BYREF

  v4 = a1[329];
  v5 = -1;
  v24 = 0LL;
  pullResult = 0LL;
  v8 = 1;
  RealTimeClock = 0;
  v22 = 0LL;
  if ( (a1[332] & 1) == 0 && !ExpRealTimeIsUniversal )
    v4 += (__int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
  v10 = guard_dispatch_icall_no_overrides(&v24, a2, a3, a4);
  v11 = RtlULongLongMult(v10 - a1[330], 0x989680uLL, &pullResult);
  Blink = (unsigned int)v11;
  v15 = pullResult % v24;
  v16 = pullResult / v24;
  if ( v11 < 0 )
  {
    v12 = v13 / v24;
    Blink = v24 * (v13 / v24);
    v13 %= v24;
    v15 = 10000000 * v13 % v24;
    v16 = 10000000 * v12 + 10000000 * v13 / v24;
  }
  v17 = (a1[332] & 2) == 0;
  v18 = v16 + v4;
  pullResult = v16 + v4;
  if ( v17 )
  {
    if ( !ExpRealTimeIsUniversal )
      pullResult = v18 - (unsigned __int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
    RtlpTimeToTimeFields((__int64 *)&pullResult, &v22);
    v5 = 1;
    RealTimeClock = HalSetRealTimeClock((__int64)&v22);
    v8 = 0;
  }
  else if ( (qword_140EFEAF8 & 4) == 0 )
  {
    v8 = 0;
    RealTimeClock = HalQueryRealTimeClock((__int64)&v22);
    v5 = 2;
    if ( RealTimeClock )
    {
      v5 = 3;
      RealTimeClock = RtlpTimeFieldsToTime((__int64)&v22, (__int64 *)&pullResult);
      if ( RealTimeClock )
      {
        if ( ExpRealTimeIsUniversal )
        {
          v18 = pullResult;
        }
        else
        {
          Blink = (unsigned __int64)PsGetCurrentServerSiloGlobals()[76].Blink;
          v18 = *(_QWORD *)(Blink + 440) + pullResult;
        }
        v5 = 0;
      }
      else
      {
        v18 = pullResult;
      }
    }
  }
  *a2 = v18;
  v19 = guard_dispatch_icall_no_overrides(Blink, v15, v12, v13);
  KeBootTimeInfo = *a2;
  qword_140FC60C0 = v4;
  v20 = a1[332];
  dword_140FC60D0 = v19;
  result = RealTimeClock;
  dword_140FC60DC = RealTimeClock;
  qword_140FC60C8 = v20;
  dword_140FC60D8 = v8;
  dword_140FC60E0 = v5;
  return result;
}
