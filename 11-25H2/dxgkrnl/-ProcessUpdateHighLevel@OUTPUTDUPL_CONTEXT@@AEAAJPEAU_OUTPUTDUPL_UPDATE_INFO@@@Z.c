/*
 * XREFs of ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1402FD790
 * Callers:
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1402FC5CC (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1402FD488 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402FF00C (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140023A1C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     McTemplateK0pqqqqqttttttttq_EtwWriteTransfer @ 0x14004DE44 (McTemplateK0pqqqqqttttttttq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402A8390 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1402FCB9C (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402FDF58 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402FEBCC (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402FEFEC (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x14034CE60 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int128 v8; // xmm0
  OUTPUTDUPL_MGR *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm0
  unsigned int v14; // eax
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r15d
  int v19; // eax
  __int64 v20; // r14
  int v21; // r14d
  int v22; // eax
  unsigned int v23; // eax
  unsigned int updated; // ebx
  int v25; // r12d
  OUTPUTDUPL_MGR *v26; // r13
  int v27; // edx
  OUTPUTDUPL_MGR *v28; // rcx
  DXGDIAGNOSTICS *v29; // rcx
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  int *v40; // [rsp+20h] [rbp-F0h]
  int *v41; // [rsp+28h] [rbp-E8h]
  __int64 v42; // [rsp+30h] [rbp-E0h]
  __int64 v43; // [rsp+38h] [rbp-D8h]
  __int64 v44; // [rsp+40h] [rbp-D0h]
  unsigned int v45; // [rsp+68h] [rbp-A8h]
  int v46; // [rsp+90h] [rbp-80h] BYREF
  int v47; // [rsp+94h] [rbp-7Ch] BYREF
  int v48; // [rsp+98h] [rbp-78h]
  __int64 v49; // [rsp+A0h] [rbp-70h] BYREF
  _OWORD v50[5]; // [rsp+B0h] [rbp-60h] BYREF
  _DWORD v51[2]; // [rsp+100h] [rbp-10h] BYREF
  __int64 v52; // [rsp+108h] [rbp-8h]
  __int128 v53; // [rsp+110h] [rbp+0h]
  unsigned int CurrentThreadId; // [rsp+120h] [rbp+10h]
  __int64 v55; // [rsp+124h] [rbp+14h]
  int v56; // [rsp+12Ch] [rbp+1Ch]
  int v57; // [rsp+130h] [rbp+20h]
  int v58; // [rsp+134h] [rbp+24h]

  if ( (*(_DWORD *)a2 == 0) != (*((_QWORD *)a2 + 1) != 0LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1389;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(pUpdate->Type == OUTPUTDUPL_UPDATE_TYPE_PRESENT) == (pUpdate->pContext != NULL)",
      1389LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset(v50, 0, sizeof(v50));
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    v55 = 0LL;
    v56 = 0;
    v53 = 0LL;
    v51[0] = 15;
    v5 = MEMORY[0xFFFFF78000000320];
    v52 = v5 * KeQueryTimeIncrement();
    CurrentProcess = PsGetCurrentProcess(v6);
    v8 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
    LODWORD(v55) = v55 & 0x7FFFFFFF;
    v53 = v8;
    LODWORD(v55) = v55 & 0x80000000 | PsGetCurrentProcessSessionId() & 0x7FFFFFFF;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v58 = *((_DWORD *)this + 4);
    v51[1] = 56;
    v57 = 5;
    if ( bTracingEnabled )
      OUTPUTDUPL_MGR::LogEtw(v9, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v51);
    LODWORD(v50[0]) = 15;
    v10 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)&v50[0] + 1) = v10 * KeQueryTimeIncrement();
    v12 = PsGetCurrentProcess(v11);
    v13 = *(_OWORD *)PsGetProcessImageFileName(v12);
    DWORD1(v50[2]) &= ~0x80000000;
    v50[1] = v13;
    DWORD1(v50[2]) = DWORD1(v50[2]) & 0x80000000 | PsGetCurrentProcessSessionId() & 0x7FFFFFFF;
    v14 = (unsigned int)PsGetCurrentThreadId();
    v15 = *((_DWORD *)this + 77);
    LODWORD(v50[2]) = v14;
    DWORD1(v50[3]) = *((_DWORD *)this + 4);
    DWORD2(v50[3]) = *((_DWORD *)this + 73);
    DWORD2(v50[4]) = *((_DWORD *)this + 71);
    DWORD1(v50[0]) = 80;
    HIDWORD(v50[4]) = HIDWORD(v50[4]) & 0xFFFFFFEF | (16 * (v15 & 1));
    LODWORD(v50[3]) = 6;
  }
  if ( !*(_DWORD *)a2
    && !*((_DWORD *)this + 77)
    && *((_DWORD *)this + 78)
    && (unsigned int)DXGDXGIKEYEDMUTEX::HasConsumerGPUWorkFinished(
                       *((DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct DXGCONTEXT **)a2 + 1)) )
  {
    *((_DWORD *)this + 78) = 0;
  }
  v16 = *((unsigned int *)this + 11);
  v17 = *((_QWORD *)a2 + 1);
  v18 = 0;
  v49 = 0LL;
  v19 = DXGDXGIKEYEDMUTEX::AcquireCPU(*((_QWORD *)this + v16 + 6), v17, v4, &v49, v17, *((_DWORD *)a2 + 4));
  v20 = v19;
  if ( v19 != 258 )
  {
    if ( v19 < 0 )
    {
      WdLogSingleEntry1(2LL, v19);
      WdLogGlobalForLineNumber = 1439;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"GetCurrentKeyedMutex()->Acquire failed with something other than STATUS_TIMEOUT. Status = 0x%I64x",
        v20,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v20;
    }
    v18 = 1;
  }
  v21 = 0;
  v22 = *((_DWORD *)this + 78) & 1 | (16 * (*((_DWORD *)this + 77) & 1));
  v47 = 0;
  v23 = v18 | (16 * v22);
  v46 = 0;
  v48 = 0;
  switch ( v23 )
  {
    case 0u:
      goto LABEL_41;
    case 1u:
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                  this,
                  a2,
                  *((struct DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                  *((struct _PRODUCER_INFO **)this + 33),
                  &v46,
                  &v47);
      DWORD1(v50[4]) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 4LL);
      if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1518;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_pAccumulatedFrameInfo->PresentUpdateStatus == PRODUCER_INFO_PRESENT_UPDATE_NONE",
          1518LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v21 = v46;
      goto LABEL_16;
    case 0x10u:
      if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1541;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_pCurrentFrameInfo->PresentUpdateStatus != PRODUCER_INFO_PRESENT_UPDATE_READY",
          1541LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
LABEL_41:
      v35 = *((_QWORD *)this + 33);
      if ( *(_DWORD *)(v35 + 16) == 1 )
      {
        v38 = *((_QWORD *)this + 34);
        v39 = *(_QWORD *)(v35 + 8);
        v48 = 1;
        *(_QWORD *)(v35 + 8) = *(_QWORD *)(v38 + 8);
        *(_QWORD *)(*((_QWORD *)this + 34) + 8LL) = v39;
        *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) = 1;
        *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) = 0;
      }
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                  this,
                  a2,
                  0LL,
                  *((struct _PRODUCER_INFO **)this + 34),
                  0LL,
                  &v47);
      *((_DWORD *)this + 71) = 1;
      v32 = *((_QWORD *)this + 34);
      goto LABEL_38;
  }
  if ( v23 != 17 )
  {
    if ( v23 - 272 > 1 )
    {
      v37 = v23;
      WdLogSingleEntry1(1LL, v23);
      WdLogGlobalForLineNumber = 1583;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"Unexpected state combination 0x%I64x",
        v37,
        0LL,
        0LL,
        0LL,
        0LL);
      updated = -1073741595;
      goto LABEL_16;
    }
    goto LABEL_41;
  }
  v31 = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(this, a2, 0LL, *((struct _PRODUCER_INFO **)this + 33), &v46, &v47);
  v21 = v46;
  updated = v31;
  if ( v46 && !*(_DWORD *)a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1531;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!bNewUpdateReady || (pUpdate->Type != OUTPUTDUPL_UPDATE_TYPE_PRESENT)",
      1531LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v32 = *((_QWORD *)this + 33);
LABEL_38:
  DWORD1(v50[4]) = *(_DWORD *)(*(_QWORD *)(v32 + 8) + 4LL);
LABEL_16:
  v25 = 0;
  if ( v18 )
  {
    if ( !v21 || *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 )
    {
      v36 = *((_QWORD *)this + *((unsigned int *)this + 11) + 6);
      DXGDXGIKEYEDMUTEX::Release(v36, *(_QWORD *)(v36 + 136), 0LL, *((_DWORD *)a2 + 4));
    }
    else
    {
      DXGDXGIKEYEDMUTEX::Release(
        *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
        1uLL,
        *((_QWORD *)a2 + 1),
        *((_DWORD *)a2 + 4));
      v25 = 1;
    }
  }
  v26 = (OUTPUTDUPL_MGR *)*((_QWORD *)this + 37);
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(v26) )
  {
    v27 = *((_DWORD *)this + 78);
    HIDWORD(v50[3]) = updated;
    LODWORD(v50[4]) = v18;
    v28 = (OUTPUTDUPL_MGR *)(((HIDWORD(v50[4]) & 0xFFFFFE3F | ((v47 & 1 | (2 * (v21 & 1 | (2 * v48)))) << 6)) ^ (*(_DWORD *)(*((_QWORD *)this + 33) + 16LL) ^ (HIDWORD(v50[4]) & 0xFFFFFE3F | ((v47 & 1 | (2 * (v21 & 1 | (2 * v48)))) << 6))) & 3) & 0xFFFFFDD3);
    HIDWORD(v50[4]) = (unsigned int)v28 | (4
                                         * (*(_DWORD *)(*((_QWORD *)this + 34) + 16LL) & 3 | (8 * ((16 * v25) | v27 & 1))));
    if ( bTracingEnabled )
      OUTPUTDUPL_MGR::LogEtw(v28, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v50);
    v29 = (DXGDIAGNOSTICS *)*((_QWORD *)v26 + 10);
    if ( v29 )
      DXGDIAGNOSTICS::WriteDiagnosticEntry(v29, (struct _DXGK_DIAG_HEADER *)v50);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v33 = *((_QWORD *)this + 34);
    v34 = *((_QWORD *)this + 33);
    v45 = *((_DWORD *)this + 71);
    LODWORD(v44) = *(_DWORD *)(v33 + 16);
    LODWORD(v43) = v45;
    LODWORD(v42) = *(_DWORD *)(v34 + 16);
    LODWORD(v41) = *(_DWORD *)a2;
    LODWORD(v40) = *((_DWORD *)this + 11);
    McTemplateK0pqqqqqttttttttq_EtwWriteTransfer(
      v33,
      v34,
      v45,
      this,
      v40,
      v41,
      v42,
      v43,
      v44,
      v18,
      *((_DWORD *)this + 77),
      *((_DWORD *)this + 78),
      v21,
      v45,
      v48,
      v25,
      v47,
      updated);
  }
  return updated;
}
