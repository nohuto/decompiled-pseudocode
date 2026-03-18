/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x140348958
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1402DE034 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ @ 0x14002AFD0 (-CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x14003B7FC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z @ 0x14004973C (-SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x14004C9A4 (--0DXGPROCESS_NONPAGED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkIsGraphicsPartitionApplication @ 0x1401E6690 (DxgkIsGraphicsPartitionApplication.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140348EA0 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x140348F20 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(DXGPROCESS *this, void *a2)
{
  int v4; // edx
  __int64 CurrentProcess; // rax
  __int64 v6; // r9
  DXGPROCESS_NONPAGED *v7; // rax
  DXGPROCESS_NONPAGED *v8; // rax
  void *v9; // rcx
  _QWORD *v10; // rax
  __int64 ProcessImageFileName; // rax
  __int64 v12; // r9
  const void *v13; // rsi
  size_t v14; // rdi
  void *v15; // rcx
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v17; // rax
  unsigned int MaximumGlobalAdapterCount; // eax
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  DXGGLOBAL *v25; // rax
  unsigned int i; // edi
  int v27; // ecx
  NTSTATUS InformationProcess; // eax
  __int128 v29; // xmm0
  __int64 result; // rax
  const wchar_t *v31; // r9
  int ProcessInformation; // [rsp+50h] [rbp-59h] BYREF
  HANDLE ProcessHandle; // [rsp+58h] [rbp-51h] BYREF
  __int128 v34; // [rsp+60h] [rbp-49h]
  _QWORD v35[12]; // [rsp+70h] [rbp-39h] BYREF

  if ( *((_DWORD *)this + 10) )
    return 3221225485LL;
  v4 = 0;
  if ( *((PEPROCESS *)this + 7) == PsInitialSystemProcess )
    v4 = 2;
  *((_DWORD *)this + 102) = *((_DWORD *)this + 102) & 0xFFFFFFFD | v4;
  CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess);
  *((_DWORD *)this + 102) = *((_DWORD *)this + 102) & 0xFFFFFFF7 | (PsGetProcessWow64Process(CurrentProcess) != 0 ? 8 : 0);
  v7 = (DXGPROCESS_NONPAGED *)operator new(0xA0uLL, 0x4B677844u, 64LL, v6);
  if ( v7 )
    v8 = DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(v7);
  else
    v8 = 0LL;
  *((_QWORD *)this + 8) = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(6LL, this);
    v31 = L"DXGPROCESS (0x%I64x) failed to allocate m_pNonPagedData";
    WdLogGlobalForLineNumber = 1597;
    goto LABEL_35;
  }
  v9 = (void *)*((_QWORD *)this + 7);
  ProcessHandle = 0LL;
  if ( ObOpenObjectByPointer(v9, 0x200u, 0LL, 0, 0LL, 0, &ProcessHandle) >= 0 )
  {
    ProcessInformation = 2;
    memset(v35, 0, sizeof(v35));
    if ( ZwQueryInformationProcess(ProcessHandle, ProcessLdtSize|0x40, &ProcessInformation, 4u, 0LL) >= 0 )
    {
      v27 = 0;
      if ( ProcessInformation == 1 )
        v27 = 16;
      *((_DWORD *)this + 102) = v27 | *((_DWORD *)this + 102) & 0xFFFFFFEF;
    }
    InformationProcess = ZwQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)64, v35, 0x60u, 0LL);
    v29 = 0LL;
    v34 = 0LL;
    if ( (int)(InformationProcess + 0x80000000) < 0 || InformationProcess == -2147483643 )
    {
      LODWORD(v34) = HIDWORD(v35[0]);
      WORD2(v34) = v35[7];
      WORD3(v34) = WORD2(v35[7]);
      *((_QWORD *)&v34 + 1) = v35[2];
      v29 = v34;
    }
    *(_OWORD *)(*((_QWORD *)this + 8) + 140LL) = v29;
    ObCloseHandle(ProcessHandle, 0);
  }
  if ( (*((_DWORD *)this + 102) & 2) == 0 && *((_BYTE *)DXGGLOBAL::GetGlobal() + 304800) )
    *((_BYTE *)this + 574) = DxgkIsGraphicsPartitionApplication(*((PEPROCESS *)this + 7));
  *(_QWORD *)(*((_QWORD *)this + 8) + 32LL) = this;
  *(_QWORD *)(*((_QWORD *)this + 8) + 80LL) = a2;
  *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) = *((_QWORD *)this + 7);
  v10 = (_QWORD *)*((_QWORD *)this + 8);
  v10[8] = DxgkpProcessStatusChangeWork;
  v10[9] = this;
  v10[6] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*((_QWORD *)this + 7));
  v13 = (const void *)ProcessImageFileName;
  v14 = -1LL;
  do
    ++v14;
  while ( *(_BYTE *)(ProcessImageFileName + v14) );
  *(_QWORD *)(*((_QWORD *)this + 8) + 96LL) = operator new[](v14 + 1, 0x4B677844u, 64LL, v12);
  v15 = *(void **)(*((_QWORD *)this + 8) + 96LL);
  if ( !v15 )
  {
    WdLogSingleEntry1(6LL, this);
    v31 = L"DXGPROCESS (0x%I64x) failed to allocate m_pNonPagedData->m_ProcessName";
    WdLogGlobalForLineNumber = 1676;
    goto LABEL_35;
  }
  memmove(v15, v13, v14);
  *(_BYTE *)(v14 + *(_QWORD *)(*((_QWORD *)this + 8) + 96LL)) = 0;
  *(_BYTE *)(*((_QWORD *)this + 8) + 136LL) = (*((_DWORD *)this + 102) & 0x10) != 0;
  Global = DXGGLOBAL::GetGlobal();
  DXGVALIDATION::SetupValidationForProcess((struct DXGGLOBAL *)((char *)Global + 1620), this);
  v17 = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = DXGGLOBAL::GetMaximumGlobalAdapterCount(v17);
  v20 = MaximumGlobalAdapterCount;
  if ( !MaximumGlobalAdapterCount )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1687;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"MaximumGlobalAdapterCount > 0", 1687LL, 0LL, 0LL, 0LL, 0LL);
  }
  v21 = 8 * v20;
  if ( !is_mul_ok(v20, 8uLL) )
    v21 = -1LL;
  v22 = operator new[](v21, 0x4B677844u, 256LL, v19);
  *((_QWORD *)this + 6) = v22;
  if ( !v22 )
  {
    WdLogSingleEntry1(6LL, this);
    v31 = L"DXGPROCESS (0x%I64x) failed to allocate m_ppAdapterInfo";
    WdLogGlobalForLineNumber = 1696;
LABEL_35:
    DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v31, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  v24 = operator new[](0x30uLL, 0x4B677844u, 256LL, v23);
  *((_QWORD *)this + 9) = v24;
  if ( !v24 )
  {
    WdLogSingleEntry1(6LL, this);
    v31 = L"DXGPROCESS (0x%I64x) failed to allocate m_pCsStartRunningTime";
    WdLogGlobalForLineNumber = 1707;
    goto LABEL_35;
  }
  v25 = DXGGLOBAL::GetGlobal();
  *((_DWORD *)this + 20) = DXGGLOBAL::CSAccountingInProgress(v25);
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
