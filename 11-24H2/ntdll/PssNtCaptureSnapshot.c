/*
 * XREFs of PssNtCaptureSnapshot @ 0x1800BB350
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18001A8A0 (RtlQueryPerformanceCounter.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800BA5E4 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureThreadInformation @ 0x1800BA890 (PsspCaptureThreadInformation.c)
 *     PsspCaptureProcessInformation @ 0x1800BB96C (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleInformation @ 0x1800BBB28 (PsspCaptureHandleInformation.c)
 *     PssNtFreeSnapshot @ 0x1800BC1B0 (PssNtFreeSnapshot.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800BCE28 (PsspCaptureVaSpaceInformation.c)
 *     PsspSampleCounters @ 0x18010CCD4 (PsspSampleCounters.c)
 *     PsspCaptureIptTrace @ 0x18015B010 (PsspCaptureIptTrace.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 *     ZwQueryInformationThread @ 0x1801604F0 (ZwQueryInformationThread.c)
 *     ZwCreateProcessEx @ 0x1801609F0 (ZwCreateProcessEx.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl PssNtCaptureSnapshot(
        PHANDLE SnapshotHandle,
        HANDLE ProcessHandle,
        ULONG CaptureFlags,
        ULONG ThreadContextFlags)
{
  char *v4; // rdi
  ULONG v7; // r12d
  __int64 v8; // rbx
  ULONG v9; // esi
  HANDLE v10; // rcx
  int v11; // r13d
  HANDLE v12; // rdx
  int v13; // r13d
  HANDLE v14; // r13
  NTSTATUS v15; // r12d
  NTSTATUS result; // eax
  __int64 v17; // rcx
  ULONG v18; // eax
  __int64 v19; // rcx
  PVOID BaseAddress; // [rsp+50h] [rbp-69h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-61h] BYREF
  __int64 v22; // [rsp+60h] [rbp-59h] BYREF
  __int64 v23; // [rsp+68h] [rbp-51h] BYREF
  ULONG i; // [rsp+70h] [rbp-49h]
  int v25; // [rsp+74h] [rbp-45h]
  __int64 v26; // [rsp+78h] [rbp-41h] BYREF
  ULONG v27; // [rsp+80h] [rbp-39h]
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-31h] BYREF
  HANDLE ProcessHandlea; // [rsp+90h] [rbp-29h] BYREF
  __int64 v30; // [rsp+98h] [rbp-21h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-19h] BYREF
  __int128 ThreadInformation; // [rsp+A8h] [rbp-11h] BYREF
  HANDLE ParentProcess[2]; // [rsp+B8h] [rbp-1h] BYREF

  v4 = 0LL;
  v27 = ThreadContextFlags;
  ParentProcess[0] = ProcessHandle;
  RegionSize = 0LL;
  PerformanceCounter.QuadPart = 0LL;
  *(_QWORD *)&ThreadInformation = 0LL;
  ProcessHandlea = 0LL;
  if ( (CaptureFlags & 0x3FF8000) != 0 )
    return -1073741811;
  v7 = CaptureFlags & 0x1C000000;
  if ( (CaptureFlags & 0x1C000000) == 0x4000000 )
    return -1073741776;
  v23 = 0LL;
  v31 = 0LL;
  v8 = 0LL;
  v22 = 0LL;
  v30 = 0LL;
  v9 = CaptureFlags & 0x40000000;
  if ( (CaptureFlags & 0x40000000) != 0 )
  {
    v8 = MEMORY[0x7FFE0300];
    PsspSampleCounters(&v31, &v30);
  }
  v10 = *SnapshotHandle;
  v11 = 0;
  BaseAddress = v10;
  if ( !v10 )
  {
    RegionSize = 1144LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
    v10 = BaseAddress;
    v11 = 1;
    *SnapshotHandle = BaseAddress;
  }
  memset_thunk_772440563353939046(v10, 0, 0x478uLL);
  v12 = ParentProcess[0];
  *(_DWORD *)BaseAddress = 1146311504;
  *((_DWORD *)BaseAddress + 1) = v11;
  *((_DWORD *)BaseAddress + 2) = CaptureFlags;
  v13 = PsspCaptureProcessInformation(BaseAddress, v12, CaptureFlags);
  if ( v13 < 0 )
    goto LABEL_20;
  if ( (CaptureFlags & 2) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v23, &v22);
    v26 = 2147352576LL;
    v13 = PsspCaptureAuxiliaryPages((__int64)BaseAddress, ParentProcess[0], CaptureFlags, (PVOID *)&v26);
    if ( v13 < 0 )
      goto LABEL_20;
    if ( v9 )
    {
      PsspSampleCounters(&PerformanceCounter, &ThreadInformation);
      *((_QWORD *)BaseAddress + 135) = ThreadInformation - v22;
      *((_QWORD *)BaseAddress + 136) = 1000000 * (PerformanceCounter.QuadPart - v23) / v8;
    }
  }
  if ( (CaptureFlags & 0x800) == 0 )
    goto LABEL_9;
  if ( v9 )
    PsspSampleCounters(&v23, &v22);
  v13 = PsspCaptureVaSpaceInformation(BaseAddress, ParentProcess[0], CaptureFlags);
  if ( v13 < 0 )
  {
LABEL_20:
    PssNtFreeSnapshot(BaseAddress);
    result = v13;
    *SnapshotHandle = 0LL;
    return result;
  }
  if ( v9 )
  {
    ThreadInformation = 0LL;
    RtlQueryPerformanceCounter(&PerformanceCounter);
    if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadCycleTime, &ThreadInformation, 0x10u, 0LL) < 0 )
    {
      *(_QWORD *)&ThreadInformation = 0LL;
      v17 = 0LL;
    }
    else
    {
      v17 = ThreadInformation;
    }
    *((_QWORD *)BaseAddress + 133) = v17 - v22;
    *((_QWORD *)BaseAddress + 134) = 1000000 * (PerformanceCounter.QuadPart - v23) / v8;
  }
LABEL_9:
  if ( (CaptureFlags & 1) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v23, &v22);
    v18 = ((int)CaptureFlags >> 31) & 0x1000;
    for ( i = v18; ; v18 = i )
    {
      v25 = v7 & 0x10000000;
      LODWORD(v26) = v7 & 0x8000000;
      if ( (v7 & 0x10000000) != 0 )
      {
        v18 |= 0x400u;
      }
      else if ( (v7 & 0x8000000) != 0 )
      {
        v18 |= 1u;
      }
      v13 = ZwCreateProcessEx(&ProcessHandlea, 0x1418u, 0LL, ParentProcess[0], v18, 0LL, 0LL, 0LL, 0);
      if ( v13 >= 0 )
        break;
      if ( (v7 & 0x4000000) == 0 )
        goto LABEL_20;
      if ( v25 )
      {
        v7 &= ~0x10000000u;
      }
      else
      {
        if ( !(_DWORD)v26 )
          goto LABEL_20;
        v7 &= ~0x8000000u;
      }
    }
    *((_QWORD *)BaseAddress + 110) = MEMORY[0x7FFE0014];
    *((_QWORD *)BaseAddress + 109) = ProcessHandlea;
    if ( v9 )
    {
      ThreadInformation = 0LL;
      RtlQueryPerformanceCounter(&PerformanceCounter);
      if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadCycleTime, &ThreadInformation, 0x10u, 0LL) < 0 )
      {
        *(_QWORD *)&ThreadInformation = 0LL;
        v19 = 0LL;
      }
      else
      {
        v19 = ThreadInformation;
      }
      *((_QWORD *)BaseAddress + 131) = v19 - v22;
      *((_QWORD *)BaseAddress + 132) = 1000000 * (PerformanceCounter.QuadPart - v23) / v8;
    }
  }
  if ( (CaptureFlags & 4) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v23, &v22);
    v14 = ParentProcess[0];
    v15 = PsspCaptureHandleInformation(BaseAddress, ParentProcess[0], CaptureFlags);
    if ( v15 < 0 )
      goto LABEL_14;
    if ( v9 )
    {
      PsspSampleCounters(&PerformanceCounter, &ThreadInformation);
      *((_QWORD *)BaseAddress + 137) = ThreadInformation - v22;
      *((_QWORD *)BaseAddress + 138) = 1000000 * (PerformanceCounter.QuadPart - v23) / v8;
    }
  }
  else
  {
    v14 = ParentProcess[0];
  }
  if ( (CaptureFlags & 0x80u) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v23, &v22);
    v15 = PsspCaptureThreadInformation((__int64)BaseAddress, v14, CaptureFlags, v27);
    if ( v15 < 0 )
    {
LABEL_14:
      PssNtFreeSnapshot(BaseAddress);
      result = v15;
      *SnapshotHandle = 0LL;
      return result;
    }
    if ( !v9 )
      goto LABEL_28;
    PsspSampleCounters(&PerformanceCounter, &ThreadInformation);
    *((_QWORD *)BaseAddress + 139) = ThreadInformation - v22;
    *((_QWORD *)BaseAddress + 140) = 1000000 * (PerformanceCounter.QuadPart - v23) / v8;
    goto LABEL_49;
  }
  if ( v9 )
  {
LABEL_49:
    *(_OWORD *)ParentProcess = 0LL;
    RtlQueryPerformanceCounter(&PerformanceCounter);
    if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadCycleTime, ParentProcess, 0x10u, 0LL) >= 0 )
      v4 = (char *)ParentProcess[0];
    *((_QWORD *)BaseAddress + 129) = &v4[-v30];
    *((_QWORD *)BaseAddress + 130) = 1000000 * (PerformanceCounter.QuadPart - v31) / v8;
  }
LABEL_28:
  if ( (CaptureFlags & 0x2000) != 0 )
    PsspCaptureIptTrace(BaseAddress, v14);
  return 0;
}
