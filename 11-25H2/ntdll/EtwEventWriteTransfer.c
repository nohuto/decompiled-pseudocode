/*
 * XREFs of EtwEventWriteTransfer @ 0x18008E770
 * Callers:
 *     RtlpHpEnvCompactionSchedule @ 0x18000B720 (RtlpHpEnvCompactionSchedule.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x180011E60 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x180031FA0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006727C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlCapabilityCheck @ 0x18008D9E0 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     EtwpWriteToPrivateBuffers @ 0x18008EE70 (EtwpWriteToPrivateBuffers.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall EtwEventWriteTransfer(__int64 a1, __int128 *a2, _GUID *a3, __int128 *a4, int a5, __int64 a6)
{
  unsigned int v6; // edi
  int v9; // r12d
  ULONG v10; // r8d
  __int128 v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // r11
  unsigned __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned __int8 v18; // cl
  char v19; // si
  unsigned __int8 v20; // al
  _GUID ActivityId; // xmm0
  NTSTATUS v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int128 v25; // xmm0
  _OWORD v26[4]; // [rsp+58h] [rbp-A8h] BYREF
  _GUID v27; // [rsp+98h] [rbp-68h]
  __int128 v28; // [rsp+A8h] [rbp-58h]
  __int128 v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  _OWORD v31[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v32; // [rsp+150h] [rbp+50h]

  v6 = 0;
  v30 = 0LL;
  v32 = 0LL;
  v9 = (int)a2;
  v10 = 0;
  memset(v26, 0, sizeof(v26));
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  memset(v31, 0, sizeof(v31));
  if ( a2 )
  {
    v11 = *a2;
    v12 = ((unsigned int)a1 >> 1) & 7;
    *(_OWORD *)((char *)&v26[2] + 8) = v11;
    v13 = qword_1801D02A0[v12];
    if ( ((v13 != 0 && (unsigned int)a1 >> 4 < dword_18019C7E0[v12]) & (unsigned __int8)a1) == 0 )
      return 6LL;
    v15 = (unsigned __int64)(unsigned int)a1 >> 4;
    v16 = 0LL;
    if ( (*(_QWORD *)(v13 + 8 * v15) & 1) == 0 )
      v16 = *(_QWORD *)(v13 + 8 * v15);
    if ( !v16 || WORD2(a1) != *(_WORD *)(v16 + 84) )
      return 6LL;
    v17 = *(_QWORD *)&v26[3];
    if ( *(_BYTE *)(v16 + 236)
      && ((v18 = *(_BYTE *)(v16 + 237), BYTE12(v26[2]) <= v18) || !v18)
      && ((*(_BYTE *)(v16 + 232) & 0x40) != 0 && !*(_QWORD *)&v26[3]
       || (*(_QWORD *)&v26[3] & *(_QWORD *)(v16 + 224)) != 0LL
       && (*(_QWORD *)&v26[3] & *(_QWORD *)(v16 + 216)) == *(_QWORD *)(v16 + 216)) )
    {
      v19 = 1;
      v10 = EtwpWriteToPrivateBuffers(v16, v9, 0, 0, 0, (__int64)a3, (__int64)a4, a5, a6, (__int64)v31);
      if ( v10 )
      {
LABEL_29:
        if ( (_DWORD)v32 )
        {
          do
          {
            v23 = (__int64 *)&v31[2 * v6];
            v24 = *v23;
            if ( v10 )
              *(_WORD *)(v23[1] + 2) = -16371;
            ++v6;
            _InterlockedDecrement((volatile signed __int32 *)(v23[2] + 12));
            _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v24 + 20) + 8));
          }
          while ( v6 < (unsigned int)v32 );
        }
        return v10;
      }
      v17 = *(_QWORD *)&v26[3];
    }
    else
    {
      v19 = 0;
    }
    if ( *(_BYTE *)(v16 + 116) )
    {
      v20 = *(_BYTE *)(v16 + 117);
      if ( (BYTE12(v26[2]) <= v20 || !v20)
        && ((*(_BYTE *)(v16 + 112) & 0x40) != 0 && !v17
         || (v17 & *(_QWORD *)(v16 + 104)) != 0 && (v17 & *(_QWORD *)(v16 + 96)) == *(_QWORD *)(v16 + 96)) )
      {
        *((_QWORD *)&v28 + 1) = a6;
        DWORD1(v26[0]) = 0;
        DWORD1(v28) = a5;
        if ( a3 )
          ActivityId = *a3;
        else
          ActivityId = NtCurrentTeb()->ActivityId;
        LOBYTE(v28) = 0;
        v27 = ActivityId;
        if ( a4 )
        {
          v25 = *a4;
          LOBYTE(v28) = 1;
          v29 = v25;
        }
        WORD1(v28) = 0;
        LODWORD(v30) = 0;
        v22 = NtTraceEvent(*(_QWORD *)(v16 + 88), 768LL, 120LL, v26);
        if ( v22 )
          v10 = RtlNtStatusToDosError(v22);
        else
          v10 = 0;
      }
    }
    if ( !v19 )
      return v10;
    goto LABEL_29;
  }
  return 87LL;
}
