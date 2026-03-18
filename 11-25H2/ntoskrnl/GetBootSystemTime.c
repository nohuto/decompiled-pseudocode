/*
 * XREFs of GetBootSystemTime @ 0x140BF9A8C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     HalSetRealTimeClock @ 0x14042D240 (HalSetRealTimeClock.c)
 *     HalQueryRealTimeClock @ 0x14042D740 (HalQueryRealTimeClock.c)
 *     RtlpTimeToTimeFields @ 0x14042E040 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x14042E5F8 (RtlpTimeFieldsToTime.c)
 *     RtlULongLongMult @ 0x14043A9F0 (RtlULongLongMult.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  ULONGLONG v12; // r10
  bool v13; // zf
  ULONGLONG v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  __int64 result; // rax
  __int128 v18; // [rsp+20h] [rbp-10h] BYREF
  ULONGLONG pullResult; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp+48h] BYREF

  v2 = a1[329];
  v3 = -1;
  v20 = 0LL;
  pullResult = 0LL;
  v6 = 1;
  RealTimeClock = 0;
  v18 = 0LL;
  if ( (a1[332] & 1) == 0 && !ExpRealTimeIsUniversal )
    v2 += (__int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
  v8 = guard_dispatch_icall_no_overrides(&v20);
  v9 = RtlULongLongMult(v8 - a1[330], 0x989680uLL, &pullResult);
  Blink = (unsigned int)v9;
  v12 = pullResult / v20;
  if ( v9 < 0 )
  {
    Blink = v20 * (v10 / v20);
    v12 = 10000000 * (v10 / v20) + 10000000 * (v10 % v20) / v20;
  }
  v13 = (a1[332] & 2) == 0;
  v14 = v12 + v2;
  pullResult = v12 + v2;
  if ( v13 )
  {
    if ( !ExpRealTimeIsUniversal )
      pullResult = v14 - (unsigned __int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
    RtlpTimeToTimeFields((__int64 *)&pullResult, &v18);
    v3 = 1;
    RealTimeClock = HalSetRealTimeClock((__int64)&v18);
    v6 = 0;
  }
  else if ( (qword_140EFE818 & 4) == 0 )
  {
    v6 = 0;
    RealTimeClock = HalQueryRealTimeClock((__int64)&v18);
    v3 = 2;
    if ( RealTimeClock )
    {
      v3 = 3;
      RealTimeClock = RtlpTimeFieldsToTime((__int64)&v18, (__int64 *)&pullResult);
      if ( RealTimeClock )
      {
        if ( ExpRealTimeIsUniversal )
        {
          v14 = pullResult;
        }
        else
        {
          Blink = (unsigned __int64)PsGetCurrentServerSiloGlobals()[76].Blink;
          v14 = *(_QWORD *)(Blink + 440) + pullResult;
        }
        v3 = 0;
      }
      else
      {
        v14 = pullResult;
      }
    }
  }
  *a2 = v14;
  v15 = guard_dispatch_icall_no_overrides(Blink);
  KeBootTimeInfo = *a2;
  qword_140FC60C8 = v2;
  v16 = a1[332];
  dword_140FC60D8 = v15;
  result = RealTimeClock;
  dword_140FC60E4 = RealTimeClock;
  qword_140FC60D0 = v16;
  dword_140FC60E0 = v6;
  dword_140FC60E8 = v3;
  return result;
}
