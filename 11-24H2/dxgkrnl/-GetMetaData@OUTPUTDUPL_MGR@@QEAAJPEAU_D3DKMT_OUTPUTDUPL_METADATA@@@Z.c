/*
 * XREFs of ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1402B7398
 * Callers:
 *     _lambda_2348832400fa9218d4247e5b02438479_::_lambda_invoker_cdecl_ @ 0x1403D4200 (_lambda_2348832400fa9218d4247e5b02438479_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1400241D0 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B4368 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402B584C (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1402B5C6C (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1402B72BC (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1402F2AF8 (-GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetMetaData(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_METADATA *a2)
{
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // r14
  OUTPUTDUPL_CONTEXT **v9; // rdi
  unsigned int i; // esi
  __int64 v11; // rax
  bool v12; // zf
  __int64 Type; // rdx
  int DirtyRects; // esi
  char *Buffer; // rax
  char *v16; // rdi
  OUTPUTDUPL_MGR *v17; // rcx
  OUTPUTDUPL_MGR *v18; // rcx
  __int64 v19; // r8
  UINT v20; // eax
  DXGDIAGNOSTICS *v21; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  void *v25; // rdx
  __int64 v26; // [rsp+20h] [rbp-58h]
  _BYTE v27[16]; // [rsp+50h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  CurrentProcess = PsGetCurrentProcess(v5);
  CurrentThread = KeGetCurrentThread();
  v8 = CurrentProcess;
  if ( *(struct _KTHREAD **)(v4 + 24) != CurrentThread )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1735;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pContextList->Mutex.IsOwner()",
      1735LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *(OUTPUTDUPL_CONTEXT ***)(v4 + 48);
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 2) )
      goto LABEL_11;
    if ( *v9 )
    {
      v11 = PsGetCurrentProcess(CurrentThread);
      CurrentThread = *v9;
      v12 = *((_QWORD *)*v9 + 3) == v11;
    }
    else
    {
      v12 = v8 == 0;
    }
    if ( v12 )
      break;
    ++v9;
  }
  if ( !v9 )
  {
LABEL_11:
    DirtyRects = -1073741275;
    goto LABEL_12;
  }
  Type = a2->Type;
  if ( !(_DWORD)Type )
  {
    DirtyRects = OUTPUTDUPL_CONTEXT::GetDirtyRects(*v9, a2);
    goto LABEL_12;
  }
  if ( (_DWORD)Type == 1 )
  {
    v23 = *((_QWORD *)*v9 + 33);
    if ( *(_DWORD *)(v23 + 16) != 2 )
    {
      a2->BufferSizeRequired = 0;
      goto LABEL_26;
    }
    v24 = *(_QWORD *)(v23 + 8);
    v25 = **(void ***)(v24 + 48);
    LODWORD(v24) = 24 * *(_DWORD *)(v24 + 44);
    a2->BufferSizeRequired = v24;
    if ( a2->BufferSizeSupplied >= (unsigned int)v24 )
    {
      a2->pBuffer = v25;
LABEL_26:
      DirtyRects = 0;
      goto LABEL_12;
    }
    DirtyRects = -1073741789;
  }
  else
  {
    WdLogSingleEntry1(2LL, Type);
    v26 = a2->Type;
    WdLogGlobalForLineNumber = 1908;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid output duplication meta data type: ",
      v26,
      0LL,
      0LL,
      0LL,
      0LL);
    DirtyRects = -1073741811;
  }
LABEL_12:
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
  {
    Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(
                       *(AUTOEXPANDALLOCATION **)(v4 + 56),
                       a2->BufferSizeRequired + 72,
                       0);
    v16 = Buffer;
    if ( Buffer )
    {
      memset(Buffer, 0, 0x48uLL);
      OUTPUTDUPL_MGR::InitializePacketHeader(v17, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v16);
      v20 = a2->BufferSizeRequired + 72;
      *((_DWORD *)v16 + 12) = 8;
      *((_DWORD *)v16 + 1) = v20;
      *((_DWORD *)v16 + 13) = a2->VidPnSourceId;
      *((_DWORD *)v16 + 14) = a2->Type;
      *((_DWORD *)v16 + 15) = a2->BufferSizeSupplied;
      *((_DWORD *)v16 + 16) = a2->BufferSizeRequired;
      *((_DWORD *)v16 + 17) = DirtyRects;
      if ( DirtyRects >= 0 )
        memmove(v16 + 72, a2->pBuffer, a2->BufferSizeRequired);
      if ( bTracingEnabled )
        OUTPUTDUPL_MGR::LogEtw(v18, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v16, v19);
      v21 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 10);
      if ( v21 )
        DXGDIAGNOSTICS::WriteDiagnosticEntry(v21, (struct _DXGK_DIAG_HEADER *)v16);
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1928;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to expand tmp buffer for meta data logging packet.",
        1928LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DirtyRects = -1073741801;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
  return (unsigned int)DirtyRects;
}
