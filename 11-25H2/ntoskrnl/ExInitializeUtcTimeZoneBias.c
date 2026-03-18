/*
 * XREFs of ExInitializeUtcTimeZoneBias @ 0x1407A697C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeToTimeFields @ 0x14042E020 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlCutoverTimeToSystemTime @ 0x14076E824 (RtlCutoverTimeToSystemTime.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140992AEC (RtlpQueryTimeZoneInformationWorker.c)
 *     ExpWriteTimeZoneBias @ 0x1409942B0 (ExpWriteTimeZoneBias.c)
 */

__int64 __fastcall ExInitializeUtcTimeZoneBias(PLARGE_INTEGER a1)
{
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rsi
  int v4; // r14d
  int v5; // ebx
  LARGE_INTEGER v6; // r8
  LARGE_INTEGER v7; // rcx
  LARGE_INTEGER v8; // r11
  LARGE_INTEGER v9; // r9
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // r10d
  bool v14; // sf
  bool v15; // of
  bool v16; // cc
  LONGLONG QuadPart; // rcx
  LARGE_INTEGER Time; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER TimeFields[3]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v20[17]; // [rsp+48h] [rbp-C0h] BYREF
  TIME_FIELDS v21; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v22; // [rsp+9Ch] [rbp-6Ch]
  TIME_FIELDS v23; // [rsp+E0h] [rbp-28h] BYREF
  int v24; // [rsp+F0h] [rbp-18h]

  Time.QuadPart = 0LL;
  memset(TimeFields, 0, sizeof(TimeFields));
  memset_0(v20, 0, 0x1B0uLL);
  if ( !ExpRealTimeIsUniversal )
    return 3221225659LL;
  Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
  result = RtlpQueryTimeZoneInformationWorker(v20, 0x1B0uLL);
  if ( (int)result >= 0 )
  {
    v4 = v20[0] + v24;
    v5 = v20[0] + v22;
    RtlTimeToTimeFields(a1, (PTIME_FIELDS)&TimeFields[1]);
    if ( v21.Month
      && v23.Month
      && RtlCutoverTimeToSystemTime(&v21, TimeFields, a1)
      && RtlCutoverTimeToSystemTime(&v23, &Time, a1) )
    {
      v6.QuadPart = Time.QuadPart + 600000000LL * v5;
      Time = v6;
      v7.QuadPart = TimeFields[0].QuadPart + 600000000LL * v4;
      TimeFields[0] = v7;
      if ( v6.QuadPart >= v7.QuadPart )
      {
        v8 = v7;
        v9 = v6;
      }
      else
      {
        v8 = v6;
        v9 = v7;
      }
      v10 = 0;
      v11 = v4;
      if ( v6.QuadPart >= v7.QuadPart )
        v11 = v5;
      LOBYTE(v10) = v6.QuadPart < v7.QuadPart;
      v12 = v10 + 1;
      v13 = 0;
      v15 = __OFSUB__(v6.QuadPart, v7.QuadPart);
      v14 = v6.QuadPart - v7.QuadPart < 0;
      v16 = v6.QuadPart < v7.QuadPart;
      QuadPart = a1->QuadPart;
      if ( !v16 )
        v5 = v4;
      if ( QuadPart < v8.QuadPart || QuadPart >= v9.QuadPart )
      {
        v11 = v5;
        LOBYTE(v13) = v14 == v15;
        v12 = v13 + 1;
      }
      else
      {
        v5 = v11;
      }
      LODWORD(Blink[27].Flink) = v12;
      HIDWORD(Blink[27].Flink) = v5;
      Blink[27].Blink = (struct _LIST_ENTRY *)(600000000LL * v11);
      *(_DWORD *)(MmWriteableSharedUserData + 604) = 0;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExpWriteTimeZoneBias)(
        &Blink[27].Blink,
        60 * v11,
        (LARGE_INTEGER)v6.QuadPart,
        (LARGE_INTEGER)v9.QuadPart);
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
