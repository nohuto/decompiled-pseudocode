/*
 * XREFs of ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1402FCD78
 * Callers:
 *     ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1402FCC48 (-ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140023A1C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     McTemplateK0pqqttq_EtwWriteTransfer @ 0x1400543A0 (McTemplateK0pqqttq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402A8390 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402FD6F4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402FDF58 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402FEBCC (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402FEFEC (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ReleaseFrame(
        OUTPUTDUPL_CONTEXT *this,
        struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  OUTPUTDUPL_MGR *v6; // rcx
  __int64 v7; // r8
  int v8; // ecx
  UINT v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  OUTPUTDUPL_MGR *v12; // rsi
  unsigned int v13; // edx
  __int64 v14; // r8
  OUTPUTDUPL_MGR *v15; // rcx
  DXGDIAGNOSTICS *v16; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _DWORD *v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // [rsp+20h] [rbp-59h]
  __int64 v26; // [rsp+28h] [rbp-51h]
  __int64 v27; // [rsp+30h] [rbp-49h]
  __int64 v28; // [rsp+38h] [rbp-41h]
  __int64 v29; // [rsp+40h] [rbp-39h]
  __int64 v30; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v31[16]; // [rsp+60h] [rbp-19h] BYREF

  LODWORD(v4) = 0;
  memset(v31, 0, sizeof(v31));
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    OUTPUTDUPL_MGR::InitializePacketHeader(v6, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v31);
    v8 = *((_DWORD *)this + 71);
    v31[13] = *((_DWORD *)this + 4);
    v31[1] = 64;
    v31[14] = v31[14] & 0xFFFFFFF3 | (4 * (v8 & 1));
    v31[12] = 10;
  }
  v9 = *((_DWORD *)this + 11);
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
  {
    *((_DWORD *)this + 11) = ++v9;
    if ( v9 >= *((_DWORD *)this + 10) )
    {
      *((_DWORD *)this + 11) = 0;
      v9 = 0;
    }
  }
  a2->NextKeyMutexIdx = v9;
  v10 = *((_QWORD *)this + 33);
  *(_QWORD *)v10 = 0LL;
  *(_DWORD *)(v10 + 20) = 0;
  *(_DWORD *)(v10 + 40) = 0;
  if ( *(_DWORD *)(v10 + 16) != 1 )
  {
    *(_DWORD *)(v10 + 16) = 0;
    v11 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_DWORD *)(v11 + 16) = 0;
    *(_DWORD *)(v11 + 24) = 0;
    *(_DWORD *)(v11 + 44) = 0;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 && *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) == 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2346;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!((m_pCurrentFrameInfo->PresentUpdateStatus == PRODUCER_INFO_PRESENT_UPDATE_PENDING) && (m_pAccumulatedFrameInfo->"
       "PresentUpdateStatus == PRODUCER_INFO_PRESENT_UPDATE_PENDING))",
      2346LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 71) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) == 2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2356;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"m_pAccumulatedFrameInfo->PresentUpdateStatus != PRODUCER_INFO_PRESENT_UPDATE_READY",
        2356LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v18 = *((_QWORD *)this + 34);
    v19 = (_QWORD *)*((_QWORD *)this + 33);
    *((_QWORD *)this + 34) = v19;
    *((_QWORD *)this + 33) = v18;
    if ( !*(_DWORD *)(v18 + 20) )
    {
      *(_QWORD *)v18 = *v19;
      *(_OWORD *)(*((_QWORD *)this + 33) + 24LL) = *(_OWORD *)(*((_QWORD *)this + 34) + 24LL);
    }
    v20 = (_DWORD *)*((_QWORD *)this + 33);
    *((_DWORD *)this + 71) = 0;
    if ( (v20[5] || v20[10]) && v20[4] != 1 )
    {
      v21 = *((unsigned int *)this + 11);
      v30 = 0LL;
      v22 = DXGDXGIKEYEDMUTEX::AcquireCPU(*((_QWORD *)this + v21 + 6), v5, v7, &v30, 0LL, 1);
      v4 = v22;
      if ( v22 == 258 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2385;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"Status != STATUS_TIMEOUT", 2385LL, 0LL, 0LL, 0LL, 0LL);
      }
      else if ( v22 < 0 )
      {
        WdLogSingleEntry1(2LL, v22);
        WdLogGlobalForLineNumber = 2390;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"GetCurrentKeyedMutex()->Acquire failed with something other than STATUS_TIMEOUT. Status = 0x%I64x",
          v4,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v4;
      }
      DXGDXGIKEYEDMUTEX::Release(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 1uLL, 0LL, 1);
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
        v31[14] |= 8u;
    }
  }
  v12 = (OUTPUTDUPL_MGR *)*((_QWORD *)this + 37);
  *((_DWORD *)this + 77) = 0;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(v12) )
  {
    v15 = (OUTPUTDUPL_MGR *)(*(_DWORD *)(*((_QWORD *)this + 33) + 16LL) & 3);
    v13 = v13 & 0xFFFFFFFC | *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) & 3;
    v31[14] = v13;
    if ( bTracingEnabled )
    {
      OUTPUTDUPL_MGR::LogEtw(v15, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v31);
      v13 = v31[14];
    }
    v16 = (DXGDIAGNOSTICS *)*((_QWORD *)v12 + 10);
    if ( v16 )
    {
      DXGDIAGNOSTICS::WriteDiagnosticEntry(v16, (struct _DXGK_DIAG_HEADER *)v31);
      v13 = v31[14];
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v29) = v4;
    v23 = (v13 >> 3) & 1;
    v24 = (v13 >> 2) & 1;
    LODWORD(v28) = v23;
    LODWORD(v27) = v24;
    LODWORD(v26) = *(_DWORD *)(*((_QWORD *)this + 33) + 16LL);
    LODWORD(v25) = *((_DWORD *)this + 11);
    McTemplateK0pqqttq_EtwWriteTransfer(v23, v24, v14, this, v25, v26, v27, v28, v29);
  }
  return (unsigned int)v4;
}
