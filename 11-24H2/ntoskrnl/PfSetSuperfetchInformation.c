/*
 * XREFs of PfSetSuperfetchInformation @ 0x1408F573C
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     PfpPartitionDereferenceParent @ 0x14022A25C (PfpPartitionDereferenceParent.c)
 *     PfpPartitionRundownProtectionRelease @ 0x14046A344 (PfpPartitionRundownProtectionRelease.c)
 *     PfpPartitionRundownProtectionAcquire @ 0x140473AB8 (PfpPartitionRundownProtectionAcquire.c)
 *     PfTSetTraceWorkerPriority @ 0x1405C9E50 (PfTSetTraceWorkerPriority.c)
 *     MmSetTrimWhileAgingState @ 0x14067A094 (MmSetTrimWhileAgingState.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PfGenerateTrace @ 0x14074466C (PfGenerateTrace.c)
 *     PfTCleanup @ 0x140744858 (PfTCleanup.c)
 *     PfTInitialize @ 0x140744BA4 (PfTInitialize.c)
 *     PfTStart @ 0x140744DFC (PfTStart.c)
 *     PfpPartitionFindOrCreate @ 0x1407456D0 (PfpPartitionFindOrCreate.c)
 *     PfpSetParameter @ 0x140746A4C (PfpSetParameter.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1408F5AF4 (PfpDeprioritizeOldPagesInWs.c)
 *     PfpPfnPrioRequest @ 0x1408F5FDC (PfpPfnPrioRequest.c)
 *     PfpPartitionFindByHandle @ 0x1408F6998 (PfpPartitionFindByHandle.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
 *     EtwTiLogSyscallUsage @ 0x1408F7468 (EtwTiLogSyscallUsage.c)
 *     PfpProcessScenarioPhase @ 0x1408F77E8 (PfpProcessScenarioPhase.c)
 *     PfpPrefetchRequest @ 0x140934A0C (PfpPrefetchRequest.c)
 *     PfpRpControlRequest @ 0x140A5EA1C (PfpRpControlRequest.c)
 *     MmSetMinimumAgeRate @ 0x140A96CAC (MmSetMinimumAgeRate.c)
 *     PfpLogEventRequest @ 0x140AA3778 (PfpLogEventRequest.c)
 *     PfpScenCtxPrefetchStateSet @ 0x140B5D0D8 (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxServiceThreadSet @ 0x140B5D408 (PfpScenCtxServiceThreadSet.c)
 *     PfpPartitionAccessTraceLockAcquire @ 0x140B5D7F4 (PfpPartitionAccessTraceLockAcquire.c)
 *     PfpPartitionAccessTraceLockRelease @ 0x140B5D810 (PfpPartitionAccessTraceLockRelease.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSetSuperfetchInformation(__int64 a1, __int128 *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edi
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  void *v18; // r12
  unsigned int v19; // r13d
  unsigned int v20; // eax
  unsigned __int64 v21; // rcx
  int v22; // r8d
  unsigned __int64 v23; // r12
  __m128i v24; // xmm6
  __int64 v25; // r13
  int v26; // ebx
  __int64 v27; // r13
  __int64 v28; // r13
  int v29[2]; // [rsp+30h] [rbp-138h] BYREF
  __int128 v30; // [rsp+38h] [rbp-130h] BYREF
  __int128 v31; // [rsp+48h] [rbp-120h]
  int v32; // [rsp+58h] [rbp-110h] BYREF
  int v33; // [rsp+5Ch] [rbp-10Ch]
  __int64 v34; // [rsp+60h] [rbp-108h] BYREF
  int v35; // [rsp+68h] [rbp-100h]
  __int64 v36; // [rsp+70h] [rbp-F8h]
  HANDLE Handle; // [rsp+78h] [rbp-F0h] BYREF
  PVOID P; // [rsp+80h] [rbp-E8h]
  __int128 v39; // [rsp+88h] [rbp-E0h]
  void *Src; // [rsp+98h] [rbp-D0h]
  int v41; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-C0h]
  int v43; // [rsp+B0h] [rbp-B8h]
  __int128 v44; // [rsp+B8h] [rbp-B0h]
  __int128 v45; // [rsp+C8h] [rbp-A0h]
  int v46; // [rsp+D8h] [rbp-90h]
  __int64 v47; // [rsp+E0h] [rbp-88h]
  unsigned __int64 v48; // [rsp+E8h] [rbp-80h]
  __m128i v49; // [rsp+F0h] [rbp-78h]
  __int128 v50; // [rsp+100h] [rbp-68h]
  __int128 v51; // [rsp+110h] [rbp-58h] BYREF
  __int128 v52; // [rsp+120h] [rbp-48h]
  int v53; // [rsp+170h] [rbp+8h]
  int v54; // [rsp+170h] [rbp+8h]

  v51 = 0LL;
  v52 = 0LL;
  v47 = 0LL;
  v45 = 0LL;
  v32 = 0;
  DWORD2(v44) = 0;
  *(_QWORD *)&v44 = 0LL;
  v42 = 0LL;
  v43 = 0;
  v41 = 0;
  v48 = 0LL;
  v34 = 0LL;
  v33 = 0;
  *(_QWORD *)v29 = 0LL;
  v36 = 0LL;
  P = 0LL;
  Handle = 0LL;
  v39 = 0LL;
  Src = 0LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
  {
    LODWORD(v12) = -1073741790;
    goto LABEL_13;
  }
  if ( a3 != 32 )
  {
    LODWORD(v12) = -1073741820;
    goto LABEL_13;
  }
  v30 = 0LL;
  v31 = 0LL;
  v30 = *a2;
  v31 = a2[1];
  if ( (_QWORD)v30 != 0x6B7568430000002DLL )
    goto LABEL_26;
  v10 = DWORD2(v30);
  if ( SDWORD2(v30) <= 14 )
  {
    switch ( DWORD2(v30) )
    {
      case 0xE:
        LOBYTE(v7) = a4;
        v11 = PfpRpControlRequest(&v30, v7);
        goto LABEL_12;
      case 3:
        if ( DWORD2(v31) != 24 )
          goto LABEL_45;
        if ( a4 && (v31 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        v39 = *(_OWORD *)v31;
        Src = *(void **)(v31 + 16);
        if ( (_DWORD)v39 == 1 )
        {
          v18 = Src;
          if ( !Src )
            goto LABEL_103;
          v19 = DWORD1(v39) >> 7;
          if ( !(DWORD1(v39) >> 7) )
            goto LABEL_103;
          switch ( BYTE4(v39) & 0x1F )
          {
            case 2:
            case 3:
              v20 = 36;
              break;
            case 5:
              v20 = 12;
              break;
            case 27:
              v20 = 16;
              break;
            default:
              LODWORD(v12) = -1073741637;
              goto LABEL_13;
          }
          if ( v19 < v20 || v19 >= 0xFF0 )
            goto LABEL_103;
          LOBYTE(v9) = a4;
          LODWORD(v12) = PfpPartitionFindByHandle(v29, &v34, *((_QWORD *)&v39 + 1), v9);
          if ( (int)v12 < 0 )
            goto LABEL_13;
          P = (PVOID)ExAllocatePool2(0x100uLL, v19, 0x44456650u);
          if ( !P )
          {
            LODWORD(v12) = -1073741670;
            goto LABEL_13;
          }
          if ( a4 )
          {
            if ( ((unsigned __int8)v18 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v21 = (unsigned __int64)v18 + ((unsigned __int64)DWORD1(v39) >> 7);
            if ( v21 > 0x7FFFFFFF0000LL || v21 < (unsigned __int64)v18 )
              v18 = Src;
          }
          memmove(P, v18, (unsigned __int64)DWORD1(v39) >> 7);
          Src = P;
          v17 = PfpLogEventRequest(v29[0]);
          goto LABEL_102;
        }
        break;
      case 4:
        if ( DWORD2(v31) != 16 )
          goto LABEL_45;
        if ( a4 && (v31 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        v44 = *(_OWORD *)v31;
        if ( (_DWORD)v44 == 1 )
        {
          LOBYTE(v9) = a4;
          LODWORD(v12) = PfpPartitionFindByHandle(v29, &v34, *((_QWORD *)&v44 + 1), v9);
          if ( (int)v12 >= 0 )
          {
            PfGenerateTrace(*(__int64 *)v29, 0);
            LODWORD(v12) = 0;
          }
          goto LABEL_13;
        }
        break;
      case 5:
        LOBYTE(v7) = a4;
        v12 = (unsigned int)PfpPrefetchRequest(&v30, v7);
        v15 = 17LL;
        v16 = v12;
LABEL_31:
        EtwTiLogSyscallUsage(v16, v15);
        goto LABEL_13;
      case 7:
        goto LABEL_28;
      case 0xA:
        if ( DWORD2(v31) == 32 )
        {
          if ( a4 && (v31 & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          v51 = *(_OWORD *)v31;
          v52 = *(_OWORD *)(v31 + 16);
          LOBYTE(v7) = a4;
          v11 = PfpProcessScenarioPhase(&v51, v7);
          goto LABEL_12;
        }
        goto LABEL_45;
      case 0xB:
        if ( DWORD2(v31) != 16 )
          goto LABEL_45;
        if ( a4 && (v31 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        v45 = *(_OWORD *)v31;
        if ( (_DWORD)v45 == 1 )
        {
          LOBYTE(v9) = a4;
          LODWORD(v12) = PfpPartitionFindByHandle(v29, &v34, *((_QWORD *)&v45 + 1), v9);
          if ( (int)v12 >= 0 )
          {
            LODWORD(v12) = 0;
            if ( (int)PfTSetTraceWorkerPriority(*(__int64 *)v29, DWORD1(v45)) > 31 )
              LODWORD(v12) = -1073741431;
          }
          goto LABEL_13;
        }
        break;
      case 0xD:
        if ( DWORD2(v31) != 8 )
          goto LABEL_45;
        if ( a4 && (v31 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v47 = *(_QWORD *)v31;
        if ( (_WORD)v47 != 1 || (unsigned int)(HIDWORD(v47) - 1) > 4 )
          goto LABEL_103;
        v17 = PfpScenCtxPrefetchStateSet((ULONG_PTR)&qword_140E66FD0);
LABEL_102:
        LODWORD(v12) = v17;
        goto LABEL_13;
      default:
LABEL_48:
        LODWORD(v12) = -1073741821;
        goto LABEL_13;
    }
    LODWORD(v12) = -1073741735;
    goto LABEL_13;
  }
  switch ( DWORD2(v30) )
  {
    case 0xF:
      if ( DWORD2(v31) != 4 )
        goto LABEL_45;
      if ( a4 && (v31 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v46 = *(_DWORD *)v31;
      v32 = v46 + dword_140E66FCC;
      LODWORD(v12) = PfpSetParameter(KeyHandle, L"BaseTime", v8, &v32, 4u);
      if ( (int)v12 >= 0 )
        dword_140E66FCC = v32;
      break;
    case 0x12:
      if ( DWORD2(v31) != 32 )
        goto LABEL_45;
      if ( a4 && (v31 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = v31;
      v49 = *(__m128i *)v31;
      v24 = v49;
      v50 = *(_OWORD *)(v31 + 16);
      if ( v49.m128i_i32[0] != 3 )
        goto LABEL_26;
      if ( v49.m128i_i32[1] >= 2u )
        goto LABEL_26;
      v54 = _mm_cvtsi128_si32(_mm_srli_si128(v49, 8));
      if ( (v54 & 0xFFFFFFFC) != 0 )
        goto LABEL_26;
      if ( v49.m128i_i32[1] || !*((_QWORD *)&v50 + 1) )
      {
        LOBYTE(v8) = a4;
        LODWORD(v12) = PsReferencePartitionByHandle(v50, 2031619LL, v8, 1951426128LL, &v34);
        if ( (int)v12 >= 0 )
        {
          LODWORD(v12) = PfpPartitionFindOrCreate((PEX_RUNDOWN_REF_CACHE_AWARE **)v29, (__int64)&PfGlobals, v34);
          if ( (int)v12 >= 0 )
          {
            v33 = 1;
            v25 = *(_QWORD *)v29;
            PfpPartitionAccessTraceLockAcquire(*(_QWORD *)v29);
            v35 = _mm_cvtsi128_si32(_mm_srli_si128(v24, 4));
            if ( v35 )
            {
              v27 = *(_QWORD *)v29;
              v26 = ~v54 & *(_DWORD *)(*(_QWORD *)v29 + 72LL);
              PfTCleanup(*(__int64 *)v29, 0);
              PfTInitialize(v27, 1);
            }
            else
            {
              v26 = v54 & ~*(_DWORD *)(v25 + 72);
            }
            v28 = *(_QWORD *)v29;
            LODWORD(v12) = PfTStart(*(__int64 *)v29, v26, a4, &Handle);
            if ( (int)v12 >= 0 )
            {
              PfpPartitionAccessTraceLockRelease(v28);
              v33 = 0;
              if ( !v35 )
              {
                v36 = v28;
                PfpPartitionRundownProtectionAcquire(v28);
                *((_QWORD *)&v50 + 1) = Handle;
                if ( a4 )
                {
                  if ( (v23 & 7) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v23 >= 0x7FFFFFFF0000LL )
                    v23 = 0x7FFFFFFF0000LL;
                  *(_BYTE *)v23 = *(_BYTE *)v23;
                  *(_BYTE *)(v23 + 31) = *(_BYTE *)(v23 + 31);
                  v23 = v31;
                  v24 = v49;
                }
                *(__m128i *)v23 = v24;
                *(_OWORD *)(v23 + 16) = v50;
              }
              PfpScenCtxServiceThreadSet((ULONG_PTR)&qword_140E66FD0);
              if ( v36 )
                PfpPartitionRundownProtectionRelease(v36);
              v36 = 0LL;
              Handle = 0LL;
            }
          }
        }
      }
      else
      {
        LODWORD(v12) = -1073741776;
      }
      break;
    case 0x13:
      if ( DWORD2(v31) != 12 )
        goto LABEL_45;
      LODWORD(v12) = 0;
      if ( a4 && (v31 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v42 = *(_QWORD *)v31;
      v22 = *(_DWORD *)(v31 + 8);
      if ( (_DWORD)v42 == 2 && SHIDWORD(v42) < 5 && (unsigned __int8)v22 <= 7u && BYTE1(v22) <= 7u && !HIWORD(v22) )
      {
        LOBYTE(v53) = BYTE4(v42);
        BYTE1(v53) = *(_DWORD *)(v31 + 8);
        HIWORD(v53) = BYTE1(v22);
        MmSetTrimWhileAgingState(v53);
        break;
      }
LABEL_26:
      LODWORD(v12) = -1073741811;
      break;
    case 0x16:
LABEL_28:
      LOBYTE(v7) = a4;
      LODWORD(v12) = PfpPfnPrioRequest(&v30, v7, &v41);
      v15 = 22LL;
      if ( v10 != 7 )
        v15 = (unsigned int)(v10 != 22) + 23;
      v16 = (unsigned int)v12;
      goto LABEL_31;
    case 0x19:
      if ( DWORD2(v31) == 8 )
      {
        LODWORD(v12) = 0;
        if ( a4 && (v31 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v48 = *(_QWORD *)v31;
        if ( (_DWORD)v48 == 1 )
        {
          MmSetMinimumAgeRate(HIDWORD(v48));
          break;
        }
LABEL_103:
        LODWORD(v12) = -1073741811;
        break;
      }
LABEL_45:
      LODWORD(v12) = -1073741306;
      break;
    case 0x1A:
      LOBYTE(v7) = a4;
      v11 = PfpDeprioritizeOldPagesInWs(&v30, v7);
LABEL_12:
      LODWORD(v12) = v11;
      break;
    case 0x1D:
      goto LABEL_28;
    default:
      goto LABEL_48;
  }
LABEL_13:
  if ( v33 )
    PfpPartitionAccessTraceLockRelease(*(_QWORD *)v29);
  v13 = v36;
  if ( v36 )
  {
    PfpPartitionAccessTraceLockAcquire(v36);
    PfTCleanup(v13, 0);
    PfTInitialize(v13, 1);
    PfpPartitionAccessTraceLockRelease(v13);
    PfpPartitionRundownProtectionRelease(v13);
  }
  if ( *(_QWORD *)v29 )
    PfpPartitionRundownProtectionRelease(*(__int64 *)v29);
  if ( v34 )
    PfpPartitionDereferenceParent(v34);
  if ( Handle )
    ObCloseHandle(Handle, a4);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v12;
}
