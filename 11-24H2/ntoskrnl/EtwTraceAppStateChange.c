/*
 * XREFs of EtwTraceAppStateChange @ 0x14094C00C
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x1409394B0 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PsQueryStatisticsProcess @ 0x1408EC910 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x1408ECB30 (ObGetProcessHandleCount.c)
 *     EtwpQueryTokenPackageInfo @ 0x14094B90C (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14094BC44 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x14094BCC0 (EtwpQueryProcessCommandLine.c)
 *     EtwpInitStateChangeInfo @ 0x14094C3B4 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14094C470 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteAppStateChange @ 0x14094D6B0 (EtwpWriteAppStateChange.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x14094DF38 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140A452AC (EtwpWriteAppStateChangeWithStats.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwTraceAppStateChange(struct _EX_RUNDOWN_REF *PROCESS, __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  char v7; // r10
  unsigned __int64 v8; // kr00_8
  unsigned __int64 v9; // rcx
  _OWORD *v10; // r15
  char v11; // si
  char v13; // r14
  ULONG_PTR v14; // rbx
  int v15; // r8d
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v22[5]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h]
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  _OWORD v27[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-20h]
  int v29; // [rsp+E8h] [rbp-18h]
  _BYTE v30[41]; // [rsp+ECh] [rbp-14h] BYREF
  unsigned __int64 v31; // [rsp+115h] [rbp+15h]
  unsigned __int64 v32; // [rsp+11Dh] [rbp+1Dh]
  unsigned __int64 v33; // [rsp+125h] [rbp+25h]
  unsigned __int64 v34; // [rsp+12Dh] [rbp+2Dh]
  unsigned __int64 v35; // [rsp+135h] [rbp+35h]
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v37[672]; // [rsp+180h] [rbp+80h] BYREF

  memset_0(v30, 0, 0x62uLL);
  memset(v27, 0, sizeof(v27));
  v28 = 0LL;
  v29 = 0;
  if ( dword_140E090F0
    && (qword_140E09100 & 0x600000000001LL) != 0
    && (qword_140E09108 & 0x600000000001LL) == qword_140E09108 )
  {
    EtwpInitStateChangeInfo(PROCESS, v30);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(_QWORD *)a2 - PROCESS[208].Count;
    v7 = *(_BYTE *)(a2 + 52);
    v30[1] = *(_BYTE *)(a2 + 48);
    v8 = v4;
    v30[0] = v7;
    v9 = v5 - *(_QWORD *)(a2 + 24);
    v31 = v8 / 0x2710;
    v32 = v9 / 0x2710;
    v33 = v6 / 0x2710;
    v34 = v5 / 0x2710;
    v35 = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v7 == 3 )
    {
      memset_0(v22, 0, 0x68uLL);
      PsQueryStatisticsProcess(PROCESS, v22);
      LODWORD(v27[0]) = ObGetProcessHandleCount(PROCESS, 0LL);
      v15 = -1;
      v16 = -1;
      *(_QWORD *)((char *)v27 + 4) = PROCESS[123].Count << 12;
      *(_QWORD *)((char *)v27 + 12) = PROCESS[124].Count << 12;
      v17 = -1;
      if ( v23 < 0xFFFFFFFFLL )
        v17 = v23;
      HIDWORD(v27[1]) = v17;
      v18 = -1;
      if ( v24 < 0xFFFFFFFFLL )
        v18 = v24;
      LODWORD(v28) = v18;
      if ( v25 / 1024 < 0xFFFFFFFFLL )
        v16 = v25 / 1024;
      HIDWORD(v28) = v16;
      if ( v26 / 1024 < 0xFFFFFFFFLL )
        v15 = v26 / 1024;
      v29 = v15;
      *(_QWORD *)((char *)&v27[1] + 4) = v22[3];
      EtwpWriteAppStateChangeWithStats(PROCESS, v30, v27, 1024LL);
      v10 = v27;
    }
    else
    {
      EtwpWriteAppStateChange(v30);
      LODWORD(v10) = 0;
    }
    v11 = 1;
    if ( dword_140E090F0
      && (qword_140E09100 & 0x400000000000LL) != 0
      && (qword_140E09108 & 0x400000000000LL) == qword_140E09108 )
    {
      memset_0(v37, 0, sizeof(v37));
      v20 = 0LL;
      v19 = 0;
      *(_OWORD *)P = 0LL;
      v13 = 0;
      memset(&ApcState, 0, sizeof(ApcState));
      if ( (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process != PROCESS )
      {
        if ( ExAcquireRundownProtection(PROCESS + 61) )
        {
          KeStackAttachProcess((PRKPROCESS)PROCESS, &ApcState);
          v13 = 1;
        }
        else
        {
          v11 = 0;
        }
      }
      v14 = PsReferencePrimaryTokenWithTag((__int64)PROCESS, 0x746C6644u);
      EtwpQueryTokenPackageInfo(v14, (__int64)v37, &v19);
      ObFastDereferenceObject((__int64 *)&PROCESS[73], v14, 0x746C6644u);
      if ( v11 )
      {
        if ( PROCESS[92].Count && (unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(PROCESS) )
          EtwpQueryProcessCommandLine((__int64)PROCESS, (__int64)P);
        EtwpQueryProcessOtherInfo((__int64)PROCESS, (__int64)&v20);
      }
      if ( v13 )
      {
        KiUnstackDetachProcess((__int64)&ApcState, 0);
        ExReleaseRundownProtection_0(PROCESS + 61);
      }
      EtwpWriteAppStateChangeSummary(
        (_DWORD)PROCESS,
        (unsigned int)v30,
        (_DWORD)v10,
        (unsigned int)v37,
        (__int64)&v20,
        (__int64)P);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
    }
  }
}
