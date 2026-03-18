/*
 * XREFs of ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1402B8964
 * Callers:
 *     OutputDuplGetDebugInfo @ 0x1401E67E8 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1401E68F8 (OutputDuplGetDiagnosticBuffer.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1402B7698 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1402B8690 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@@SAJPEAVDXGADAPTER@@_NI.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1402D5328 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_DESTROY_OUTPUTDUPL@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1403B8E14 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_DESTROY_OUTPUTDUPL@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1403C947C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1403D14C4 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1403D4374 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_M.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1403ED260 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x140007CCC (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1402B8DC8 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 */

__int64 __fastcall FindOutputDuplManager(
        struct DXGADAPTER *this,
        unsigned int a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct DXGADAPTER **a5,
        unsigned __int64 *a6,
        struct OUTPUTDUPL_MGR **a7)
{
  __int64 v7; // r13
  DXGADAPTER *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 v14; // r14
  volatile signed __int64 *v15; // r14
  int IndirectDisplayPairedAdapter; // eax
  DXGADAPTER *v17; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-18h]
  _BYTE v19[16]; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v20; // [rsp+B0h] [rbp+40h]

  v7 = a2;
  v10 = 0LL;
  v17 = 0LL;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8872;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_pAdapter != NULL", 8872LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = *((_QWORD *)this + 390);
  if ( v11 )
  {
    if ( (unsigned int)v7 >= *(_DWORD *)(v11 + 96) )
    {
      LODWORD(v14) = -1073741811;
      WdLogSingleEntry2(2LL, v7, -1073741811LL);
      WdLogGlobalForLineNumber = 8885;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v7,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_21;
    }
    v10 = this;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v12 = -1LL;
  }
  else
  {
    if ( a5 )
    {
      LODWORD(v14) = -1073741637;
      WdLogSingleEntry2(4LL, this, -1073741637LL);
      WdLogGlobalForLineNumber = 8898;
      goto LABEL_21;
    }
    v12 = v20;
  }
  if ( a3 )
  {
    if ( *((_QWORD *)this + 391) )
    {
      v17 = this;
      _InterlockedIncrement64((volatile signed __int64 *)this + 3);
      v18 = -1LL;
LABEL_9:
      *a3 = v17;
      *a4 = v18;
      v17 = 0LL;
      goto LABEL_10;
    }
    if ( (*((_DWORD *)this + 111) & 0x100) != 0 )
    {
      IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(this, 0, (struct DXGADAPTER_REFERENCE *)&v17);
      v14 = IndirectDisplayPairedAdapter;
      if ( IndirectDisplayPairedAdapter >= 0 )
        goto LABEL_9;
      WdLogSingleEntry2(2LL, this, IndirectDisplayPairedAdapter);
      WdLogGlobalForLineNumber = 8927;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
        (__int64)this,
        v14,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v19);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      v15 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 125);
      v17 = (DXGADAPTER *)v15;
      if ( v15 )
      {
        _InterlockedIncrement64(v15 + 3);
        v18 = -1LL;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
        goto LABEL_9;
      }
      LODWORD(v14) = -1073741637;
      WdLogSingleEntry2(2LL, this, -1073741637LL);
      WdLogGlobalForLineNumber = 8941;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"WARP render only adapter is not ready to be used with display only adapter 0x%I64x, returning 0x%I64x.",
        (__int64)this,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
    }
    if ( v17 )
      DXGADAPTER::ReleaseReference(v17);
    v17 = 0LL;
    if ( v10 )
      DXGADAPTER::ReleaseReference(v10);
LABEL_21:
    WdLogSingleEntry3(2LL, this, v7, (int)v14);
    WdLogGlobalForLineNumber = 3183;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      (__int64)this,
      v7,
      (int)v14,
      0LL,
      0LL);
    return (unsigned int)v14;
  }
LABEL_10:
  if ( a5 )
  {
    *a5 = v10;
    v10 = 0LL;
    *a6 = v12;
  }
  v17 = 0LL;
  if ( v10 )
    DXGADAPTER::ReleaseReference(v10);
  if ( a3 && !*a3 || a5 && !*a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3188;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(!o_ppRenderAdapter || *o_ppRenderAdapter != NULL) && (!o_ppDisplayAdapter || *o_ppDisplayAdapter != NULL)",
      3188LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a7 = *(struct OUTPUTDUPL_MGR **)(*((_QWORD *)*a5 + 390) + 120LL);
  return 0LL;
}
