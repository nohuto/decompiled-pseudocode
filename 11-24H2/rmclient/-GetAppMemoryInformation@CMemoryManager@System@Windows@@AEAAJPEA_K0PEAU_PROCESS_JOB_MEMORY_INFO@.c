/*
 * XREFs of ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180003A70
 * Callers:
 *     ?get_ExpectedAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x1800194C0 (-get_ExpectedAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180002FB8 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003EF0 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 *     CempRpcBindToServer @ 0x180004080 (CempRpcBindToServer.c)
 *     ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x1800041DC (--0ModernResourceManagerProxy@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800149A0 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18001C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

signed int __fastcall Windows::System::CMemoryManager::GetAppMemoryInformation(
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        struct _PROCESS_JOB_MEMORY_INFO *a4)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  int v9; // eax
  ModernResourceManagerProxy *v10; // rax
  ModernResourceManagerProxy *v11; // rdi
  int v12; // eax
  void (*v13)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // rdx
  void (*v14)(unsigned __int64, unsigned __int64); // r8
  int v15; // r14d
  ModernResourceManagerProxy *v16; // r14
  signed int v17; // edi
  NTSTATUS v18; // eax
  ModernResourceManagerProxy *v19; // r14
  NTSTATUS v20; // eax
  bool v21; // zf
  __int64 v22; // rdi
  int v23; // eax
  __int128 v24; // xmm1
  unsigned __int64 v25; // xmm0_8
  signed int result; // eax
  signed int v27; // eax
  signed int v28; // eax
  int v29; // [rsp+30h] [rbp-99h] BYREF
  int v30; // [rsp+34h] [rbp-95h] BYREF
  ULONG v31; // [rsp+38h] [rbp-91h] BYREF
  __int128 v32; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-79h]
  __int128 ProcessInformation; // [rsp+58h] [rbp-71h] BYREF
  __int128 v35; // [rsp+68h] [rbp-61h]
  unsigned __int64 v36; // [rsp+78h] [rbp-51h]
  __int128 v37; // [rsp+80h] [rbp-49h] BYREF
  __int128 v38; // [rsp+90h] [rbp-39h]
  _OWORD SystemInformation[4]; // [rsp+A0h] [rbp-29h] BYREF

  v31 = 0;
  v36 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v37 = 0LL;
  v38 = 0LL;
  ProcessInformation = 0LL;
  v35 = 0LL;
  v9 = NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessBasePriority|0x40,
         &ProcessInformation,
         0x28u,
         0LL);
  if ( v9 < 0 )
  {
    result = RtlNtStatusToDosError(v9);
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
    return result;
  }
  RtlAcquireSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( Windows::System::CMemoryManager::s_pProxy )
    goto LABEL_31;
  v10 = (ModernResourceManagerProxy *)operator new(0x70uLL);
  if ( !v10 || (v11 = ModernResourceManagerProxy::ModernResourceManagerProxy(v10)) == 0LL )
  {
    RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
    goto LABEL_16;
  }
  v12 = CempRpcBindToServer(&unk_18001E760);
  v15 = v12 | 0x10000000;
  if ( v12 < 0 || (v15 = ModernResourceManagerProxy::RegisterCommitMemoryCallback(v11, v13, v14), v15 < 0) )
  {
    RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
    (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v15 >= 0 )
      goto LABEL_7;
LABEL_16:
    v7 = v36;
    v8 = v36;
    goto LABEL_17;
  }
  if ( Windows::System::CMemoryManager::s_pProxy )
    (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy + 16LL))(Windows::System::CMemoryManager::s_pProxy);
  Windows::System::CMemoryManager::s_pProxy = v11;
LABEL_31:
  RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
LABEL_7:
  v16 = Windows::System::CMemoryManager::s_pProxy;
  v30 = 0;
  v29 = 0;
  v32 = 0LL;
  v33 = 0LL;
  RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 96);
  *((_DWORD *)v16 + 26) = GetCurrentThreadId();
  v17 = ModernResourceManagerProxy::RegisterWithServer(v16);
  if ( v17 >= 0 )
  {
    v29 = 24;
    v18 = NtQueryWnfStateData((char *)v16 + 48, 0LL, 0LL, &v30, &v32, &v29);
    if ( v18 >= 0 )
    {
      v7 = *((_QWORD *)&v32 + 1);
      *((_DWORD *)v16 + 26) = 0;
      RtlReleaseSRWLockExclusive((char *)v16 + 96);
      goto LABEL_10;
    }
    v28 = RtlNtStatusToDosError(v18);
    v17 = v28;
    if ( v28 > 0 )
      v17 = (unsigned __int16)v28 | 0x80070000;
  }
  *((_DWORD *)v16 + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)v16 + 96);
  if ( v17 < 0 )
    return v17;
LABEL_10:
  v19 = Windows::System::CMemoryManager::s_pProxy;
  v30 = 0;
  v29 = 0;
  v32 = 0LL;
  v33 = 0LL;
  RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 96);
  *((_DWORD *)v19 + 26) = GetCurrentThreadId();
  v17 = ModernResourceManagerProxy::RegisterWithServer(v19);
  if ( v17 >= 0 )
  {
    v29 = 24;
    v20 = NtQueryWnfStateData((char *)v19 + 48, 0LL, 0LL, &v30, &v32, &v29);
    if ( v20 >= 0 )
    {
      v8 = v33;
      v21 = v33 == 0;
      *((_DWORD *)v19 + 26) = 0;
      if ( v21 )
        v8 = *((_QWORD *)&v32 + 1);
      RtlReleaseSRWLockExclusive((char *)v19 + 96);
      goto LABEL_17;
    }
    v27 = RtlNtStatusToDosError(v20);
    v17 = v27;
    if ( v27 > 0 )
      v17 = (unsigned __int16)v27 | 0x80070000;
  }
  *((_DWORD *)v19 + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)v19 + 96);
  if ( v17 < 0 )
    return v17;
LABEL_17:
  if ( ((v7 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
LABEL_20:
    if ( a2 )
      *a2 = v7;
    if ( a3 )
      *a3 = v8;
    if ( a4 )
    {
      v24 = v35;
      *(_OWORD *)a4 = ProcessInformation;
      v25 = v36;
      *((_OWORD *)a4 + 1) = v24;
      *((_QWORD *)a4 + 4) = v25;
    }
    return 0;
  }
  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  v22 = DWORD2(SystemInformation[0]);
  v23 = NtQuerySystemInformation(MaxSystemInfoClass|SystemFullMemoryInformation, &v37, 0x20u, &v31);
  if ( v23 >= 0 )
  {
    v7 = v22 * v38;
    goto LABEL_20;
  }
  result = RtlNtStatusToDosError(v23);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
