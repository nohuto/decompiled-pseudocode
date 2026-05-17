/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x180044CD0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x180133E60 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x180133F00 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x180045670 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpValidateRemoteDebugInformation @ 0x180045990 (RtlpValidateRemoteDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x180045DD0 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwner @ 0x180045F94 (RtlpQueryCriticalSectionOwner.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x180046094 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlQueryCriticalSectionOwner @ 0x180046160 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessModuleInformation @ 0x180046274 (RtlQueryProcessModuleInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800463B0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x180046D20 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x180046FA0 (RtlQueryProcessLockInformation.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180161FB0 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x180162150 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x180162410 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180162470 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x1801626F0 (NtTerminateThread.c)
 *     NtPowerInformation @ 0x180162860 (NtPowerInformation.c)
 *     NtCreateThreadEx @ 0x1801635A0 (NtCreateThreadEx.c)
 *     NtQuerySystemInformationEx @ 0x180164A40 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180166340 (_alloca_probe.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryProcessDebugInformation(__int128 *a1, int a2, __int64 a3)
{
  NTSTATUS ProcessModuleInformation; // ebx
  HANDLE v7; // r13
  __int128 *v8; // rax
  __int64 v9; // r8
  bool v10; // dl
  __int128 *v11; // rcx
  HANDLE v12; // rax
  struct _TEB *v13; // rcx
  __int64 WowTebOffset; // rax
  _WORD *v15; // rax
  void (__fastcall __noreturn *v16)(); // rbx
  int v17; // r12d
  __int64 result; // rax
  HANDLE v19; // r15
  HANDLE v20; // r14
  size_t v21; // rax
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rcx
  HANDLE *v25; // rbx
  int v26; // eax
  int v27; // edx
  __int16 v28; // cx
  __int64 v29; // r8
  HANDLE v30; // r14
  NTSTATUS v31; // eax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  void *v34; // rsp
  void *v35; // rsp
  HANDLE v36; // [rsp+60h] [rbp+0h] BYREF
  HANDLE v37; // [rsp+68h] [rbp+8h]
  HANDLE ProcessHandle; // [rsp+70h] [rbp+10h] BYREF
  unsigned int v39; // [rsp+78h] [rbp+18h] BYREF
  __int64 v40; // [rsp+80h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+28h] BYREF
  __int128 v42; // [rsp+90h] [rbp+30h] BYREF
  void (__fastcall __noreturn *v43)(); // [rsp+A0h] [rbp+40h]
  __int128 v44; // [rsp+A8h] [rbp+48h] BYREF
  __int128 v45; // [rsp+B8h] [rbp+58h]
  __int128 v46; // [rsp+C8h] [rbp+68h]
  LARGE_INTEGER Timeout; // [rsp+D8h] [rbp+78h] BYREF
  __int128 v48; // [rsp+E0h] [rbp+80h] BYREF
  NTSTATUS (__stdcall *v49)(HANDLE, PROCESSINFOCLASS, PVOID, ULONG, PULONG); // [rsp+F0h] [rbp+90h]
  __int128 v50; // [rsp+F8h] [rbp+98h] BYREF
  __int128 v51; // [rsp+108h] [rbp+A8h]
  __int64 v52; // [rsp+118h] [rbp+B8h]
  _QWORD v53[4]; // [rsp+120h] [rbp+C0h] BYREF
  __int128 v54; // [rsp+140h] [rbp+E0h]
  _OWORD v55[2]; // [rsp+150h] [rbp+F0h] BYREF
  __int64 v56; // [rsp+170h] [rbp+110h]
  int v57; // [rsp+178h] [rbp+118h]
  _QWORD ProcessInformation[2]; // [rsp+180h] [rbp+120h] BYREF
  __int128 v59; // [rsp+190h] [rbp+130h]
  __int128 v60; // [rsp+1A0h] [rbp+140h]
  __int128 v61; // [rsp+1B0h] [rbp+150h]
  _QWORD v62[6]; // [rsp+1C0h] [rbp+160h] BYREF
  __int128 v63; // [rsp+1F0h] [rbp+190h]
  __int64 v64; // [rsp+200h] [rbp+1A0h]
  _BYTE v65[4]; // [rsp+230h] [rbp+1D0h] BYREF
  int v66; // [rsp+234h] [rbp+1D4h]
  void (__fastcall __noreturn *v67)(); // [rsp+270h] [rbp+210h]
  __int128 v68; // [rsp+360h] [rbp+300h] BYREF
  HANDLE v69; // [rsp+370h] [rbp+310h]

  v56 = 0LL;
  v57 = 0;
  *(_QWORD *)&v46 = 0LL;
  DWORD2(v46) = 0;
  LODWORD(v37) = 0;
  v43 = RtlpQueryProcessDebugInformationRemote;
  ProcessModuleInformation = 0;
  v36 = 0LL;
  v49 = 0LL;
  v7 = 0LL;
  v8 = *(__int128 **)(a3 + 48);
  memset(v55, 0, sizeof(v55));
  v44 = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  v48 = 0LL;
  if ( v8 && v8 != a1 )
    return 3221225485LL;
  if ( (a2 & 0x3FFFFFBE) != 0 && (a2 & 0x40000000) != 0 )
    return 3221225659LL;
  *(_DWORD *)(a3 + 64) = a2;
  v9 = *(_QWORD *)(a3 + 72);
  Timeout.QuadPart = -600000000LL;
  if ( v9 )
    memset_thunk_772440563353939046((void *)(a3 + 208), 0, v9 - 208);
  *(_QWORD *)(a3 + 72) = 208LL;
  if ( a2 == -2147481600 )
    return RtlpQueryCriticalSectionOwner(a1, a3);
  v10 = 0;
  if ( (a2 & 0x3FFFFFBE) == 0 )
    v10 = a2 < 0 && (a2 & 0x41) != 0;
  if ( v10 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      v11 = a1;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 )
    {
      v11 = 0LL;
    }
    else
    {
      *((_QWORD *)&v44 + 1) = 0LL;
      DWORD2(v45) = 0;
      *(_QWORD *)&v45 = 0LL;
      LODWORD(v44) = 48;
      v46 = 0LL;
      v42 = (unsigned __int64)a1;
      if ( (int)NtOpenProcess(&v36, 0x1FFFFFLL, &v44, &v42) >= 0 )
      {
        v12 = v36;
      }
      else
      {
        v12 = 0LL;
        v36 = 0LL;
      }
      *(_QWORD *)&v48 = v12;
      v11 = &v48;
      *((_QWORD *)&v48 + 1) = RtlpQueryReadVirtualMemory;
      v49 = NtQueryInformationProcess;
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 || (a2 & 0x40000000) != 0 || v36 )
  {
    if ( ((a2 & 0x41) == 0
       || (ProcessModuleInformation = RtlQueryProcessModuleInformation(v11, (unsigned int)a2, a3)) == 0)
      && ((a2 & 2) == 0 || (ProcessModuleInformation = RtlQueryProcessBackTraceInformation(a3)) == 0)
      && ((a2 & 0x20) == 0 || (ProcessModuleInformation = RtlQueryProcessLockInformation(a3)) == 0)
      && ((a2 & 0x21C) == 0 || (ProcessModuleInformation = RtlQueryProcessHeapInformation(a3)) == 0)
      && ((a2 & 0x80u) == 0 || (ProcessModuleInformation = AVrfpQueryProcessVerifierOptions(a3)) == 0)
      && (a2 & 0xC00) != 0 )
    {
      v24 = *(_QWORD *)(a3 + 160);
      *(_QWORD *)(a3 + 168) = 0LL;
      ProcessModuleInformation = 0;
      if ( v24 )
        *(_QWORD *)(a3 + 168) = RtlQueryCriticalSectionOwner(v24, (a2 & 0x800) != 0);
      else
        ProcessModuleInformation = -1073741811;
    }
    if ( v36 )
      NtClose(v36);
    return (unsigned int)ProcessModuleInformation;
  }
  if ( a2 >= 0 && ((a2 - 1024) & 0xFFFFFBFF) == 0 )
  {
    *((_QWORD *)&v44 + 1) = 0LL;
    DWORD2(v45) = 0;
    *(_QWORD *)&v45 = 0LL;
    LODWORD(v44) = 48;
    v46 = 0LL;
    v42 = (unsigned __int64)a1;
    if ( (int)NtOpenProcess(&v36, 4096LL, &v44, &v42) < 0 )
    {
LABEL_39:
      v36 = 0LL;
      goto LABEL_40;
    }
    ProcessHandle = v36;
    if ( v36 != (HANDLE)-1LL )
      goto LABEL_95;
    if ( !NtCurrentTeb()->WowTebOffset )
    {
LABEL_38:
      NtClose(v36);
      goto LABEL_39;
    }
    v13 = NtCurrentTeb();
    WowTebOffset = v13->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v13 = (struct _TEB *)((char *)v13 + WowTebOffset);
    v15 = (_DWORD)v13 == LODWORD(v13->NtTib.SubSystemTib)
        ? (_WORD *)LODWORD(v13->glDispatchTable[137])
        : v13->TlsSlots[10];
    if ( !v15 || !v15[17] || !v15[16] )
    {
LABEL_95:
      v39 = 20;
      v25 = (HANDLE *)&v68;
      v26 = NtQuerySystemInformationEx(230LL, &ProcessHandle, 8LL, &v68, 20, &v39);
      if ( v26 == -1073741789 )
      {
        v32 = v39 + 15LL;
        if ( v32 <= v39 )
          v32 = 0xFFFFFFFFFFFFFF0LL;
        v33 = v32 & 0xFFFFFFFFFFFFFFF0uLL;
        v34 = alloca(v33);
        v35 = alloca(v33);
        v25 = &v36;
        v26 = NtQuerySystemInformationEx(230LL, &ProcessHandle, 8LL, &v36, v39, &v39);
      }
      if ( v26 < 0 )
        goto LABEL_38;
      v27 = *(_DWORD *)v25;
      v28 = 0;
      LODWORD(v29) = 0;
      if ( !(unsigned __int16)*(_DWORD *)v25 )
        goto LABEL_38;
      do
      {
        if ( (v27 & 0x80000) != 0 && (v27 & 0x40000) == 0 && (v27 & 0x100000) != 0 )
          v28 = v27;
        v29 = (unsigned int)(v29 + 1);
        v27 = *((_DWORD *)v25 + v29);
      }
      while ( (_WORD)v27 );
      if ( !v28 )
        goto LABEL_38;
    }
    Handle = 0LL;
    v16 = 0LL;
    if ( (int)ZwDuplicateObject(-1LL, v36, -1LL, &Handle, 16, 0, 0) >= 0 )
    {
      v66 = 0;
      memset_thunk_772440563353939046(v65, 0, 0x124uLL);
      v40 = 0LL;
      if ( (int)ZwReadVirtualMemory(Handle, &LdrSystemDllInitBlock, v65, 296LL, &v40) >= 0 && v40 == 296 )
        v16 = v67;
      NtClose(Handle);
      if ( v16 )
      {
        v43 = v16;
        LODWORD(v37) = 1;
      }
    }
    goto LABEL_38;
  }
LABEL_40:
  v17 = (int)v37;
  ProcessHandle = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(a3, a1, (unsigned int)v37, &ProcessHandle);
  if ( (int)result < 0 )
    return result;
  v19 = ProcessHandle;
  v20 = ProcessHandle;
  if ( !ProcessHandle )
    v20 = *(HANDLE *)(a3 + 136);
  ProcessInformation[0] = 64LL;
  v52 = 0LL;
  v37 = 0LL;
  ProcessInformation[1] = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  ProcessModuleInformation = NtQueryInformationProcess(v20, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL);
  if ( ProcessModuleInformation < 0 )
    goto LABEL_111;
  if ( (BYTE8(v61) & 0x40) != 0 )
  {
    DWORD1(v50) = 1;
    *((_QWORD *)&v50 + 1) = 0LL;
    *(_QWORD *)&v51 = L"QueryDebugInformation request";
    v21 = 2 * wcslen(L"QueryDebugInformation request");
    if ( v21 >= 0xFFFE )
      LOWORD(v21) = -4;
    WORD4(v50) = v21;
    WORD5(v50) = v21 + 2;
    ProcessModuleInformation = NtPowerInformation(72LL, &v50);
    if ( ProcessModuleInformation >= 0 )
    {
      v69 = v20;
      *(_WORD *)((char *)&v68 + 13) = 0;
      HIBYTE(v68) = 0;
      *(_QWORD *)&v68 = v37;
      DWORD2(v68) = 3;
      BYTE12(v68) = 1;
      ProcessModuleInformation = NtPowerInformation(44LL, &v68);
      if ( ProcessModuleInformation >= 0 )
        v7 = v37;
      else
        NtClose(v37);
    }
    if ( ProcessModuleInformation < 0 )
    {
LABEL_111:
      NtClose(v19);
      return (unsigned int)ProcessModuleInformation;
    }
  }
  v22 = *(_QWORD *)(a3 + 16);
  v62[3] = &v68;
  v62[5] = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v53[0] = 48LL;
  v53[3] = 512LL;
  v68 = 0LL;
  ProcessHandle = 0LL;
  v53[1] = 0LL;
  v53[2] = 0LL;
  v54 = 0LL;
  v62[1] = 65539LL;
  v62[2] = 16LL;
  v62[4] = 0LL;
  v62[0] = 40LL;
  ProcessModuleInformation = NtCreateThreadEx(&ProcessHandle, 0x1FFFFFLL, v53, v19, v43, v22, 6, 0LL, 0LL, 0LL, v62);
  if ( ProcessModuleInformation >= 0 )
  {
    v30 = ProcessHandle;
    v31 = NtWaitForSingleObject(ProcessHandle, 1u, &Timeout);
    ProcessModuleInformation = v31;
    if ( v31 < 0 )
    {
      NtTerminateThread(v30, (unsigned int)v31);
    }
    else
    {
      ProcessModuleInformation = ZwQueryInformationThread(v30, 0LL, v55, 48LL, 0LL);
      if ( ProcessModuleInformation >= 0 )
        ProcessModuleInformation = v55[0];
    }
    NtClose(v30);
  }
  NtClose(v19);
  if ( v7 )
  {
    *(_WORD *)((char *)&v68 + 13) = 0;
    HIBYTE(v68) = 0;
    *(_QWORD *)&v68 = v7;
    DWORD2(v68) = 3;
    BYTE12(v68) = 0;
    v69 = 0LL;
    NtPowerInformation(44LL, &v68);
    NtClose(v7);
  }
  if ( ProcessModuleInformation < 0 )
    return (unsigned int)ProcessModuleInformation;
  if ( v17 == 1 )
  {
    ProcessModuleInformation = 0;
    *(_QWORD *)(a3 + 168) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a3 + 88) + a3 + 80), 4));
  }
  else if ( !v17 )
  {
    ProcessModuleInformation = RtlpCopyRemoteDebugInformation(a3);
    if ( ProcessModuleInformation < 0 )
      return (unsigned int)ProcessModuleInformation;
  }
  v23 = -1073741558;
  if ( (a2 & 1) != 0 && !*(_QWORD *)(a3 + 96) )
    ProcessModuleInformation = -1073741558;
  if ( (a2 & 0x40) != 0 && !*(_QWORD *)(a3 + 96) )
    return v23;
  if ( ProcessModuleInformation >= 0 )
    return (unsigned int)RtlpValidateRemoteDebugInformation(
                           a3,
                           (unsigned int)a2,
                           a3 + 208,
                           *(_QWORD *)(a3 + 72) - 208LL);
  return (unsigned int)ProcessModuleInformation;
}
