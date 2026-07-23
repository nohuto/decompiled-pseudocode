/*
 * XREFs of ExInitializeUtcTimeZoneBias @ 0x1407B626C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeToTimeFields @ 0x140419FA0 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlCutoverTimeToSystemTime @ 0x14077D9B0 (RtlCutoverTimeToSystemTime.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1409B66B0 (RtlpQueryTimeZoneInformationWorker.c)
 *     ExpWriteTimeZoneBias @ 0x140A7A0B8 (ExpWriteTimeZoneBias.c)
 */

__int64 __fastcall ExInitializeUtcTimeZoneBias(PLARGE_INTEGER CurrentSystemTime)
{
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rsi
  int v4; // r14d
  int v5; // ebx
  BOOLEAN v6; // r9
  BOOLEAN v7; // r9
  LARGE_INTEGER v8; // r8
  LARGE_INTEGER v9; // rcx
  LARGE_INTEGER v10; // r11
  LARGE_INTEGER v11; // r9
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // r10d
  bool v16; // sf
  bool v17; // of
  bool v18; // cc
  LONGLONG QuadPart; // rcx
  LARGE_INTEGER SystemTime; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER TimeFields[3]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v22[17]; // [rsp+48h] [rbp-C0h] BYREF
  _TIME_FIELDS CutoverTime; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v24; // [rsp+9Ch] [rbp-6Ch]
  _TIME_FIELDS v25; // [rsp+E0h] [rbp-28h] BYREF
  int v26; // [rsp+F0h] [rbp-18h]

  SystemTime.QuadPart = 0LL;
  memset(TimeFields, 0, sizeof(TimeFields));
  memset_0(v22, 0, 0x1B0uLL);
  if ( !ExpRealTimeIsUniversal )
    return 3221225659LL;
  Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
  result = RtlpQueryTimeZoneInformationWorker(v22, 0x1B0uLL);
  if ( (int)result >= 0 )
  {
    v4 = v22[0] + v26;
    v5 = v22[0] + v24;
    RtlTimeToTimeFields(CurrentSystemTime, (PTIME_FIELDS)&TimeFields[1]);
    if ( CutoverTime.Month
      && v25.Month
      && RtlCutoverTimeToSystemTime(&CutoverTime, TimeFields, CurrentSystemTime, v6)
      && RtlCutoverTimeToSystemTime(&v25, &SystemTime, CurrentSystemTime, v7) )
    {
      v8.QuadPart = SystemTime.QuadPart + 600000000LL * v5;
      SystemTime = v8;
      v9.QuadPart = TimeFields[0].QuadPart + 600000000LL * v4;
      TimeFields[0] = v9;
      if ( v8.QuadPart >= v9.QuadPart )
      {
        v10 = v9;
        v11 = v8;
      }
      else
      {
        v10 = v8;
        v11 = v9;
      }
      v12 = 0;
      v13 = v4;
      if ( v8.QuadPart >= v9.QuadPart )
        v13 = v5;
      LOBYTE(v12) = v8.QuadPart < v9.QuadPart;
      v14 = v12 + 1;
      v15 = 0;
      v17 = __OFSUB__(v8.QuadPart, v9.QuadPart);
      v16 = v8.QuadPart - v9.QuadPart < 0;
      v18 = v8.QuadPart < v9.QuadPart;
      QuadPart = CurrentSystemTime->QuadPart;
      if ( !v18 )
        v5 = v4;
      if ( QuadPart < v10.QuadPart || QuadPart >= v11.QuadPart )
      {
        v13 = v5;
        LOBYTE(v15) = v16 == v17;
        v14 = v15 + 1;
      }
      else
      {
        v5 = v13;
      }
      LODWORD(Blink[27].Flink) = v14;
      HIDWORD(Blink[27].Flink) = v5;
      Blink[27].Blink = (struct _LIST_ENTRY *)(600000000LL * v13);
      *(_DWORD *)(MmWriteableSharedUserData + 604) = 0;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExpWriteTimeZoneBias)(
        &Blink[27].Blink,
        60 * v13,
        (LARGE_INTEGER)v8.QuadPart,
        (LARGE_INTEGER)v11.QuadPart);
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
