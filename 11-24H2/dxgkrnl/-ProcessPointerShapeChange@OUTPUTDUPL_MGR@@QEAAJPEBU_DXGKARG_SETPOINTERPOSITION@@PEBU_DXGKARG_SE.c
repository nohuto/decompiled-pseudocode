/*
 * XREFs of ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x140388F20
 * Callers:
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1401E6A54 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1400241D0 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B42B0 (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B4368 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B584C (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402B5C6C (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x140389220 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
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
  __int64 v14; // rcx
  OUTPUTDUPL_CONTEXT **v15; // r14
  __int64 v16; // rsi
  OUTPUTDUPL_CONTEXT *v17; // r9
  OUTPUTDUPL_MGR *v18; // rcx
  OUTPUTDUPL_MGR *v19; // rcx
  __int64 v20; // r8
  DXGDIAGNOSTICS *v21; // rcx
  int v22; // eax
  __int64 result; // rax
  __int64 v25; // [rsp+58h] [rbp-89h] BYREF
  char v26; // [rsp+60h] [rbp-81h]
  _DXGKARG_SETPOINTERSHAPE v27; // [rsp+68h] [rbp-79h] BYREF
  _DWORD v28[20]; // [rsp+90h] [rbp-51h] BYREF

  VidPnSourceId = a3->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 19) )
  {
    WdLogSingleEntry2(3LL, VidPnSourceId, this);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 1291;
  }
  else
  {
    v9 = 0;
    v10 = *(_OWORD *)&a3->Flags.0;
    v26 = 0;
    v11 = *(__m128i *)&a3->VidPnSourceId;
    v12 = 1;
    *(_OWORD *)&v27.Flags.0 = v10;
    v27.Height = a5;
    *(_QWORD *)&v10 = *(_QWORD *)&a3->XHot;
    *(__m128i *)&v27.VidPnSourceId = v11;
    v27.Width = a4;
    *(_QWORD *)&v27.XHot = v10;
    v13 = (__int64)this[2] + 72 * (unsigned int)_mm_cvtsi128_si32(v11);
    v14 = v13;
    v25 = v13;
    if ( !v13 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 637;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
      v14 = 0LL;
    }
    if ( *(struct _KTHREAD **)(v14 + 24) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 644;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v25);
    v15 = *(OUTPUTDUPL_CONTEXT ***)(v13 + 48);
    LODWORD(v16) = 0;
    while ( v9 < *((_DWORD *)this + 2) )
    {
      v17 = *v15;
      if ( *v15 && *((_DWORD *)v17 + 79) )
      {
        if ( v12 )
        {
          if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled((OUTPUTDUPL_MGR *)this) )
          {
            memset(v28, 0, sizeof(v28));
            OUTPUTDUPL_MGR::InitializePacketHeader(v18, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v28);
            v28[13] = a3->VidPnSourceId;
            v28[14] = a3->Flags.Value;
            v28[15] = a4;
            v28[16] = a5;
            v28[17] = a3->Pitch;
            v28[18] = a3->XHot;
            v28[19] = a3->YHot;
            v28[1] = 80;
            v28[12] = 3;
            if ( bTracingEnabled )
              OUTPUTDUPL_MGR::LogEtw(v19, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v28, v20);
            v21 = this[10];
            if ( v21 )
              DXGDIAGNOSTICS::WriteDiagnosticEntry(v21, (struct _DXGK_DIAG_HEADER *)v28);
            OUTPUTDUPL_MGR::LogPointerPositionChangeParams((OUTPUTDUPL_MGR *)this, a2);
            v17 = *v15;
          }
          v12 = 0;
        }
        v22 = OUTPUTDUPL_CONTEXT::ProcessPointerShape(v17, a2, &v27);
        v16 = v22;
        if ( v22 < 0 )
        {
          WdLogSingleEntry3(2LL, v27.VidPnSourceId, v9, v22);
          WdLogGlobalForLineNumber = 1341;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Process pointer shape failed in vidpn: 0x%I64x, idx: 0x%I64x, status: 0x%I64x",
            v27.VidPnSourceId,
            v9,
            v16,
            0LL,
            0LL);
          break;
        }
      }
      ++v9;
      ++v15;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v25);
    return (unsigned int)v16;
  }
  return result;
}
