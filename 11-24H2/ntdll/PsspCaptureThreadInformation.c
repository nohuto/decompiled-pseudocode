/*
 * XREFs of PsspCaptureThreadInformation @ 0x1800BA890
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800BB350 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspDumpThread @ 0x1800BAC78 (PsspDumpThread.c)
 *     RtlGetExtendedContextLength @ 0x1800BB1C0 (RtlGetExtendedContextLength.c)
 *     PsspFreeLinkedHandleList @ 0x1800BB2B4 (PsspFreeLinkedHandleList.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 *     ZwQueryInformationThread @ 0x1801604F0 (ZwQueryInformationThread.c)
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180160990 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x180162060 (ZwGetNextThread.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, void *a2, unsigned int a3, ULONG a4)
{
  HANDLE v4; // r12
  PVOID *v7; // rbx
  _WORD *v8; // rdi
  unsigned int v9; // r14d
  int v10; // r15d
  ULONG v11; // ecx
  NTSTATUS NextThread; // eax
  NTSTATUS v13; // esi
  ULONG_PTR v14; // rax
  ULONG v15; // edi
  int v16; // r12d
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // r15d
  PVOID *v21; // r14
  int v22; // eax
  NTSTATUS ExtendedContextLength; // eax
  int Flags; // [rsp+20h] [rbp-E0h]
  ULONG ContextLength; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+60h] [rbp-A0h]
  ULONG ContextFlags; // [rsp+64h] [rbp-9Ch]
  PVOID BaseAddress; // [rsp+68h] [rbp-98h] BYREF
  PVOID v30; // [rsp+70h] [rbp-90h] BYREF
  HANDLE SectionHandle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp-80h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v34[12]; // [rsp+8Ch] [rbp-74h] BYREF
  int v35[6]; // [rsp+98h] [rbp-68h] BYREF
  HANDLE ProcessHandle; // [rsp+B0h] [rbp-50h]
  _WORD ThreadInformation[264]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0LL;
  v27 = a3;
  ProcessHandle = a2;
  BaseAddress = 0LL;
  SectionHandle = 0LL;
  *(_DWORD *)&v34[8] = 0;
  v30 = 0LL;
  RegionSize = 0LL;
  memset(v35, 0, sizeof(v35));
  ThreadHandle = 0LL;
  ContextFlags = a4;
  memset_thunk_772440563353939046(ThreadInformation, 0, 0x210uLL);
  ReturnLength = 0;
  v7 = 0LL;
  *(_QWORD *)v34 = a3 & 0x100;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = (a3 >> 7) & 8 | (*(_DWORD *)v34 != 0 ? 72 : 64);
  ContextLength = v11;
  while ( 1 )
  {
    NextThread = ZwGetNextThread(ProcessHandle, v4, v11, 0, 0, &ThreadHandle);
    v4 = ThreadHandle;
    v13 = NextThread;
    if ( NextThread == -2147483622 )
      break;
    if ( NextThread < 0 )
      goto LABEL_19;
    if ( ZwQueryInformationThread(ThreadHandle, ThreadNameInformation, ThreadInformation, 0x210u, &ReturnLength) >= 0 )
      v10 += (ThreadInformation[0] + 15) & 0xFFFFFFF0;
    if ( !v8 || v8[5] >= v8[4] )
    {
      BaseAddress = 0LL;
      RegionSize = 1LL;
      v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( v13 < 0 )
        goto LABEL_19;
      if ( v7 )
      {
        *(_QWORD *)v8 = BaseAddress;
        v8 = BaseAddress;
      }
      else
      {
        v8 = BaseAddress;
        v7 = (PVOID *)BaseAddress;
      }
      v14 = RegionSize - 16;
      v8[5] = 0;
      v8[4] = v14 >> 2;
    }
    *(_DWORD *)&v8[2 * (unsigned __int16)v8[5]++ + 6] = (_DWORD)ThreadHandle;
    v11 = ContextLength;
    ++v9;
  }
  if ( v9 )
  {
    v15 = 0;
    v16 = v27;
    ContextLength = 0;
    if ( *(_DWORD *)v34 )
    {
      if ( (v27 & 0x200) == 0
        || (ExtendedContextLength = RtlGetExtendedContextLength(ContextFlags, &ContextLength),
            v15 = ContextLength,
            ExtendedContextLength < 0) )
      {
        v15 = 1232;
      }
    }
    *(_DWORD *)(a1 + 1024) = v15;
    v17 = v9 * (unsigned __int64)(((v15 + 15) & 0xFFFFFFF0) + 128);
    if ( v17 > 0xFFFFFFFF )
    {
      PsspFreeLinkedHandleList(v7);
      return 3221225621LL;
    }
    v18 = (unsigned int)(v10 + v17);
    v19 = 0;
    *(_QWORD *)&v34[4] = v18;
    v13 = NtCreateSection(
            &SectionHandle,
            0xF0007u,
            (POBJECT_ATTRIBUTES)&stru_18017DC20,
            (PLARGE_INTEGER)&v34[4],
            4u,
            0x8000000u,
            0LL);
    if ( v13 < 0 )
    {
LABEL_19:
      PsspFreeLinkedHandleList(v7);
      return (unsigned int)v13;
    }
    v30 = 0LL;
    RegionSize = 0LL;
    v13 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &v30,
            0LL,
            0LL,
            0LL,
            &RegionSize,
            ViewShare,
            0,
            4u);
    if ( v13 < 0 )
    {
LABEL_18:
      NtClose(SectionHandle);
      goto LABEL_19;
    }
    v21 = v7;
    *(_QWORD *)v35 = v30;
    v35[2] = RegionSize;
    *(_QWORD *)&v35[3] = 0LL;
    while ( v21 )
    {
      while ( v19 < *((unsigned __int16 *)v21 + 5) )
      {
        ThreadHandle = (HANDLE)*((unsigned int *)v21 + v19 + 3);
        v22 = PsspDumpThread((int)v35, v16, ContextFlags, v15, Flags, ThreadHandle);
        v13 = v22;
        if ( v22 == -1073741789 )
          break;
        if ( v22 < 0 )
        {
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30);
          goto LABEL_18;
        }
        ++v19;
      }
      v19 = 0;
      if ( v13 < 0 )
        break;
      v21 = (PVOID *)*v21;
    }
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30);
    PsspFreeLinkedHandleList(v7);
    *(_DWORD *)(a1 + 992) = v35[4];
    *(_QWORD *)(a1 + 1000) = (unsigned int)v35[3];
    *(_QWORD *)(a1 + 1008) = SectionHandle;
    *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
  }
  return 0LL;
}
