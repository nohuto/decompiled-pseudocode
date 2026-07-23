/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x180028C60
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x180132090 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x180132130 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpChangeQueryDebugBufferTarget @ 0x180029600 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpValidateRemoteDebugInformation @ 0x180029920 (RtlpValidateRemoteDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x180029D60 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwner @ 0x180029F24 (RtlpQueryCriticalSectionOwner.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x18002A024 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlQueryCriticalSectionOwner @ 0x18002A0F0 (RtlQueryCriticalSectionOwner.c)
 *     RtlQueryProcessModuleInformation @ 0x18002A204 (RtlQueryProcessModuleInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x18002A340 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x18002AD20 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessLockInformation @ 0x18002AFA0 (RtlQueryProcessLockInformation.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtWaitForSingleObject @ 0x1801600D0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180160370 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x1801604F0 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x180160510 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x1801607D0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180160830 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x180160AB0 (NtTerminateThread.c)
 *     NtPowerInformation @ 0x180160C20 (NtPowerInformation.c)
 *     NtCreateThreadEx @ 0x180161960 (NtCreateThreadEx.c)
 *     NtQuerySystemInformationEx @ 0x180162E00 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180164700 (_alloca_probe.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlQueryProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  int ProcessModuleInformation; // ebx
  HANDLE v7; // r13
  HANDLE TargetProcessId; // rax
  SIZE_T OffsetFree; // r8
  bool v10; // dl
  __int128 *v11; // rcx
  HANDLE v12; // rax
  struct _TEB *v13; // rcx
  __int64 WowTebOffset; // rax
  _WORD *v15; // rax
  NTSTATUS (__cdecl *v16)(PVOID); // rbx
  int v17; // r12d
  NTSTATUS result; // eax
  HANDLE v19; // r15
  HANDLE TargetProcessHandle; // r14
  size_t v21; // rax
  PVOID ViewBaseTarget; // rax
  NTSTATUS v23; // eax
  HANDLE CriticalSectionHandle; // rcx
  HANDLE *p_SystemInformation; // rbx
  NTSTATUS v26; // eax
  int v27; // edx
  __int16 v28; // cx
  __int64 v29; // r8
  HANDLE v30; // r14
  int v31; // eax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  void *v34; // rsp
  void *v35; // rsp
  HANDLE ProcessHandle; // [rsp+60h] [rbp+0h] BYREF
  HANDLE OutputBuffer; // [rsp+68h] [rbp+8h] BYREF
  HANDLE ThreadHandle; // [rsp+70h] [rbp+10h] BYREF
  ULONG ReturnLength; // [rsp+78h] [rbp+18h] BYREF
  ULONG_PTR NumberOfBytesRead; // [rsp+80h] [rbp+20h] BYREF
  HANDLE TargetHandle; // [rsp+88h] [rbp+28h] BYREF
  _CLIENT_ID ClientId; // [rsp+90h] [rbp+30h] BYREF
  PUSER_THREAD_START_ROUTINE StartRoutine; // [rsp+A0h] [rbp+40h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp+48h] BYREF
  LARGE_INTEGER Timeout; // [rsp+D8h] [rbp+78h] BYREF
  __int128 v46; // [rsp+E0h] [rbp+80h] BYREF
  NTSTATUS (__stdcall *v47)(HANDLE, PROCESSINFOCLASS, PVOID, ULONG, PULONG); // [rsp+F0h] [rbp+90h]
  __int128 InputBuffer; // [rsp+F8h] [rbp+98h] BYREF
  __int128 v49; // [rsp+108h] [rbp+A8h]
  __int64 v50; // [rsp+118h] [rbp+B8h]
  _OBJECT_ATTRIBUTES v51; // [rsp+120h] [rbp+C0h] BYREF
  _OWORD ThreadInformation[2]; // [rsp+150h] [rbp+F0h] BYREF
  __int64 v53; // [rsp+170h] [rbp+110h]
  int v54; // [rsp+178h] [rbp+118h]
  _QWORD ProcessInformation[2]; // [rsp+180h] [rbp+120h] BYREF
  __int128 v56; // [rsp+190h] [rbp+130h]
  __int128 v57; // [rsp+1A0h] [rbp+140h]
  __int128 v58; // [rsp+1B0h] [rbp+150h]
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+1C0h] [rbp+160h] BYREF
  __int64 v60; // [rsp+1E8h] [rbp+188h]
  __int128 v61; // [rsp+1F0h] [rbp+190h]
  __int64 v62; // [rsp+200h] [rbp+1A0h]
  _BYTE Buffera[4]; // [rsp+230h] [rbp+1D0h] BYREF
  int v64; // [rsp+234h] [rbp+1D4h]
  NTSTATUS (__cdecl *v65)(PVOID); // [rsp+270h] [rbp+210h]
  __int128 SystemInformation; // [rsp+360h] [rbp+300h] BYREF
  HANDLE v67; // [rsp+370h] [rbp+310h]

  v53 = 0LL;
  v54 = 0;
  LODWORD(OutputBuffer) = 0;
  StartRoutine = (PUSER_THREAD_START_ROUTINE)RtlpQueryProcessDebugInformationRemote;
  ProcessModuleInformation = 0;
  ProcessHandle = 0LL;
  v47 = 0LL;
  v7 = 0LL;
  TargetProcessId = Buffer->TargetProcessId;
  memset(ThreadInformation, 0, sizeof(ThreadInformation));
  memset(&ObjectAttributes, 0, 44);
  ClientId = 0LL;
  v46 = 0LL;
  if ( TargetProcessId && TargetProcessId != UniqueProcessId )
    return -1073741811;
  if ( (Flags & 0x3FFFFFBE) != 0 && (Flags & 0x40000000) != 0 )
    return -1073741637;
  Buffer->Flags = Flags;
  OffsetFree = Buffer->OffsetFree;
  Timeout.QuadPart = -600000000LL;
  if ( OffsetFree )
    memset_thunk_772440563353939046(&Buffer[1], 0, OffsetFree - 208);
  Buffer->OffsetFree = 208LL;
  if ( Flags == -2147481600 )
    return RtlpQueryCriticalSectionOwner(UniqueProcessId, Buffer);
  v10 = 0;
  if ( (Flags & 0x3FFFFFBE) == 0 )
    v10 = (Flags & 0x80000000) != 0 && (Flags & 0x41) != 0;
  if ( v10 )
  {
    if ( (Flags & 0x40000000) != 0 )
    {
      v11 = (__int128 *)UniqueProcessId;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess == UniqueProcessId )
    {
      v11 = 0LL;
    }
    else
    {
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ClientId.UniqueThread = 0LL;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueProcess = UniqueProcessId;
      if ( NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId) >= 0 )
      {
        v12 = ProcessHandle;
      }
      else
      {
        v12 = 0LL;
        ProcessHandle = 0LL;
      }
      *(_QWORD *)&v46 = v12;
      v11 = &v46;
      *((_QWORD *)&v46 + 1) = RtlpQueryReadVirtualMemory;
      v47 = NtQueryInformationProcess;
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == UniqueProcessId || (Flags & 0x40000000) != 0 || ProcessHandle )
  {
    if ( ((Flags & 0x41) == 0 || (ProcessModuleInformation = RtlQueryProcessModuleInformation(v11, Flags, Buffer)) == 0)
      && ((Flags & 2) == 0 || (ProcessModuleInformation = RtlQueryProcessBackTraceInformation(Buffer)) == 0)
      && ((Flags & 0x20) == 0 || (ProcessModuleInformation = RtlQueryProcessLockInformation(Buffer)) == 0)
      && ((Flags & 0x21C) == 0 || (ProcessModuleInformation = RtlQueryProcessHeapInformation(Buffer)) == 0)
      && ((Flags & 0x80u) == 0 || (ProcessModuleInformation = AVrfpQueryProcessVerifierOptions(Buffer)) == 0)
      && (Flags & 0xC00) != 0 )
    {
      CriticalSectionHandle = Buffer->CriticalSectionHandle;
      Buffer->CriticalSectionOwnerThread = 0LL;
      ProcessModuleInformation = 0;
      if ( CriticalSectionHandle )
        Buffer->CriticalSectionOwnerThread = RtlQueryCriticalSectionOwner(CriticalSectionHandle);
      else
        ProcessModuleInformation = -1073741811;
    }
    if ( ProcessHandle )
      NtClose(ProcessHandle);
    return ProcessModuleInformation;
  }
  if ( (Flags & 0x80000000) == 0 && ((Flags - 1024) & 0xFFFFFBFF) == 0 )
  {
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ClientId.UniqueThread = 0LL;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueProcess = UniqueProcessId;
    if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) < 0 )
    {
LABEL_39:
      ProcessHandle = 0LL;
      goto LABEL_40;
    }
    ThreadHandle = ProcessHandle;
    if ( ProcessHandle != (HANDLE)-1LL )
      goto LABEL_95;
    if ( !NtCurrentTeb()->WowTebOffset )
    {
LABEL_38:
      NtClose(ProcessHandle);
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
      ReturnLength = 20;
      p_SystemInformation = (HANDLE *)&SystemInformation;
      v26 = NtQuerySystemInformationEx(
              SystemSupportedProcessorArchitectures2,
              &ThreadHandle,
              8u,
              &SystemInformation,
              0x14u,
              &ReturnLength);
      if ( v26 == -1073741789 )
      {
        v32 = ReturnLength + 15LL;
        if ( v32 <= ReturnLength )
          v32 = 0xFFFFFFFFFFFFFF0LL;
        v33 = v32 & 0xFFFFFFFFFFFFFFF0uLL;
        v34 = alloca(v33);
        v35 = alloca(v33);
        p_SystemInformation = &ProcessHandle;
        v26 = NtQuerySystemInformationEx(
                SystemSupportedProcessorArchitectures2,
                &ThreadHandle,
                8u,
                &ProcessHandle,
                ReturnLength,
                &ReturnLength);
      }
      if ( v26 < 0 )
        goto LABEL_38;
      v27 = *(_DWORD *)p_SystemInformation;
      v28 = 0;
      LODWORD(v29) = 0;
      if ( !(unsigned __int16)*(_DWORD *)p_SystemInformation )
        goto LABEL_38;
      do
      {
        if ( (v27 & 0x80000) != 0 && (v27 & 0x40000) == 0 && (v27 & 0x100000) != 0 )
          v28 = v27;
        v29 = (unsigned int)(v29 + 1);
        v27 = *((_DWORD *)p_SystemInformation + v29);
      }
      while ( (_WORD)v27 );
      if ( !v28 )
        goto LABEL_38;
    }
    TargetHandle = 0LL;
    v16 = 0LL;
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           ProcessHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &TargetHandle,
           0x10u,
           0,
           0) >= 0 )
    {
      v64 = 0;
      memset_thunk_772440563353939046(Buffera, 0, 0x124uLL);
      NumberOfBytesRead = 0LL;
      if ( ZwReadVirtualMemory(TargetHandle, &LdrSystemDllInitBlock, Buffera, 0x128uLL, &NumberOfBytesRead) >= 0
        && NumberOfBytesRead == 296 )
      {
        v16 = v65;
      }
      NtClose(TargetHandle);
      if ( v16 )
      {
        StartRoutine = v16;
        LODWORD(OutputBuffer) = 1;
      }
    }
    goto LABEL_38;
  }
