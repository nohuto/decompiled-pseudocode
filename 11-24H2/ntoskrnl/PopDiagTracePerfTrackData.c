/*
 * XREFs of PopDiagTracePerfTrackData @ 0x140A5BC04
 * Callers:
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     PopReadRegKeyValue @ 0x1404AC224 (PopReadRegKeyValue.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopComputeDerivedHiberStats @ 0x140A5BFA4 (PopComputeDerivedHiberStats.c)
 *     PopQpcTimeInMs @ 0x140B6A560 (PopQpcTimeInMs.c)
 */

char __fastcall PopDiagTracePerfTrackData(__int16 a1)
{
  char result; // al
  unsigned __int64 v3; // rsi
  int v4; // ecx
  int v5; // eax
  unsigned __int64 v6; // rax
  __int16 v7; // cx
  int v8; // r8d
  int v9; // ecx
  ULONGLONG v10; // rax
  int v11; // r8d
  unsigned __int64 v12; // rax
  ULONG v13; // r9d
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rax
  __int64 v15; // rdx
  __int128 *v16; // rcx
  const EVENT_DESCRIPTOR *v17; // rdx
  int v18; // eax
  unsigned int v19; // r14d
  unsigned __int64 v20; // rax
  __int16 v21; // cx
  int v22; // r8d
  int v23; // ecx
  ULONGLONG v24; // rax
  int v25; // r8d
  unsigned __int64 v26; // rax
  __int16 v27; // cx
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *v28; // rax
  __int64 v29; // rdx
  __int128 *v30; // rcx
  int v31; // [rsp+38h] [rbp-89h] BYREF
  int v32; // [rsp+3Ch] [rbp-85h] BYREF
  int v33; // [rsp+40h] [rbp-81h] BYREF
  int v34; // [rsp+44h] [rbp-7Dh] BYREF
  int v35; // [rsp+48h] [rbp-79h] BYREF
  __int64 v36; // [rsp+50h] [rbp-71h] BYREF
  int v37; // [rsp+58h] [rbp-69h] BYREF
  int v38; // [rsp+5Ch] [rbp-65h] BYREF
  int v39; // [rsp+60h] [rbp-61h] BYREF
  int v40; // [rsp+64h] [rbp-5Dh] BYREF
  __int128 v41; // [rsp+68h] [rbp-59h] BYREF
  __int128 v42; // [rsp+78h] [rbp-49h] BYREF
  __int64 v43; // [rsp+88h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-29h] BYREF
  int *v45; // [rsp+A8h] [rbp-19h]
  __int64 v46; // [rsp+B0h] [rbp-11h]
  int *v47; // [rsp+B8h] [rbp-9h]
  __int64 v48; // [rsp+C0h] [rbp-1h]
  int *v49; // [rsp+C8h] [rbp+7h]
  __int64 v50; // [rsp+D0h] [rbp+Fh]
  int *v51; // [rsp+D8h] [rbp+17h]
  __int64 v52; // [rsp+E0h] [rbp+1Fh]

  result = 0;
  v36 = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TRANSITIONTIMES);
    if ( result )
    {
      v3 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
      v38 = PopQpcTimeInMs(&qword_140F0B360, &qword_140F0B368);
      v37 = PopQpcTimeInMs(&qword_140F0B350, &qword_140F0B358);
      if ( qword_140F0B348 )
      {
        v36 = 0LL;
        v33 = PopQpcTimeInMs(&v36, &qword_140F0B348);
        v18 = PopQpcTimeInMs(&qword_140F0B328, &qword_140F0B330);
        v17 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PERFTRACK_STANDBY;
        v31 = v33 + v18;
        v13 = 5;
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&qword_140F0B510;
        v45 = &v31;
        v47 = &v33;
        v49 = &v37;
        v51 = &v38;
        v46 = 4LL;
        v48 = 4LL;
        v50 = 4LL;
        v52 = 4LL;
        return EtwWrite(PopDiagHandle, v17, 0LL, v13, &UserData);
      }
      result = dword_140F0B558;
      if ( !dword_140F0B558 )
        return result;
      v4 = qword_140F0B3C0;
      v34 = (4 * dword_140F0B558) & 0x3FFFFF;
      v40 = qword_140F0B3C0;
      v35 = qword_140F0B390 / v3;
      result = qword_140F0B568;
      v31 = qword_140F0B568;
      if ( (a1 & 8) != 0 )
      {
        if ( !PopShutdownButtonPressTime )
          return result;
        v32 = PopQpcTimeInMs(&PopShutdownButtonPressTime, &qword_140F0B308) + v4;
        if ( (int)PopReadRegKeyValue(
                    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",
                    L"LastLogOffEndTimePerfCounter",
                    8uLL,
                    0,
                    &v36) < 0 )
          v5 = 0;
        else
          v5 = PopQpcTimeInMs(&v36, &qword_140F0B3C8);
        v39 = v5;
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v34;
        v46 = 4LL;
        v45 = &v32;
        v48 = 4LL;
        v47 = &v35;
        v49 = &v39;
        v50 = 4LL;
        EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HYBRID_SHUTDOWN, 0LL, 4u, &UserData);
        PopComputeDerivedHiberStats(&qword_140F0B378, v3, &v41);
        LODWORD(v42) = v31;
        v6 = (unsigned __int64)qword_140F0B540 >> 8;
        WORD3(v42) = -1;
        if ( (unsigned __int64)qword_140F0B540 >> 8 > 0x7FFF )
          LOWORD(v6) = 0x7FFF;
        WORD2(v42) = v6 & 0x7FFF;
        if ( (unsigned __int64)qword_140F0B548 >> 8 <= 0xFFFF )
          WORD3(v42) = (unsigned int)qword_140F0B548 >> 8;
        WORD4(v42) = -1;
        if ( 1000 * qword_140F0B3E0 / PopQpcFrequency <= 0xFFFF )
          WORD4(v42) = 1000 * qword_140F0B3E0 / PopQpcFrequency;
        WORD5(v42) = -1;
        if ( qword_140F0B4D0 / v3 <= 0xFFFF )
          WORD5(v42) = qword_140F0B4D0 / v3;
        WORD6(v42) = -1;
        if ( (unsigned int)qword_140F0B3D0 <= 0xFFFF )
          WORD6(v42) = qword_140F0B3D0;
        HIWORD(v42) = -1;
        if ( (unsigned int)qword_140F0B510 <= 0xFFFF )
          HIWORD(v42) = qword_140F0B510;
        v7 = WORD2(v41);
        v8 = HIDWORD(v41);
        HIWORD(v43) = -1;
        if ( DWORD1(v41) > 0x3FF )
          v7 = 1023;
        v9 = v43 & 0xFFFFFC00 | v7 & 0x3FF;
        if ( HIDWORD(v41) > 0x1FF )
          v8 = 511;
        v10 = 1000 * (qword_140F0B460 - qword_140F0B498) / PopQpcFrequency;
        v11 = v9 ^ (v9 ^ (v8 << 10)) & 0x7FC00;
        if ( v10 > 0x1FFF )
          LODWORD(v10) = 0x1FFF;
        LODWORD(v43) = v11 & 0x7FFFF | ((_DWORD)v10 << 19);
        v12 = (unsigned __int64)qword_140F0B520 >> 8;
        if ( (unsigned __int64)qword_140F0B520 >> 8 > 0x7FFF )
          LOWORD(v12) = 0x7FFF;
        WORD2(v43) = v12 & 0x7FFF;
        if ( (unsigned __int64)qword_140F0B528 >> 8 <= 0xFFFF )
          HIWORD(v43) = (unsigned int)qword_140F0B528 >> 8;
        v13 = 6;
        p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
        v15 = 6LL;
        v16 = &v42;
        do
        {
          *(_QWORD *)&p_Reserved[-3].Reserved = v16;
          v16 = (__int128 *)((char *)v16 + 4);
          *(_QWORD *)&p_Reserved[-1].Reserved = 4LL;
          p_Reserved += 4;
          --v15;
        }
        while ( v15 );
        v17 = &POP_ETW_EVENT_PERFTRACK_HYBRID_RESUME;
        return EtwWrite(PopDiagHandle, v17, 0LL, v13, &UserData);
      }
      UserData.Ptr = (ULONGLONG)&v34;
      v45 = &v40;
      *(_QWORD *)&UserData.Size = 4LL;
      v47 = &v35;
      v46 = 4LL;
      v48 = 4LL;
      result = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HIBERNATE, 0LL, 3u, &UserData);
      v19 = qword_140F0B3D0;
      if ( (_DWORD)qword_140F0B3D0 )
      {
        PopComputeDerivedHiberStats(&qword_140F0B378, v3, &v41);
        LODWORD(v42) = v31;
        v20 = (unsigned __int64)qword_140F0B540 >> 8;
        if ( (unsigned __int64)qword_140F0B540 >> 8 > 0x7FFF )
          LOWORD(v20) = 0x7FFF;
        WORD2(v42) = v20 & 0x7FFF | ((a1 & 0xFFE0) << 10);
        WORD3(v42) = (unsigned int)qword_140F0B548 >> 8;
        if ( (unsigned __int64)qword_140F0B548 >> 8 >= 0xFFFF )
          WORD3(v42) = -1;
        WORD4(v42) = 1000 * qword_140F0B3E0 / PopQpcFrequency;
        if ( 1000 * qword_140F0B3E0 / PopQpcFrequency >= 0xFFFF )
          WORD4(v42) = -1;
        WORD5(v42) = qword_140F0B4D0 / v3;
        if ( qword_140F0B4D0 / v3 >= 0xFFFF )
          WORD5(v42) = -1;
        WORD6(v42) = v19;
        if ( v19 >= 0xFFFF )
          WORD6(v42) = -1;
        HIWORD(v42) = qword_140F0B510;
        if ( (unsigned int)qword_140F0B510 >= 0xFFFF )
          HIWORD(v42) = -1;
        v21 = WORD2(v41);
        v22 = HIDWORD(v41);
        if ( DWORD1(v41) > 0x3FF )
          v21 = 1023;
        v23 = v43 & 0xFFFFFC00 | v21 & 0x3FF;
        if ( HIDWORD(v41) > 0x1FF )
          v22 = 511;
        v24 = 1000 * (qword_140F0B460 - qword_140F0B498) / PopQpcFrequency;
        v25 = v23 ^ (v23 ^ (v22 << 10)) & 0x7FC00;
        if ( v24 > 0x1FFF )
          LODWORD(v24) = 0x1FFF;
        LODWORD(v43) = v25 & 0x7FFFF | ((_DWORD)v24 << 19);
        v26 = (unsigned __int64)qword_140F0B520 >> 8;
        if ( (unsigned __int64)qword_140F0B520 >> 8 > 0x7FFF )
          LOWORD(v26) = 0x7FFF;
        if ( PopEnableMinimalHiberFile )
          v27 = 0x8000;
        else
          v27 = 0;
        WORD2(v43) = v27 | v26 & 0x7FFF;
        HIWORD(v43) = (unsigned int)qword_140F0B528 >> 8;
        if ( (unsigned __int64)qword_140F0B528 >> 8 >= 0xFFFF )
          HIWORD(v43) = -1;
        v13 = 6;
        v28 = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
        v29 = 6LL;
        v30 = &v42;
        do
        {
          *(_QWORD *)&v28[-3].Reserved = v30;
          v30 = (__int128 *)((char *)v30 + 4);
          *(_QWORD *)&v28[-1].Reserved = 4LL;
          v28 += 4;
          --v29;
        }
        while ( v29 );
        v17 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PERFTRACK_RESUME_FROM_HIBERNATE;
        return EtwWrite(PopDiagHandle, v17, 0LL, v13, &UserData);
      }
    }
  }
  return result;
}
