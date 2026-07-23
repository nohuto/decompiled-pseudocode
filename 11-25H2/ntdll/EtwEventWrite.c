/*
 * XREFs of EtwEventWrite @ 0x18008E470
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     EtwpWriteToPrivateBuffers @ 0x18008EE70 (EtwpWriteToPrivateBuffers.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

ULONG __cdecl EtwEventWrite(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned int v4; // edi
  int v7; // r14d
  ULONG v8; // r8d
  EVENT_DESCRIPTOR v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // r11
  unsigned __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int8 v16; // cl
  char v17; // si
  unsigned __int8 v18; // al
  _GUID ActivityId; // xmm0
  NTSTATUS v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rdx
  _OWORD Fields[4]; // [rsp+50h] [rbp-B0h] BYREF
  _GUID v24; // [rsp+90h] [rbp-70h]
  __int128 v25; // [rsp+A0h] [rbp-60h]
  __int128 v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-40h]
  _OWORD v28[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v29; // [rsp+150h] [rbp+50h]

  v4 = 0;
  v27 = 0LL;
  v29 = 0LL;
  v7 = (int)EventDescriptor;
  v8 = 0;
  memset(Fields, 0, sizeof(Fields));
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  memset(v28, 0, sizeof(v28));
  if ( EventDescriptor )
  {
    v9 = *EventDescriptor;
    v10 = ((unsigned int)RegHandle >> 1) & 7;
    *(EVENT_DESCRIPTOR *)((char *)&Fields[2] + 8) = v9;
    v11 = qword_1801D02A0[v10];
    if ( ((v11 != 0 && (unsigned int)RegHandle >> 4 < dword_18019C7E0[v10]) & (unsigned __int8)RegHandle) == 0 )
      return 6;
    v13 = (unsigned __int64)(unsigned int)RegHandle >> 4;
    v14 = 0LL;
    if ( (*(_QWORD *)(v11 + 8 * v13) & 1) == 0 )
      v14 = *(_QWORD *)(v11 + 8 * v13);
    if ( !v14 || WORD2(RegHandle) != *(_WORD *)(v14 + 84) )
      return 6;
    v15 = *(_QWORD *)&Fields[3];
    if ( *(_BYTE *)(v14 + 236)
      && ((v16 = *(_BYTE *)(v14 + 237), BYTE12(Fields[2]) <= v16) || !v16)
      && ((*(_BYTE *)(v14 + 232) & 0x40) != 0 && !*(_QWORD *)&Fields[3]
       || (*(_QWORD *)&Fields[3] & *(_QWORD *)(v14 + 224)) != 0LL
       && (*(_QWORD *)&Fields[3] & *(_QWORD *)(v14 + 216)) == *(_QWORD *)(v14 + 216)) )
    {
      v17 = 1;
      v8 = EtwpWriteToPrivateBuffers(v14, v7, 0, 0, 0, 0LL, 0LL, UserDataCount, (__int64)UserData, (__int64)v28);
      if ( v8 )
      {
LABEL_25:
        if ( (_DWORD)v29 )
        {
          do
          {
            v21 = (__int64 *)&v28[2 * v4];
            v22 = *v21;
            if ( v8 )
              *(_WORD *)(v21[1] + 2) = -16371;
            ++v4;
            _InterlockedDecrement((volatile signed __int32 *)(v21[2] + 12));
            _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v22 + 20) + 8));
          }
          while ( v4 < (unsigned int)v29 );
        }
        return v8;
      }
      v15 = *(_QWORD *)&Fields[3];
    }
    else
    {
      v17 = 0;
    }
    if ( *(_BYTE *)(v14 + 116) )
    {
      v18 = *(_BYTE *)(v14 + 117);
      if ( (BYTE12(Fields[2]) <= v18 || !v18)
        && ((*(_BYTE *)(v14 + 112) & 0x40) != 0 && !v15
         || (v15 & *(_QWORD *)(v14 + 104)) != 0 && (v15 & *(_QWORD *)(v14 + 96)) == *(_QWORD *)(v14 + 96)) )
      {
        DWORD1(Fields[0]) = 0;
        DWORD1(v25) = UserDataCount;
        *((_QWORD *)&v25 + 1) = UserData;
        ActivityId = NtCurrentTeb()->ActivityId;
        LOBYTE(v25) = 0;
        WORD1(v25) = 0;
        v24 = ActivityId;
        LODWORD(v27) = 0;
        v20 = NtTraceEvent(*(HANDLE *)(v14 + 88), 0x300u, 0x78u, Fields);
        if ( v20 )
          v8 = RtlNtStatusToDosError(v20);
        else
          v8 = 0;
      }
    }
    if ( !v17 )
      return v8;
    goto LABEL_25;
  }
  return 87;
}
