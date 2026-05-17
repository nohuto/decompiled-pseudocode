/*
 * XREFs of RtlCapabilityCheck @ 0x180039FF0
 * Callers:
 *     RtlCapabilityCheckForSingleSessionSku @ 0x180113140 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x180039A70 (RtlCheckTokenMembershipEx.c)
 *     RtlQueryPerformanceCounter @ 0x18003A620 (RtlQueryPerformanceCounter.c)
 *     RtlRunOnceBeginInitialize @ 0x18003A720 (RtlRunOnceBeginInitialize.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18003A820 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlIsMultiSessionSku @ 0x18003AA40 (RtlIsMultiSessionSku.c)
 *     EtwEventWriteTransfer @ 0x18003AD80 (EtwEventWriteTransfer.c)
 *     RtlCheckTokenCapability @ 0x18003BE90 (RtlCheckTokenCapability.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18003C348 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlReportCriticalFailure @ 0x180098B40 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x180098C20 (RtlRunOnceComplete.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180171498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall RtlCapabilityCheck(void *a1, __int64 a2, char *a3)
{
  char v3; // r13
  char v5; // r14
  char v6; // di
  int v9; // ebx
  size_t v10; // rax
  unsigned int v11; // r13d
  char v12; // di
  int v13; // eax
  char v16; // cl
  int v17; // [rsp+38h] [rbp-D0h] BYREF
  char v18; // [rsp+3Ch] [rbp-CCh] BYREF
  char v19; // [rsp+3Dh] [rbp-CBh] BYREF
  unsigned int v20; // [rsp+40h] [rbp-C8h]
  int v21; // [rsp+44h] [rbp-C4h]
  __int16 v22; // [rsp+48h] [rbp-C0h] BYREF
  char v23; // [rsp+4Ah] [rbp-BEh] BYREF
  char v24; // [rsp+4Bh] [rbp-BDh] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v31[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v32; // [rsp+88h] [rbp-80h]
  __int128 v33; // [rsp+90h] [rbp-78h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-68h]
  __int128 v35; // [rsp+B0h] [rbp-58h]
  __int128 v36; // [rsp+C0h] [rbp-48h] BYREF
  void *v37; // [rsp+D8h] [rbp-30h] BYREF
  int v38; // [rsp+E0h] [rbp-28h]
  int v39; // [rsp+E4h] [rbp-24h]
  void *v40; // [rsp+E8h] [rbp-20h]
  int v41; // [rsp+F0h] [rbp-18h]
  int v42; // [rsp+F4h] [rbp-14h]
  __int64 *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  __int16 *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  char *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  char *v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  char *v51; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  __int64 v53; // [rsp+148h] [rbp+40h] BYREF
  int v54; // [rsp+150h] [rbp+48h]
  int v55; // [rsp+154h] [rbp+4Ch]
  unsigned __int8 v56[48]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v57[48]; // [rsp+188h] [rbp+80h] BYREF

  v3 = 0;
  v25 = 0;
  v5 = 0;
  *(_QWORD *)&v35 = 0LL;
  v6 = 0;
  DWORD2(v35) = 0;
  Handle = 0LL;
  v20 = 0;
  LOWORD(v21) = 1280;
  v29 = 0LL;
  v18 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v17 = 0;
  v36 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  RtlQueryPerformanceCounter(&v28);
  if ( !a2 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_28;
  }
  *a3 = 0;
  v9 = RtlDeriveCapabilitySidsFromName(a2, v56, v57);
  if ( v9 < 0 )
    goto LABEL_28;
  if ( !(unsigned __int8)RtlIsMultiSessionSku() )
    goto LABEL_14;
  DWORD1(v29) = 0;
  *((_QWORD *)&v29 + 1) = L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities";
  v10 = 2 * wcslen(L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities");
  LODWORD(v33) = 48;
  *((_QWORD *)&v33 + 1) = 0LL;
  DWORD2(v34) = 64;
  if ( v10 >= 0xFFFE )
    LOWORD(v10) = -4;
  LOWORD(v29) = v10;
  WORD1(v29) = v10 + 2;
  *(_QWORD *)&v34 = &v29;
  v35 = 0LL;
  if ( (int)NtOpenKey(&Handle, 0x80000000LL, &v33) < 0 || (int)NtQueryValueKey(Handle, a2, 2LL, &v36, 16, &v25) < 0 )
  {
LABEL_14:
    v9 = RtlCheckTokenMembershipEx(a1, v56, 2, (_BYTE *)&v17 + 3);
    if ( v9 < 0 )
      goto LABEL_28;
    if ( HIBYTE(v17) )
      goto LABEL_22;
    v53 = 0x500000000000101LL;
    v54 = 18;
    v9 = RtlCheckTokenMembershipEx(a1, (unsigned __int8 *)&v53, 0, &v17);
    if ( v9 >= 0 )
    {
      v6 = v17;
      if ( !(_BYTE)v17 )
      {
        v11 = v20;
        HIWORD(v53) = v21;
        LOWORD(v53) = 513;
        *(_DWORD *)((char *)&v53 + 2) = v20;
        v54 = 32;
        v55 = 544;
        v9 = RtlCheckTokenMembershipEx(a1, (unsigned __int8 *)&v53, 0, (_BYTE *)&v17 + 1);
        if ( v9 < 0 )
        {
          v3 = 0;
          goto LABEL_28;
        }
        v5 = BYTE1(v17);
        if ( !BYTE1(v17) )
        {
          HIWORD(v53) = v21;
          LOWORD(v53) = 257;
          *(_DWORD *)((char *)&v53 + 2) = v11;
          v54 = 4;
          v3 = 0;
          v9 = RtlCheckTokenMembershipEx(a1, (unsigned __int8 *)&v53, 2, (_BYTE *)&v17 + 2);
          if ( v9 < 0 )
            goto LABEL_28;
          if ( BYTE2(v17) )
            goto LABEL_22;
          goto LABEL_24;
        }
        v3 = 0;
      }
LABEL_22:
      v9 = RtlCheckTokenCapability(a1, v57, &v18);
      if ( v9 < 0 )
        goto LABEL_28;
      *a3 = v18;
      goto LABEL_24;
    }
LABEL_49:
    v6 = v17;
    goto LABEL_28;
  }
  v53 = 0x500000000000101LL;
  v54 = 18;
  v3 = 1;
  v9 = RtlCheckTokenMembershipEx(a1, (unsigned __int8 *)&v53, 0, &v17);
  if ( v9 < 0 )
    goto LABEL_49;
  v6 = v17;
  if ( (_BYTE)v17 )
    goto LABEL_22;
  *(_DWORD *)((char *)&v53 + 2) = v20;
  HIWORD(v53) = v21;
  LOWORD(v53) = 513;
  v54 = 32;
  v55 = 544;
  v9 = RtlCheckTokenMembershipEx(a1, (unsigned __int8 *)&v53, 0, (_BYTE *)&v17 + 1);
  if ( v9 < 0 )
    goto LABEL_28;
  v5 = BYTE1(v17);
  if ( BYTE1(v17) )
    goto LABEL_22;
LABEL_24:
  if ( *a3 && !v5 && !v6 )
    v9 = RtlpCapabilityCheckSystemCapability(a1, a2, a3);
LABEL_28:
  if ( Handle )
    NtClose(Handle);
  RtlQueryPerformanceCounter(&v27);
  if ( !v6 )
  {
    v12 = *a3;
    if ( NtCurrentPeb()->ProcessHeap )
    {
      v19 = 0;
      v13 = RtlRunOnceBeginInitialize(&RtlpCapChkTelemetryRunOnceCtx, 0LL, 0LL);
      if ( v13 < 0 )
      {
        v16 = 0;
      }
      else
      {
        if ( v13 != 259
          || (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CC638),
              RtlpPerformanceCounterFrequency = MEMORY[0x7FFE0300],
              v13 = RtlRunOnceComplete(&RtlpCapChkTelemetryRunOnceCtx, 0LL, 0LL),
              v13 >= 0) )
        {
LABEL_34:
          if ( v28
            && v27
            && RtlpPerformanceCounterFrequency
            && _InterlockedExchangeAdd16(&TelemetryEventThrottle, 0xFFFFu) == 1 )
          {
            if ( (unsigned int)dword_1801CC638 > 5
              && (qword_1801CC648 & 0x200000000000LL) != 0
              && (qword_1801CC650 & 0x200000000000LL) == qword_1801CC650 )
            {
              v30 = 1000000 * (v27 - v28) / RtlpPerformanceCounterFrequency;
              v32 = 0x200000000000LL;
              v43 = &v30;
              v22 = *(_WORD *)((char *)&v17 + 1);
              v44 = 8LL;
              v45 = &v22;
              v47 = (char *)&v22 + 1;
              v49 = &v23;
              v51 = &v24;
              v31[1] = 5;
              v37 = off_1801CC640;
              v46 = 1LL;
              v48 = 1LL;
              v23 = v3;
              v50 = 1LL;
              v24 = v12;
              v52 = 1LL;
              v31[0] = 184549376;
              v38 = *(unsigned __int16 *)off_1801CC640;
              v40 = &unk_1801A228C;
              v39 = 2;
              v41 = 105;
              v42 = 1;
              v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
              EtwEventWriteTransfer(qword_1801CC658, (unsigned int)v31, 0, 0, 7, (__int64)&v37);
            }
            TelemetryEventThrottle = 100;
          }
          return (unsigned int)v9;
        }
        v16 = 1;
      }
      v19 = v16;
      RtlReportCriticalFailure((unsigned int)v13, &v19, 1LL);
      goto LABEL_34;
    }
  }
  return (unsigned int)v9;
}
