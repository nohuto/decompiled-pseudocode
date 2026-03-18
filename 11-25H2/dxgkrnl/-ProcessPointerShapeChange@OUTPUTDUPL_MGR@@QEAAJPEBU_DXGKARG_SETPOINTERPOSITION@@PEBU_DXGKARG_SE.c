/*
 * XREFs of ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1402FC2D0
 * Callers:
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1401E1824 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140023A1C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1402FC5CC (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402FD63C (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402FD6F4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402FEBCC (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402FEFEC (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPointerShapeChange(
        DXGDIAGNOSTICS **this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        UINT a4,
        UINT a5)
{
  __int64 VidPnSourceId; // rax
  unsigned int v9; // edi
  __int128 v10; // xmm0
  __m128i v11; // xmm1
  int v12; // r12d
  __int64 v13; // r14
  OUTPUTDUPL_CONTEXT **v14; // r14
  __int64 v15; // rsi
  OUTPUTDUPL_CONTEXT *v16; // r9
  OUTPUTDUPL_MGR *v17; // rcx
  OUTPUTDUPL_MGR *v18; // rcx
  DXGDIAGNOSTICS *v19; // rcx
  int v20; // eax
  __int64 result; // rax
  __int64 v23; // [rsp+58h] [rbp-89h] BYREF
  char v24; // [rsp+60h] [rbp-81h]
  _DXGKARG_SETPOINTERSHAPE v25; // [rsp+68h] [rbp-79h] BYREF
  _DWORD v26[20]; // [rsp+90h] [rbp-51h] BYREF

  VidPnSourceId = a3->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 19) )
  {
    WdLogSingleEntry2(3LL, VidPnSourceId, this);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 1285;
  }
  else
  {
    v9 = 0;
    v10 = *(_OWORD *)&a3->Flags.0;
    v24 = 0;
    v11 = *(__m128i *)&a3->VidPnSourceId;
    v12 = 1;
    *(_OWORD *)&v25.Flags.0 = v10;
    v25.Height = a5;
    *(_QWORD *)&v10 = *(_QWORD *)&a3->XHot;
    *(__m128i *)&v25.VidPnSourceId = v11;
    v25.Width = a4;
    *(_QWORD *)&v25.XHot = v10;
    v13 = (__int64)this[2] + 72 * (unsigned int)_mm_cvtsi128_si32(v11);
    v23 = v13;
    if ( !v13 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(struct _KTHREAD **)(v23 + 24) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v23);
    v14 = *(OUTPUTDUPL_CONTEXT ***)(v13 + 48);
    LODWORD(v15) = 0;
    while ( v9 < *((_DWORD *)this + 2) )
    {
      v16 = *v14;
      if ( *v14 && *((_DWORD *)v16 + 79) )
      {
        if ( v12 )
        {
          if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled((OUTPUTDUPL_MGR *)this) )
          {
            memset(v26, 0, sizeof(v26));
            OUTPUTDUPL_MGR::InitializePacketHeader(v17, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v26);
            v26[13] = a3->VidPnSourceId;
            v26[14] = a3->Flags.Value;
            v26[15] = a4;
            v26[16] = a5;
            v26[17] = a3->Pitch;
            v26[18] = a3->XHot;
            v26[19] = a3->YHot;
            v26[1] = 80;
            v26[12] = 3;
            if ( bTracingEnabled )
              OUTPUTDUPL_MGR::LogEtw(v18, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v26);
            v19 = this[10];
            if ( v19 )
              DXGDIAGNOSTICS::WriteDiagnosticEntry(v19, (struct _DXGK_DIAG_HEADER *)v26);
            OUTPUTDUPL_MGR::LogPointerPositionChangeParams((OUTPUTDUPL_MGR *)this, a2);
            v16 = *v14;
          }
          v12 = 0;
        }
        v20 = OUTPUTDUPL_CONTEXT::ProcessPointerShape(v16, a2, &v25);
        v15 = v20;
        if ( v20 < 0 )
        {
          WdLogSingleEntry3(2LL, v25.VidPnSourceId, v9, v20);
          WdLogGlobalForLineNumber = 1335;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Process pointer shape failed in vidpn: 0x%I64x, idx: 0x%I64x, status: 0x%I64x",
            v25.VidPnSourceId,
            v9,
            v15,
            0LL,
            0LL);
          break;
        }
      }
      ++v9;
      ++v14;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v23);
    return (unsigned int)v15;
  }
  return result;
}
