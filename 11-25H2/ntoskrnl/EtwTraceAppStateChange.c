/*
 * XREFs of EtwTraceAppStateChange @ 0x14091FF00
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x14091FCB0 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408BE7AC (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1408BEAE4 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x1408BEB60 (EtwpQueryProcessCommandLine.c)
 *     PsQueryStatisticsProcess @ 0x1408DD540 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x1408DD7C0 (ObGetProcessHandleCount.c)
 *     EtwpInitStateChangeInfo @ 0x1409202A8 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140920364 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteAppStateChange @ 0x1409209CC (EtwpWriteAppStateChange.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140920AE0 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140920B7C (EtwpWriteAppStateChangeWithStats.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  void *v14; // rbx
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
  WCHAR PackageSize[336]; // [rsp+180h] [rbp+80h] BYREF

  memset_0(v30, 0, 0x62uLL);
  memset(v27, 0, sizeof(v27));
  v28 = 0LL;
  v29 = 0;
  if ( dword_140E09010
    && (qword_140E09020 & 0x600000000001LL) != 0
    && (qword_140E09028 & 0x600000000001LL) == qword_140E09028 )
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
    if ( dword_140E09010
      && (qword_140E09020 & 0x400000000000LL) != 0
      && (qword_140E09028 & 0x400000000000LL) == qword_140E09028 )
    {
      memset_0(PackageSize, 0, sizeof(PackageSize));
      v20 = 0LL;
      v19 = 0;
      *(_OWORD *)P = 0LL;
      v13 = 0;
      memset(&ApcState, 0, sizeof(ApcState));
      if ( (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process != PROCESS )
      {
        if ( ExAcquireRundownProtection_0(PROCESS + 61) )
        {
          KeStackAttachProcess((PRKPROCESS)PROCESS, &ApcState);
          v13 = 1;
        }
        else
        {
          v11 = 0;
        }
      }
      v14 = (void *)PsReferencePrimaryTokenWithTag((__int64)PROCESS, 0x746C6644u);
      EtwpQueryTokenPackageInfo(v14, PackageSize, &v19);
      ObFastDereferenceObject((__int64 *)&PROCESS[73], (ULONG_PTR)v14, 1953261124LL);
      if ( v11 )
      {
        if ( PROCESS[92].Count && (unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(PROCESS) )
          EtwpQueryProcessCommandLine((__int64)PROCESS, (__int64)P);
        EtwpQueryProcessOtherInfo((__int64)PROCESS, (__int64)&v20);
      }
      if ( v13 )
      {
        KiUnstackDetachProcess((__int64)&ApcState, 0LL);
        ExReleaseRundownProtection_0(PROCESS + 61);
      }
      EtwpWriteAppStateChangeSummary(
        (_DWORD)PROCESS,
        (unsigned int)v30,
        (_DWORD)v10,
        (unsigned int)PackageSize,
        (__int64)&v20,
        (__int64)P);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
    }
  }
}
