/*
 * XREFs of EtwTraceAppStateChange @ 0x1408F057C
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x1408F3B80 (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsQueryStatisticsProcess @ 0x14085E140 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x14085E360 (ObGetProcessHandleCount.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408EFE7C (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1408F01B4 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x1408F0230 (EtwpQueryProcessCommandLine.c)
 *     EtwpInitStateChangeInfo @ 0x1408F0924 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1408F09E0 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteAppStateChange @ 0x1408F1C20 (EtwpWriteAppStateChange.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x1408F24A8 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140A3AE58 (EtwpWriteAppStateChangeWithStats.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r8d
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v24[5]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h]
  __int64 v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  _OWORD v29[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-20h]
  int v31; // [rsp+E8h] [rbp-18h]
  _BYTE v32[41]; // [rsp+ECh] [rbp-14h] BYREF
  unsigned __int64 v33; // [rsp+115h] [rbp+15h]
  unsigned __int64 v34; // [rsp+11Dh] [rbp+1Dh]
  unsigned __int64 v35; // [rsp+125h] [rbp+25h]
  unsigned __int64 v36; // [rsp+12Dh] [rbp+2Dh]
  unsigned __int64 v37; // [rsp+135h] [rbp+35h]
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+50h] BYREF
  WCHAR PackageSize[336]; // [rsp+180h] [rbp+80h] BYREF

  memset_0(v32, 0, 0x62uLL);
  memset(v29, 0, sizeof(v29));
  v30 = 0LL;
  v31 = 0;
  if ( dword_140E09160
    && (qword_140E09170 & 0x600000000001LL) != 0
    && (qword_140E09178 & 0x600000000001LL) == qword_140E09178 )
  {
    EtwpInitStateChangeInfo(PROCESS, v32);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 32);
    v6 = *(_QWORD *)a2 - PROCESS[208].Count;
    v7 = *(_BYTE *)(a2 + 52);
    v32[1] = *(_BYTE *)(a2 + 48);
    v8 = v4;
    v32[0] = v7;
    v9 = v5 - *(_QWORD *)(a2 + 24);
    v33 = v8 / 0x2710;
    v34 = v9 / 0x2710;
    v35 = v6 / 0x2710;
    v36 = v5 / 0x2710;
    v37 = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v7 == 3 )
    {
      memset_0(v24, 0, 0x68uLL);
      PsQueryStatisticsProcess(PROCESS, v24);
      LODWORD(v29[0]) = ObGetProcessHandleCount(PROCESS, 0LL);
      v17 = -1;
      v18 = -1;
      *(_QWORD *)((char *)v29 + 4) = PROCESS[123].Count << 12;
      *(_QWORD *)((char *)v29 + 12) = PROCESS[124].Count << 12;
      v19 = -1;
      if ( v25 < 0xFFFFFFFFLL )
        v19 = v25;
      HIDWORD(v29[1]) = v19;
      v20 = -1;
      if ( v26 < 0xFFFFFFFFLL )
        v20 = v26;
      LODWORD(v30) = v20;
      if ( v27 / 1024 < 0xFFFFFFFFLL )
        v18 = v27 / 1024;
      HIDWORD(v30) = v18;
      if ( v28 / 1024 < 0xFFFFFFFFLL )
        v17 = v28 / 1024;
      v31 = v17;
      *(_QWORD *)((char *)&v29[1] + 4) = v24[3];
      EtwpWriteAppStateChangeWithStats(PROCESS, v32, v29, 1024LL);
      v10 = v29;
    }
    else
    {
      EtwpWriteAppStateChange(v32);
      LODWORD(v10) = 0;
    }
    v11 = 1;
    if ( dword_140E09160
      && (qword_140E09170 & 0x400000000000LL) != 0
      && (qword_140E09178 & 0x400000000000LL) == qword_140E09178 )
    {
      memset_0(PackageSize, 0, sizeof(PackageSize));
      v22 = 0LL;
      v21 = 0;
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
      EtwpQueryTokenPackageInfo(v14, PackageSize, &v21);
      ObFastDereferenceObject((__int64 *)&PROCESS[73], (ULONG_PTR)v14, 0x746C6644u);
      if ( v11 )
      {
        if ( PROCESS[92].Count && (unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(PROCESS) )
          EtwpQueryProcessCommandLine((__int64)PROCESS, (__int64)P);
        EtwpQueryProcessOtherInfo((__int64)PROCESS, (__int64)&v22);
      }
      if ( v13 )
      {
        KiUnstackDetachProcess((__int64)&ApcState, 0, v15, v16);
        ExReleaseRundownProtection_0(PROCESS + 61);
      }
      EtwpWriteAppStateChangeSummary(
        (_DWORD)PROCESS,
        (unsigned int)v32,
        (_DWORD)v10,
        (unsigned int)PackageSize,
        (__int64)&v22,
        (__int64)P);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0);
    }
  }
}
