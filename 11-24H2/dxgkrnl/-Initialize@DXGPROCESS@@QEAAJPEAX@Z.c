/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x140336450
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x14034CE14 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ @ 0x14002B770 (-CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x140039DBC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z @ 0x140048E28 (-SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x14004C454 (--0DXGPROCESS_NONPAGED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkIsGraphicsPartitionApplication @ 0x1401EBFC8 (DxgkIsGraphicsPartitionApplication.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x1403369A0 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x140336A20 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(DXGPROCESS *this, void *a2)
{
  int v4; // edx
  __int64 CurrentProcess; // rax
  DXGPROCESS_NONPAGED *v6; // rax
  DXGPROCESS_NONPAGED *v7; // rax
  void *v8; // rcx
  _QWORD *v9; // rax
  __int64 ProcessImageFileName; // rax
  const void *v11; // rsi
  size_t v12; // rdi
  void *v13; // rcx
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v15; // rax
  unsigned int MaximumGlobalAdapterCount; // eax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  DXGGLOBAL *v21; // rax
  unsigned int i; // edi
  int v23; // ecx
  NTSTATUS InformationProcess; // eax
  __int128 v25; // xmm0
  __int64 result; // rax
  const wchar_t *v27; // r9
  int ProcessInformation; // [rsp+50h] [rbp-59h] BYREF
  HANDLE ProcessHandle; // [rsp+58h] [rbp-51h] BYREF
  __int128 v30; // [rsp+60h] [rbp-49h]
  _QWORD v31[12]; // [rsp+70h] [rbp-39h] BYREF

  if ( *((_DWORD *)this + 10) )
    return 3221225485LL;
  v4 = 0;
  if ( *((PEPROCESS *)this + 7) == PsInitialSystemProcess )
    v4 = 2;
  *((_DWORD *)this + 102) = *((_DWORD *)this + 102) & 0xFFFFFFFD | v4;
  CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess);
  *((_DWORD *)this + 102) = *((_DWORD *)this + 102) & 0xFFFFFFF7 | (PsGetProcessWow64Process(CurrentProcess) != 0 ? 8 : 0);
  v6 = (DXGPROCESS_NONPAGED *)operator new(0xA0uLL, 0x4B677844u, 64LL);
  if ( v6 )
    v7 = DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(v6);
  else
    v7 = 0LL;
  *((_QWORD *)this + 8) = v7;
  if ( !v7 )
  {
    WdLogSingleEntry1(6LL, this);
    v27 = L"DXGPROCESS (0x%I64x) failed to allocate m_pNonPagedData";
    WdLogGlobalForLineNumber = 1598;
    goto LABEL_35;
  }
  v8 = (void *)*((_QWORD *)this + 7);
  ProcessHandle = 0LL;
  if ( ObOpenObjectByPointer(v8, 0x200u, 0LL, 0, 0LL, 0, &ProcessHandle) >= 0 )
  {
    ProcessInformation = 2;
    memset(v31, 0, sizeof(v31));
    if ( ZwQueryInformationProcess(ProcessHandle, ProcessLdtSize|0x40, &ProcessInformation, 4u, 0LL) >= 0 )
    {
      v23 = 0;
      if ( ProcessInformation == 1 )
        v23 = 16;
      *((_DWORD *)this + 102) = v23 | *((_DWORD *)this + 102) & 0xFFFFFFEF;
    }
    InformationProcess = ZwQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)64, v31, 0x60u, 0LL);
    v25 = 0LL;
    v30 = 0LL;
    if ( (int)(InformationProcess + 0x80000000) < 0 || InformationProcess == -2147483643 )
    {
      LODWORD(v30) = HIDWORD(v31[0]);
      WORD2(v30) = v31[7];
      WORD3(v30) = WORD2(v31[7]);
      *((_QWORD *)&v30 + 1) = v31[2];
      v25 = v30;
    }
    *(_OWORD *)(*((_QWORD *)this + 8) + 140LL) = v25;
    ObCloseHandle(ProcessHandle, 0);
  }
  if ( (*((_DWORD *)this + 102) & 2) == 0 && *((_BYTE *)DXGGLOBAL::GetGlobal() + 304880) )
    *((_BYTE *)this + 574) = DxgkIsGraphicsPartitionApplication(*((PEPROCESS *)this + 7));
  *(_QWORD *)(*((_QWORD *)this + 8) + 32LL) = this;
  *(_QWORD *)(*((_QWORD *)this + 8) + 80LL) = a2;
  *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) = *((_QWORD *)this + 7);
  v9 = (_QWORD *)*((_QWORD *)this + 8);
  v9[8] = DxgkpProcessStatusChangeWork;
  v9[9] = this;
  v9[6] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*((_QWORD *)this + 7));
  v11 = (const void *)ProcessImageFileName;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_BYTE *)(ProcessImageFileName + v12) );
  *(_QWORD *)(*((_QWORD *)this + 8) + 96LL) = operator new[](v12 + 1, 0x4B677844u, 64LL);
  v13 = *(void **)(*((_QWORD *)this + 8) + 96LL);
  if ( !v13 )
  {
    WdLogSingleEntry1(6LL, this);
    v27 = L"DXGPROCESS (0x%I64x) failed to allocate m_pNonPagedData->m_ProcessName";
    WdLogGlobalForLineNumber = 1677;
    goto LABEL_35;
  }
  memmove(v13, v11, v12);
  *(_BYTE *)(v12 + *(_QWORD *)(*((_QWORD *)this + 8) + 96LL)) = 0;
  *(_BYTE *)(*((_QWORD *)this + 8) + 136LL) = (*((_DWORD *)this + 102) & 0x10) != 0;
  Global = DXGGLOBAL::GetGlobal();
  DXGVALIDATION::SetupValidationForProcess((struct DXGGLOBAL *)((char *)Global + 1652), this);
  v15 = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = DXGGLOBAL::GetMaximumGlobalAdapterCount(v15);
  v17 = MaximumGlobalAdapterCount;
  if ( !MaximumGlobalAdapterCount )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1688;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"MaximumGlobalAdapterCount > 0",
      1688LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v18 = 8 * v17;
  if ( !is_mul_ok(v17, 8uLL) )
    v18 = -1LL;
  v19 = operator new[](v18, 0x4B677844u, 256LL);
  *((_QWORD *)this + 6) = v19;
  if ( !v19 )
  {
    WdLogSingleEntry1(6LL, this);
    v27 = L"DXGPROCESS (0x%I64x) failed to allocate m_ppAdapterInfo";
    WdLogGlobalForLineNumber = 1697;
LABEL_35:
    DxgkLogInternalTriageEvent(0LL, 262145LL, 0xFFFFFFFFLL, v27, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  v20 = operator new[](0x30uLL, 0x4B677844u, 256LL);
  *((_QWORD *)this + 9) = v20;
  if ( !v20 )
  {
    WdLogSingleEntry1(6LL, this);
    v27 = L"DXGPROCESS (0x%I64x) failed to allocate m_pCsStartRunningTime";
    WdLogGlobalForLineNumber = 1708;
    goto LABEL_35;
  }
  v21 = DXGGLOBAL::GetGlobal();
  *((_DWORD *)this + 20) = DXGGLOBAL::CSAccountingInProgress(v21);
  for ( i = 0; i < 2; ++i )
  {
    DXGGLOBAL::GetGlobal();
    if ( DXGGLOBAL::m_pDxgmmsExport[i] )
    {
      result = DXGPROCESS::DeferredInitialize(this, i);
      if ( (int)result < 0 )
        return result;
    }
  }
  DXGPROCESS::AcquireReference(this);
  if ( (*((_DWORD *)this + 102) & 0x100) != 0 )
    *(_QWORD *)(*((_QWORD *)this + 8) + 128LL) = *(_QWORD *)(*((_QWORD *)this + 74) + 592LL) + 160LL;
  *((_DWORD *)this + 10) = 1;
  return 0LL;
}