LABEL_40:
  v17 = (int)OutputBuffer;
  ThreadHandle = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(Buffer, UniqueProcessId, (unsigned int)OutputBuffer, &ThreadHandle);
  if ( result < 0 )
    return result;
  v19 = ThreadHandle;
  TargetProcessHandle = ThreadHandle;
  if ( !ThreadHandle )
    TargetProcessHandle = Buffer->TargetProcessHandle;
  ProcessInformation[0] = 64LL;
  v50 = 0LL;
  OutputBuffer = 0LL;
  ProcessInformation[1] = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  InputBuffer = 0LL;
  v49 = 0LL;
  ProcessModuleInformation = NtQueryInformationProcess(
                               TargetProcessHandle,
                               ProcessBasicInformation,
                               ProcessInformation,
                               0x40u,
                               0LL);
  if ( ProcessModuleInformation < 0 )
    goto LABEL_111;
  if ( (BYTE8(v58) & 0x40) != 0 )
  {
    DWORD1(InputBuffer) = 1;
    *((_QWORD *)&InputBuffer + 1) = 0LL;
    *(_QWORD *)&v49 = L"QueryDebugInformation request";
    v21 = 2 * wcslen(L"QueryDebugInformation request");
    if ( v21 >= 0xFFFE )
      LOWORD(v21) = -4;
    WORD4(InputBuffer) = v21;
    WORD5(InputBuffer) = v21 + 2;
    ProcessModuleInformation = NtPowerInformation(PlmPowerRequestCreate, &InputBuffer, 0x28u, &OutputBuffer, 8u);
    if ( ProcessModuleInformation >= 0 )
    {
      v67 = TargetProcessHandle;
      *(_WORD *)((char *)&SystemInformation + 13) = 0;
      HIBYTE(SystemInformation) = 0;
      *(_QWORD *)&SystemInformation = OutputBuffer;
      DWORD2(SystemInformation) = 3;
      BYTE12(SystemInformation) = 1;
      ProcessModuleInformation = NtPowerInformation(PowerRequestAction, &SystemInformation, 0x18u, 0LL, 0);
      if ( ProcessModuleInformation >= 0 )
        v7 = OutputBuffer;
      else
        NtClose(OutputBuffer);
    }
    if ( ProcessModuleInformation < 0 )
    {
LABEL_111:
      NtClose(v19);
      return ProcessModuleInformation;
    }
  }
  ViewBaseTarget = Buffer->ViewBaseTarget;
  AttributeList.Attributes[0].Value = (ULONG_PTR)&SystemInformation;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  *(_QWORD *)&v51.Length = 48LL;
  *(_QWORD *)&v51.Attributes = 512LL;
  SystemInformation = 0LL;
  ThreadHandle = 0LL;
  v51.RootDirectory = 0LL;
  v51.ObjectName = 0LL;
  *(_OWORD *)&v51.SecurityDescriptor = 0LL;
  AttributeList.Attributes[0].Attribute = 65539LL;
  AttributeList.Attributes[0].Size = 16LL;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  AttributeList.TotalLength = 40LL;
  ProcessModuleInformation = NtCreateThreadEx(
                               &ThreadHandle,
                               0x1FFFFFu,
                               &v51,
                               v19,
                               StartRoutine,
                               ViewBaseTarget,
                               6u,
                               0LL,
                               0LL,
                               0LL,
                               &AttributeList);
  if ( ProcessModuleInformation >= 0 )
  {
    v30 = ThreadHandle;
    v31 = NtWaitForSingleObject(ThreadHandle, 1u, &Timeout);
    ProcessModuleInformation = v31;
    if ( v31 < 0 )
    {
      NtTerminateThread(v30, v31);
    }
    else
    {
      ProcessModuleInformation = ZwQueryInformationThread(v30, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
      if ( ProcessModuleInformation >= 0 )
        ProcessModuleInformation = ThreadInformation[0];
    }
    NtClose(v30);
  }
  NtClose(v19);
  if ( v7 )
  {
    *(_WORD *)((char *)&SystemInformation + 13) = 0;
    HIBYTE(SystemInformation) = 0;
    *(_QWORD *)&SystemInformation = v7;
    DWORD2(SystemInformation) = 3;
    BYTE12(SystemInformation) = 0;
    v67 = 0LL;
    NtPowerInformation(PowerRequestAction, &SystemInformation, 0x18u, 0LL, 0);
    NtClose(v7);
  }
  if ( ProcessModuleInformation < 0 )
    return ProcessModuleInformation;
  if ( v17 == 1 )
  {
    ProcessModuleInformation = 0;
    Buffer->CriticalSectionOwnerThread = (HANDLE)(unsigned int)_mm_cvtsi128_si32(
                                                                 _mm_srli_si128(
                                                                   *(__m128i *)((char *)&Buffer->CommitSize
                                                                              + Buffer->ViewSize),
                                                                   4));
  }
  else if ( !v17 )
  {
    ProcessModuleInformation = RtlpCopyRemoteDebugInformation(Buffer);
    if ( ProcessModuleInformation < 0 )
      return ProcessModuleInformation;
  }
  v23 = -1073741558;
  if ( (Flags & 1) != 0 && !Buffer->Modules )
    ProcessModuleInformation = -1073741558;
  if ( (Flags & 0x40) != 0 && !Buffer->Modules )
    return v23;
  if ( ProcessModuleInformation >= 0 )
    return RtlpValidateRemoteDebugInformation(Buffer, Flags, &Buffer[1], Buffer->OffsetFree - 208);
  return ProcessModuleInformation;
}
