/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x1800989B0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x180135940 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1801359E0 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x180099350 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpValidateRemoteDebugInformation @ 0x180099670 (RtlpValidateRemoteDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x180099AB0 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwner @ 0x180099C74 (RtlpQueryCriticalSectionOwner.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x180099D74 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlQueryCriticalSectionOwner @ 0x180099E40 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessModuleInformation @ 0x180099F54 (RtlQueryProcessModuleInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x18009A090 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x18009AA00 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x18009AC80 (RtlQueryProcessLockInformation.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x1801636E0 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x1801639A0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x180163C80 (NtTerminateThread.c)
 *     NtPowerInformation @ 0x180163DF0 (NtPowerInformation.c)
 *     NtCreateThreadEx @ 0x180164B30 (NtCreateThreadEx.c)
 *     NtQuerySystemInformationEx @ 0x180165FD0 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801678D0 (_alloca_probe.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryProcessDebugInformation(__int128 *a1, int a2, __int64 a3)
{
  NTSTATUS ProcessModuleInformation; // ebx
  HANDLE v7; // r13
  __int128 *v8; // rax
  int v9; // r14d
  __int64 v10; // r8
  bool v11; // dl
  __int128 *v12; // rcx
  HANDLE v13; // rax
  struct _TEB *v14; // rcx
  __int64 WowTebOffset; // rax
  _WORD *v16; // rax
  void (__fastcall __noreturn *v17)(); // rbx
  int v18; // r12d
  __int64 result; // rax
  HANDLE v20; // r15
  HANDLE v21; // r14
  size_t v22; // rax
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rcx
  HANDLE *v26; // rbx
  int v27; // eax
  int v28; // edx
  __int16 v29; // cx
  __int64 v30; // r8
  HANDLE v31; // r14
  NTSTATUS v32; // eax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  void *v35; // rsp
  void *v36; // rsp
  HANDLE v37; // [rsp+60h] [rbp+0h] BYREF
  HANDLE v38; // [rsp+68h] [rbp+8h]
  HANDLE ProcessHandle; // [rsp+70h] [rbp+10h] BYREF
  unsigned int v40; // [rsp+78h] [rbp+18h] BYREF
  __int64 v41; // [rsp+80h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+28h] BYREF
  __int128 v43; // [rsp+90h] [rbp+30h] BYREF
  void (__fastcall __noreturn *v44)(); // [rsp+A0h] [rbp+40h]
  __int128 v45; // [rsp+A8h] [rbp+48h] BYREF
  __int128 v46; // [rsp+B8h] [rbp+58h]
  __int128 v47; // [rsp+C8h] [rbp+68h]
  LARGE_INTEGER Timeout; // [rsp+D8h] [rbp+78h] BYREF
  __int128 v49; // [rsp+E0h] [rbp+80h] BYREF
  NTSTATUS (__stdcall *v50)(HANDLE, PROCESSINFOCLASS, PVOID, ULONG, PULONG); // [rsp+F0h] [rbp+90h]
  __int128 v51; // [rsp+F8h] [rbp+98h] BYREF
  __int128 v52; // [rsp+108h] [rbp+A8h]
  __int64 v53; // [rsp+118h] [rbp+B8h]
  _QWORD v54[4]; // [rsp+120h] [rbp+C0h] BYREF
  __int128 v55; // [rsp+140h] [rbp+E0h]
  _OWORD v56[2]; // [rsp+150h] [rbp+F0h] BYREF
  __int64 v57; // [rsp+170h] [rbp+110h]
  int v58; // [rsp+178h] [rbp+118h]
  _QWORD ProcessInformation[2]; // [rsp+180h] [rbp+120h] BYREF
  __int128 v60; // [rsp+190h] [rbp+130h]
  __int128 v61; // [rsp+1A0h] [rbp+140h]
  __int128 v62; // [rsp+1B0h] [rbp+150h]
  _QWORD v63[6]; // [rsp+1C0h] [rbp+160h] BYREF
  __int128 v64; // [rsp+1F0h] [rbp+190h]
  __int64 v65; // [rsp+200h] [rbp+1A0h]
  _BYTE v66[4]; // [rsp+230h] [rbp+1D0h] BYREF
  int v67; // [rsp+234h] [rbp+1D4h]
  void (__fastcall __noreturn *v68)(); // [rsp+270h] [rbp+210h]
  __int128 v69; // [rsp+360h] [rbp+300h] BYREF
  HANDLE v70; // [rsp+370h] [rbp+310h]

  v57 = 0LL;
  v58 = 0;
  *(_QWORD *)&v47 = 0LL;
  DWORD2(v47) = 0;
  LODWORD(v38) = 0;
  v44 = RtlpQueryProcessDebugInformationRemote;
  ProcessModuleInformation = 0;
  v37 = 0LL;
  v50 = 0LL;
  v7 = 0LL;
  v8 = *(__int128 **)(a3 + 48);
  memset(v56, 0, sizeof(v56));
  v45 = 0LL;
  v46 = 0LL;
  v43 = 0LL;
  v49 = 0LL;
  if ( v8 && v8 != a1 )
    return 3221225485LL;
  v9 = a2 & 0x3FFFFFBE;
  if ( (a2 & 0x3FFFFFBE) != 0 && (a2 & 0x40000000) != 0 )
    return 3221225659LL;
  *(_DWORD *)(a3 + 64) = a2;
  v10 = *(_QWORD *)(a3 + 72);
  Timeout.QuadPart = -600000000LL;
  if ( v10 )
    memset_thunk_772440563353939046((void *)(a3 + 208), 0, v10 - 208);
  *(_QWORD *)(a3 + 72) = 208LL;
  if ( a2 == -2147481600 )
    return RtlpQueryCriticalSectionOwner(a1, a3);
  v11 = 0;
  if ( !v9 )
    v11 = a2 < 0 && (a2 & 0x41) != 0;
  if ( v11 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      v12 = a1;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 )
    {
      v12 = 0LL;
    }
    else
    {
      *((_QWORD *)&v45 + 1) = 0LL;
      DWORD2(v46) = 0;
      *(_QWORD *)&v46 = 0LL;
      LODWORD(v45) = 48;
      v47 = 0LL;
      v43 = (unsigned __int64)a1;
      if ( (int)NtOpenProcess(&v37, 0x1FFFFFLL, &v45, &v43) >= 0 )
      {
        v13 = v37;
      }
      else
      {
        v13 = 0LL;
        v37 = 0LL;
      }
      *(_QWORD *)&v49 = v13;
      v12 = &v49;
      *((_QWORD *)&v49 + 1) = RtlpQueryReadVirtualMemory;
      v50 = NtQueryInformationProcess;
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 || (a2 & 0x40000000) != 0 || v37 )
  {
    if ( ((a2 & 0x41) == 0
       || (ProcessModuleInformation = RtlQueryProcessModuleInformation(v12, (unsigned int)a2, a3)) == 0)
      && ((a2 & 2) == 0 || (ProcessModuleInformation = RtlQueryProcessBackTraceInformation(a3)) == 0)
      && ((a2 & 0x20) == 0 || (ProcessModuleInformation = RtlQueryProcessLockInformation(a3)) == 0)
      && ((a2 & 0x21C) == 0 || (ProcessModuleInformation = RtlQueryProcessHeapInformation(a3)) == 0)
      && ((a2 & 0x80u) == 0 || (ProcessModuleInformation = AVrfpQueryProcessVerifierOptions(a3)) == 0)
      && (a2 & 0xC00) != 0 )
    {
      v25 = *(_QWORD *)(a3 + 160);
      *(_QWORD *)(a3 + 168) = 0LL;
      ProcessModuleInformation = 0;
      if ( v25 )
        *(_QWORD *)(a3 + 168) = RtlQueryCriticalSectionOwner(v25, (a2 & 0x800) != 0);
      else
        ProcessModuleInformation = -1073741811;
    }
    if ( v37 )
      NtClose(v37);
    return (unsigned int)ProcessModuleInformation;
  }
  if ( a2 >= 0 && ((a2 - 1024) & 0xFFFFFBFF) == 0 )
  {
    *((_QWORD *)&v45 + 1) = 0LL;
    DWORD2(v46) = 0;
    *(_QWORD *)&v46 = 0LL;
    LODWORD(v45) = 48;
    v47 = 0LL;
    v43 = (unsigned __int64)a1;
    if ( (int)NtOpenProcess(&v37, 4096LL, &v45, &v43) < 0 )
    {
LABEL_39:
      v37 = 0LL;
      goto LABEL_40;
    }
    ProcessHandle = v37;
    if ( v37 != (HANDLE)-1LL )
      goto LABEL_95;
    if ( !NtCurrentTeb()->WowTebOffset )
    {
LABEL_38:
      NtClose(v37);
      goto LABEL_39;
    }
    v14 = NtCurrentTeb();
    WowTebOffset = v14->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v14 = (struct _TEB *)((char *)v14 + WowTebOffset);
    v16 = (_DWORD)v14 == LODWORD(v14->NtTib.SubSystemTib)
        ? (_WORD *)LODWORD(v14->glDispatchTable[137])
        : v14->TlsSlots[10];
    if ( !v16 || !v16[17] || !v16[16] )
    {
LABEL_95:
      v40 = 20;
      v26 = (HANDLE *)&v69;
      v27 = NtQuerySystemInformationEx(230LL, &ProcessHandle, 8LL, &v69, 20, &v40);
      if ( v27 == -1073741789 )
      {
        v33 = v40 + 15LL;
        if ( v33 <= v40 )
          v33 = 0xFFFFFFFFFFFFFF0LL;
        v34 = v33 & 0xFFFFFFFFFFFFFFF0uLL;
        v35 = alloca(v34);
        v36 = alloca(v34);
        v26 = &v37;
        v27 = NtQuerySystemInformationEx(230LL, &ProcessHandle, 8LL, &v37, v40, &v40);
      }
      if ( v27 < 0 )
        goto LABEL_38;
      v28 = *(_DWORD *)v26;
      v29 = 0;
      LODWORD(v30) = 0;
      if ( !(unsigned __int16)*(_DWORD *)v26 )
        goto LABEL_38;
      do
      {
        if ( (v28 & 0x80000) != 0 && (v28 & 0x40000) == 0 && (v28 & 0x100000) != 0 )
          v29 = v28;
        v30 = (unsigned int)(v30 + 1);
        v28 = *((_DWORD *)v26 + v30);
      }
      while ( (_WORD)v28 );
      if ( !v29 )
        goto LABEL_38;
    }
    Handle = 0LL;
    v17 = 0LL;
    if ( (int)ZwDuplicateObject(-1LL, v37, -1LL, &Handle, 16, 0, 0) >= 0 )
    {
      v67 = 0;
      memset_thunk_772440563353939046(v66, 0, 0x124uLL);
      v41 = 0LL;
      if ( (int)ZwReadVirtualMemory(Handle, &LdrSystemDllInitBlock, v66, 296LL, &v41) >= 0 && v41 == 296 )
        v17 = v68;
      NtClose(Handle);
      if ( v17 )
      {
        v44 = v17;
        LODWORD(v38) = 1;
      }
    }
    goto LABEL_38;
  }
LABEL_40:
  v18 = (int)v38;
  ProcessHandle = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(a3, a1, (unsigned int)v38, &ProcessHandle);
  if ( (int)result < 0 )
    return result;
  v20 = ProcessHandle;
  v21 = ProcessHandle;
  if ( !ProcessHandle )
    v21 = *(HANDLE *)(a3 + 136);
  ProcessInformation[0] = 64LL;
  v53 = 0LL;
  v38 = 0LL;
  ProcessInformation[1] = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  ProcessModuleInformation = NtQueryInformationProcess(v21, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL);
  if ( ProcessModuleInformation < 0 )
    goto LABEL_111;
  if ( (BYTE8(v62) & 0x40) != 0 )
  {
    DWORD1(v51) = 1;
    *((_QWORD *)&v51 + 1) = 0LL;
    *(_QWORD *)&v52 = L"QueryDebugInformation request";
    v22 = 2 * wcslen(L"QueryDebugInformation request");
    if ( v22 >= 0xFFFE )
      LOWORD(v22) = -4;
    WORD4(v51) = v22;
    WORD5(v51) = v22 + 2;
    ProcessModuleInformation = NtPowerInformation(72LL, &v51);
    if ( ProcessModuleInformation >= 0 )
    {
      v70 = v21;
      *(_WORD *)((char *)&v69 + 13) = 0;
      HIBYTE(v69) = 0;
      *(_QWORD *)&v69 = v38;
      DWORD2(v69) = 3;
      BYTE12(v69) = 1;
      ProcessModuleInformation = NtPowerInformation(44LL, &v69);
      if ( ProcessModuleInformation >= 0 )
        v7 = v38;
      else
        NtClose(v38);
    }
    if ( ProcessModuleInformation < 0 )
    {
LABEL_111:
      NtClose(v20);
      return (unsigned int)ProcessModuleInformation;
    }
  }
  v23 = *(_QWORD *)(a3 + 16);
  v63[3] = &v69;
  v63[5] = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v54[0] = 48LL;
  v54[3] = 512LL;
  v69 = 0LL;
  ProcessHandle = 0LL;
  v54[1] = 0LL;
  v54[2] = 0LL;
  v55 = 0LL;
  v63[1] = 65539LL;
  v63[2] = 16LL;
  v63[4] = 0LL;
  v63[0] = 40LL;
  ProcessModuleInformation = NtCreateThreadEx(&ProcessHandle, 0x1FFFFFLL, v54, v20, v44, v23, 6, 0LL, 0LL, 0LL, v63);
  if ( ProcessModuleInformation >= 0 )
  {
    v31 = ProcessHandle;
    v32 = NtWaitForSingleObject(ProcessHandle, 1u, &Timeout);
    ProcessModuleInformation = v32;
    if ( v32 < 0 )
    {
      NtTerminateThread(v31, (unsigned int)v32);
    }
    else
    {
      ProcessModuleInformation = ZwQueryInformationThread(v31, 0LL, v56);
      if ( ProcessModuleInformation >= 0 )
        ProcessModuleInformation = v56[0];
    }
    NtClose(v31);
  }
  NtClose(v20);
  if ( v7 )
  {
    *(_WORD *)((char *)&v69 + 13) = 0;
    HIBYTE(v69) = 0;
    *(_QWORD *)&v69 = v7;
    DWORD2(v69) = 3;
    BYTE12(v69) = 0;
    v70 = 0LL;
    NtPowerInformation(44LL, &v69);
    NtClose(v7);
  }
  if ( ProcessModuleInformation < 0 )
    return (unsigned int)ProcessModuleInformation;
  if ( v18 == 1 )
  {
    ProcessModuleInformation = 0;
    *(_QWORD *)(a3 + 168) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a3 + 88) + a3 + 80), 4));
  }
  else if ( !v18 )
  {
    ProcessModuleInformation = RtlpCopyRemoteDebugInformation(a3);
    if ( ProcessModuleInformation < 0 )
      return (unsigned int)ProcessModuleInformation;
  }
  v24 = -1073741558;
  if ( (a2 & 1) != 0 && !*(_QWORD *)(a3 + 96) )
    ProcessModuleInformation = -1073741558;
  if ( (a2 & 0x40) != 0 && !*(_QWORD *)(a3 + 96) )
    return v24;
  if ( ProcessModuleInformation >= 0 )
    return (unsigned int)RtlpValidateRemoteDebugInformation(
                           a3,
                           (unsigned int)a2,
                           a3 + 208,
                           *(_QWORD *)(a3 + 72) - 208LL);
  return (unsigned int)ProcessModuleInformation;
}
