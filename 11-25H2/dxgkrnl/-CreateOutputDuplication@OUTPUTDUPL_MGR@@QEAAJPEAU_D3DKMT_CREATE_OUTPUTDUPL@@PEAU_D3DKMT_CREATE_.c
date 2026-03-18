/*
 * XREFs of ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1402FBF18
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1402FB5E4 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140023A1C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1400763F0 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1401899A4 (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1401E02B4 (-IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ??0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z @ 0x1401E18E8 (--0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402FD6F4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1402FEB58 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402FEBCC (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1403B7828 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1403EA850 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateOutputDuplication(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_CREATE_OUTPUTDUPL *a2,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a3,
        __int64 a4)
{
  OUTPUTDUPL_MGR *v7; // rcx
  unsigned int v8; // r8d
  struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209 Value; // r9d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  bool v11; // cf
  unsigned int v12; // r15d
  OUTPUTDUPL_MGR *v13; // rcx
  int IsOutputDuplAllowedForVidPn; // ebx
  struct DXGFASTMUTEX *v15; // rbx
  __int64 v16; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v18; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v25; // r9
  OUTPUTDUPL_CONTEXT **v26; // rsi
  OUTPUTDUPL_CONTEXT *v27; // rax
  __int64 v28; // rcx
  OUTPUTDUPL_CONTEXT *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  UINT v37; // eax
  DXGDIAGNOSTICS *v38; // rcx
  unsigned int v40; // [rsp+50h] [rbp-49h] BYREF
  _D3DKMT_VIDPNSOURCEOWNER_TYPE v41; // [rsp+54h] [rbp-45h] BYREF
  _BYTE v42[24]; // [rsp+58h] [rbp-41h] BYREF
  _DWORD v43[16]; // [rsp+70h] [rbp-29h] BYREF

  OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(this, (__int64)a2, (__int64)a3, a4);
  memset(v43, 0, sizeof(v43));
  OUTPUTDUPL_MGR::InitializePacketHeader(v7, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v43);
  v8 = *(_DWORD *)a3;
  Value = (struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209)a2->Flags.Value;
  VidPnSourceId = a2->VidPnSourceId;
  v11 = (*(_DWORD *)a3 & 0x10) != 0;
  v43[1] = 64;
  v43[13] = VidPnSourceId;
  v12 = -1;
  v43[12] = v11 ? 0xB : 0;
  v40 = -1;
  v41 = D3DKMT_VIDPNSOURCEOWNER_UNOWNED;
  IsOutputDuplAllowedForVidPn = OUTPUTDUPL_MGR::IsOutputDuplAllowedForVidPn(
                                  (ADAPTER_DISPLAY **)this,
                                  VidPnSourceId,
                                  (v8 >> 5) & 1,
                                  *(_BYTE *)&Value & 1,
                                  &v41);
  if ( IsOutputDuplAllowedForVidPn < 0 )
    goto LABEL_18;
  v15 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v42, v15, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v16);
  if ( OUTPUTDUPL_MGR::FindContextForProcess(this, v15, CurrentProcess, &v43[14]) )
  {
    v19 = a2->VidPnSourceId;
    v20 = PsGetCurrentProcess(v18);
    WdLogSingleEntry2(2LL, v20, v19);
    v21 = a2->VidPnSourceId;
    WdLogGlobalForLineNumber = 1523;
    v23 = PsGetCurrentProcess(v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Process 0x%I64x is already duplicating output 0x%I64x",
      v23,
      v21,
      0LL,
      0LL,
      0LL);
    IsOutputDuplAllowedForVidPn = -1073740008;
    v43[15] = -1073740008;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v43, 1);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v42);
    return (unsigned int)IsOutputDuplAllowedForVidPn;
  }
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, v15, 0LL, &v40);
  v12 = v40;
  v26 = ContextForProcess;
  IsOutputDuplAllowedForVidPn = -1073741653;
  if ( ContextForProcess )
  {
    if ( (*(_DWORD *)a3 & 0x10) != 0 )
    {
      v37 = 3;
      IsOutputDuplAllowedForVidPn = 0;
      if ( v41 == D3DKMT_VIDPNSOURCEOWNER_SHARED )
        v37 = 1;
      a2->RequiredKeyedMutexCount = v37;
      goto LABEL_17;
    }
    v27 = (OUTPUTDUPL_CONTEXT *)operator new(0x150uLL, 0x674D444Fu, 256LL, v25);
    if ( v27 )
    {
      v29 = OUTPUTDUPL_CONTEXT::OUTPUTDUPL_CONTEXT(
              v27,
              this,
              v12,
              (*(_DWORD *)a3 >> 1) & 1,
              (*(_DWORD *)a3 >> 3) & 1,
              (*(_DWORD *)a3 >> 2) & 1);
      *v26 = v29;
      if ( v29 )
      {
        IsOutputDuplAllowedForVidPn = OUTPUTDUPL_CONTEXT::Initialize(v29, a2);
        if ( IsOutputDuplAllowedForVidPn < 0 )
        {
          v31 = PsGetCurrentProcess(v30);
          WdLogSingleEntry2(2LL, a2->VidPnSourceId, v31);
          WdLogGlobalForLineNumber = 1547;
          v33 = PsGetCurrentProcess(v32);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to initialize OUTPUTDUPL_CONTEXT class for VidPn 0x%I64x, process 0x%I64x.",
            a2->VidPnSourceId,
            v33,
            0LL,
            0LL,
            0LL);
          if ( *v26 )
            OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(*v26);
          *v26 = 0LL;
        }
        goto LABEL_17;
      }
    }
    else
    {
      *v26 = 0LL;
    }
    v34 = PsGetCurrentProcess(v28);
    WdLogSingleEntry2(6LL, a2->VidPnSourceId, v34);
    WdLogGlobalForLineNumber = 1554;
    v36 = PsGetCurrentProcess(v35);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate OUTPUTDUPL_CONTEXT class for VidPn 0x%I64x, process 0x%I64x.",
      a2->VidPnSourceId,
      v36,
      0LL,
      0LL,
      0LL);
    IsOutputDuplAllowedForVidPn = -1073741801;
  }
LABEL_17:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v42);
LABEL_18:
  v43[14] = v12;
  v43[15] = IsOutputDuplAllowedForVidPn;
  if ( bTracingEnabled )
    OUTPUTDUPL_MGR::LogEtw(v13, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v43);
  v38 = (DXGDIAGNOSTICS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 117);
  if ( v38 )
    DXGDIAGNOSTICS::WriteDiagnosticEntry(v38, (struct _DXGK_DIAG_HEADER *)v43);
  return (unsigned int)IsOutputDuplAllowedForVidPn;
}
