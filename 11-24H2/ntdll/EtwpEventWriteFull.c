/*
 * XREFs of EtwpEventWriteFull @ 0x18003B0D0
 * Callers:
 *     EtwEventWriteFull @ 0x180039820 (EtwEventWriteFull.c)
 *     SbSelectProcedure @ 0x1800A9EF0 (SbSelectProcedure.c)
 *     SbpTraceContextUpdate @ 0x1800B8ED4 (SbpTraceContextUpdate.c)
 *     EtwEventWriteEndScenario @ 0x1800CF420 (EtwEventWriteEndScenario.c)
 *     EtwEventWriteStartScenario @ 0x1800CF560 (EtwEventWriteStartScenario.c)
 *     EtwEventWriteEx @ 0x1800F0710 (EtwEventWriteEx.c)
 *     EvtIntReportEventWorker @ 0x1800F4050 (EvtIntReportEventWorker.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800F980C (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x180131698 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x180131740 (LdrpAppxEtwIntegrityFailure.c)
 *     RtlpLogSetLastWin32ErrorEvent @ 0x1801465A4 (RtlpLogSetLastWin32ErrorEvent.c)
 *     RtlpHpStackDbLogStackDbEnd @ 0x18014B9C8 (RtlpHpStackDbLogStackDbEnd.c)
 *     RtlpHpStackDbLogStackDbSnapshot @ 0x18014BA60 (RtlpHpStackDbLogStackDbSnapshot.c)
 *     LdrpLogFatalUserCallbackException @ 0x1801602F0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001C620 (RtlNtStatusToDosError.c)
 *     EtwpWriteToPrivateBuffers @ 0x18003B480 (EtwpWriteToPrivateBuffers.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        _GUID *a6,
        __int128 *a7,
        int a8,
        __int64 a9)
{
  unsigned int v9; // edi
  int v10; // r12d
  ULONG v11; // r8d
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // r11
  unsigned __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int8 v19; // cl
  char v20; // si
  unsigned __int8 v21; // al
  _GUID ActivityId; // xmm0
  NTSTATUS v23; // eax
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int128 v26; // xmm0
  _OWORD v29[4]; // [rsp+70h] [rbp-90h] BYREF
  _GUID v30; // [rsp+B0h] [rbp-50h]
  __int128 v31; // [rsp+C0h] [rbp-40h]
  __int128 v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-20h]
  _OWORD v34[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v35; // [rsp+170h] [rbp+70h]

  v9 = 0;
  v10 = (int)a2;
  v11 = 0;
  v33 = 0LL;
  v35 = 0LL;
  memset(v29, 0, sizeof(v29));
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  memset(v34, 0, sizeof(v34));
  if ( a2 )
  {
    v12 = *a2;
    v13 = ((unsigned int)a1 >> 1) & 7;
    *(_OWORD *)((char *)&v29[2] + 8) = v12;
    v14 = qword_1801CE2A0[v13];
    if ( ((v14 != 0 && (unsigned int)a1 >> 4 < dword_18019A6E0[v13]) & (unsigned __int8)a1) == 0 )
      return 6LL;
    v16 = (unsigned __int64)(unsigned int)a1 >> 4;
    v17 = 0LL;
    if ( (*(_QWORD *)(v14 + 8 * v16) & 1) == 0 )
      v17 = *(_QWORD *)(v14 + 8 * v16);
    if ( !v17 || WORD2(a1) != *(_WORD *)(v17 + 84) )
      return 6LL;
    v18 = *(_QWORD *)&v29[3];
    if ( *(_BYTE *)(v17 + 236)
      && ((v19 = *(_BYTE *)(v17 + 237), BYTE12(v29[2]) <= v19) || !v19)
      && ((*(_BYTE *)(v17 + 232) & 0x40) != 0 && !*(_QWORD *)&v29[3]
       || (*(_QWORD *)&v29[3] & *(_QWORD *)(v17 + 224)) != 0LL
       && (*(_QWORD *)&v29[3] & *(_QWORD *)(v17 + 216)) == *(_QWORD *)(v17 + 216)) )
    {
      v20 = 1;
      v11 = EtwpWriteToPrivateBuffers(v17, v10, a5, HIDWORD(a3), 0, (__int64)a6, (__int64)a7, a8, a9, (__int64)v34);
      if ( v11 )
      {
LABEL_29:
        if ( (_DWORD)v35 )
        {
          do
          {
            v24 = (__int64 *)&v34[2 * v9];
            v25 = *v24;
            if ( v11 )
              *(_WORD *)(v24[1] + 2) = -16371;
            ++v9;
            _InterlockedDecrement((volatile signed __int32 *)(v24[2] + 12));
            _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v25 + 20) + 8));
          }
          while ( v9 < (unsigned int)v35 );
        }
        return v11;
      }
      v18 = *(_QWORD *)&v29[3];
    }
    else
    {
      v20 = 0;
    }
    if ( *(_BYTE *)(v17 + 116) )
    {
      v21 = *(_BYTE *)(v17 + 117);
      if ( (BYTE12(v29[2]) <= v21 || !v21)
        && ((*(_BYTE *)(v17 + 112) & 0x40) != 0 && !v18
         || (v18 & *(_QWORD *)(v17 + 104)) != 0 && (v18 & *(_QWORD *)(v17 + 96)) == *(_QWORD *)(v17 + 96)) )
      {
        *((_QWORD *)&v31 + 1) = a9;
        WORD2(v29[0]) = 0;
        WORD3(v29[0]) = a5;
        DWORD1(v31) = a8;
        if ( a6 )
          ActivityId = *a6;
        else
          ActivityId = NtCurrentTeb()->ActivityId;
        LOBYTE(v31) = 0;
        v30 = ActivityId;
        if ( a7 )
        {
          v26 = *a7;
          LOBYTE(v31) = 1;
          v32 = v26;
        }
        WORD1(v31) = a3;
        LODWORD(v33) = a4;
        v23 = NtTraceEvent(*(_QWORD *)(v17 + 88), 768LL, 120LL, v29);
        if ( v23 )
          v11 = RtlNtStatusToDosError(v23);
        else
          v11 = 0;
      }
    }
    if ( !v20 )
      return v11;
    goto LABEL_29;
  }
  return 87LL;
}
