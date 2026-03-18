/*
 * XREFs of DpiMiracastHandleStartSessionDone @ 0x140244CC8
 * Callers:
 *     DxgkHandleMiracastEscape @ 0x14040A148 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x14007E55C (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastTearDownAssociation @ 0x14007FF0C (DpiMiracastTearDownAssociation.c)
 *     McTemplateK0qqqz_EtwWriteTransfer @ 0x140081934 (McTemplateK0qqqz_EtwWriteTransfer.c)
 *     McTemplateK0qqz_EtwWriteTransfer @ 0x1400819FC (McTemplateK0qqz_EtwWriteTransfer.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x14008C5A0 (TraceLoggingWriteMiracastSessionStart.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x140244118 (DpiMiracastBroadcastDeviceStateChange.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiMiracastHandleStartSessionDone(char *P, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // zf
  __int64 v9; // r8
  struct _KEVENT *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  const wchar_t **v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // ecx
  __int64 v21; // rdx
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  int v34; // eax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  int v37; // eax
  __int128 v38; // xmm0
  int v39; // eax
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  _OWORD v43[56]; // [rsp+40h] [rbp-C0h] BYREF

  DpiMiracastEtwLogStartMiracastSessionStage((__int64)P, 1, a3);
  *((_DWORD *)P + 175) = *(_DWORD *)(a2 + 16);
  *((_DWORD *)P + 176) = *(_DWORD *)(a2 + 4);
  *(_OWORD *)(P + 708) = *(_OWORD *)(a2 + 772);
  *(_OWORD *)(P + 724) = *(_OWORD *)(a2 + 788);
  *(_OWORD *)(P + 740) = *(_OWORD *)(a2 + 804);
  *(_OWORD *)(P + 756) = *(_OWORD *)(a2 + 820);
  *((_WORD *)P + 386) = 0;
  *((_DWORD *)P + 194) = *(_DWORD *)(a2 + 840);
  *((_DWORD *)P + 195) = *(_DWORD *)(a2 + 8);
  if ( *(int *)(a2 + 4) < 0 )
  {
    WdLogSingleEntry1(2LL, *(int *)(a2 + 4));
    v17 = (const wchar_t **)(P + 352);
    *((_DWORD *)P + 196) = *(_DWORD *)(a2 + 16);
    WdLogGlobalForLineNumber = 2217;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
    {
      McTemplateK0qqqz_EtwWriteTransfer(
        v15,
        &EventMiracastStartMiracastSessionFail,
        v16,
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 8),
        *((_DWORD *)P + 50),
        *v17);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
        McTemplateK0qqz_EtwWriteTransfer(
          v18,
          &EventMiracastPerfTrackStartMiracastSessionFailed,
          v19,
          *((_DWORD *)P + 110),
          *((_DWORD *)P + 50),
          *v17);
    }
    DpiMiracastTearDownAssociation(P, *(_DWORD *)a2, *(_DWORD *)(a2 + 12), *(_BYTE *)(a2 + 20) != 0 ? 1 : 128, 0);
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
    v8 = *((_DWORD *)P + 102) == 1;
    *((_QWORD *)P + 11) = KeGetCurrentThread();
    if ( v8 )
    {
      *((_DWORD *)P + 103) = 1;
      *((_DWORD *)P + 102) = 2;
      *((_DWORD *)P + 104) = *(_DWORD *)(a2 + 12);
      DpiMiracastBroadcastDeviceStateChange((__int64)P, v5, v6, v7);
      KeSetEvent(*((PRKEVENT *)P + 58), 0, 0);
      v10 = (struct _KEVENT *)*((_QWORD *)P + 59);
      if ( v10 )
      {
        KeSetEvent(v10, 0, 0);
        ObfDereferenceObject(*((PVOID *)P + 59));
        *((_QWORD *)P + 59) = 0LL;
      }
      v11 = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)P + 162) = (MEMORY[0xFFFFF78000000014] - *((_DWORD *)P + 158)) / 10000;
      v12 = *((_QWORD *)P + 80);
      if ( v12 )
      {
        v13 = *(_DWORD *)(a2 + 32);
        v11 -= v12;
        if ( v11 > 1200000000 )
          v14 = v13 & 0xFFFFFFFB;
        else
          v14 = v13 | 4;
        *(_DWORD *)(a2 + 32) = v14;
      }
      *(_OWORD *)(P + 600) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(P + 616) = *(_OWORD *)(a2 + 48);
      if ( !P[590] && (*(_DWORD *)(a2 + 32) & 1) == 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
          McTemplateK0qqz_EtwWriteTransfer(
            v11,
            &EventMiracastPerfTrackStartMiracastSessionDoneNoMonitor,
            v9,
            *((_DWORD *)P + 110),
            *((_DWORD *)P + 50),
            *((const wchar_t **)P + 44));
        P[590] = 1;
      }
    }
    *((_QWORD *)P + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
  }
  TraceLoggingWriteMiracastSessionStart();
  memset(v43, 0, sizeof(v43));
  v20 = *(_DWORD *)(a2 + 32);
  v43[3] = *(_OWORD *)(a2 + 40);
  v21 = 5LL;
  *(_QWORD *)&v43[4] = *(_QWORD *)(a2 + 56);
  v43[0] = 0x38000000018uLL;
  LODWORD(v43[5]) = *(_DWORD *)(a2 + 16);
  DWORD1(v43[5]) = *(_DWORD *)(a2 + 4);
  *((_QWORD *)&v43[5] + 1) = *(_QWORD *)(a2 + 8);
  v22 = (_OWORD *)(a2 + 64);
  DWORD2(v43[4]) = DWORD2(v43[4]) & 0xFFFFFFC7 | (8 * (v20 & 7));
  v23 = &v43[6];
  memset(&v43[1], 0, 28);
  do
  {
    v24 = v22[1];
    *v23 = *v22;
    v25 = v22[2];
    v23[1] = v24;
    v26 = v22[3];
    v23[2] = v25;
    v27 = v22[4];
    v23[3] = v26;
    v28 = v22[5];
    v23[4] = v27;
    v29 = v22[6];
    v23[5] = v28;
    v30 = v22[7];
    v22 += 8;
    v23[6] = v29;
    v23 += 8;
    *(v23 - 1) = v30;
    --v21;
  }
  while ( v21 );
  v31 = v22[1];
  *v23 = *v22;
  v32 = v22[2];
  v23[1] = v31;
  v33 = v22[3];
  v34 = *((_DWORD *)v22 + 16);
  v23[2] = v32;
  v35 = *(_OWORD *)(a2 + 772);
  v23[3] = v33;
  *((_DWORD *)v23 + 16) = v34;
  v36 = *(_OWORD *)(a2 + 788);
  v37 = *(_DWORD *)(a2 + 840);
  *(_OWORD *)((char *)&v43[50] + 8) = v35;
  DWORD1(v43[50]) = v37;
  v38 = *(_OWORD *)(a2 + 804);
  v39 = *((_DWORD *)P + 197);
  *(_OWORD *)((char *)&v43[51] + 8) = v36;
  HIDWORD(v43[54]) = v39;
  v40 = *(_OWORD *)(a2 + 820);
  WORD4(v43[54]) = 0;
  *(_OWORD *)((char *)&v43[52] + 8) = v38;
  v41 = *((_OWORD *)P + 7);
  *(_OWORD *)((char *)&v43[53] + 8) = v40;
  v43[55] = v41;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v43, 0x200000000uLL);
}
