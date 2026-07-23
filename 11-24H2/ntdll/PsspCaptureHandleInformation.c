/*
 * XREFs of PsspCaptureHandleInformation @ 0x1800BBB28
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800BB350 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     PsspWalkHandleTable @ 0x1800BBE1C (PsspWalkHandleTable.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x180160370 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x180160410 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180160990 (NtCreateSection.c)
 */

NTSTATUS __fastcall PsspCaptureHandleInformation(__int64 a1, void *a2, int a3)
{
  NTSTATUS result; // eax
  ULONG v7; // esi
  int v8; // ebx
  PVOID Heap; // rax
  NTSTATUS v10; // esi
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-19h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-11h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-9h] BYREF
  HANDLE SectionHandle; // [rsp+70h] [rbp-1h] BYREF
  PVOID v15; // [rsp+78h] [rbp+7h] BYREF
  __int64 ProcessInformation; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+88h] [rbp+17h] BYREF
  int v18; // [rsp+90h] [rbp+1Fh]
  __int64 v19; // [rsp+94h] [rbp+23h]
  int v20; // [rsp+9Ch] [rbp+2Bh]
  LARGE_INTEGER MaximumSize; // [rsp+A0h] [rbp+2Fh] BYREF
  __int64 v22; // [rsp+F0h] [rbp+7Fh] BYREF

  ProcessInformation = 0LL;
  ReturnLength = 0;
  SectionHandle = 0LL;
  RegionSize = 0LL;
  v20 = 0;
  result = NtQueryInformationProcess(a2, ProcessHandleCount, &ProcessInformation, 8u, 0LL);
  if ( result < 0 )
    return result;
  v7 = 4 * ProcessInformation;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    BaseAddress = 0LL;
    RegionSize = (unsigned int)(4 * ProcessInformation);
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
    Heap = BaseAddress;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(4 * ProcessInformation));
    BaseAddress = Heap;
    if ( !Heap )
      return -1073741670;
  }
  v10 = NtQueryInformationProcess(a2, ProcessHandleTable, Heap, v7, &ReturnLength);
  if ( v10 < 0 )
  {
    if ( !v8 )
    {
LABEL_18:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      return v10;
    }
LABEL_15:
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return v10;
  }
  LODWORD(v22) = 0;
  PsspWalkHandleTable(a2, (__int64)PsspHandleStreamSizeCalculator, (__int64)&v22);
  MaximumSize.QuadPart = (unsigned int)v22;
  v10 = NtCreateSection(
          &SectionHandle,
          0xF0007u,
          (POBJECT_ATTRIBUTES)&stru_18017DC50,
          &MaximumSize,
          4u,
          0x8000000u,
          0LL);
  if ( v10 < 0 )
  {
LABEL_17:
    if ( !v8 )
      goto LABEL_18;
    goto LABEL_15;
  }
  v15 = 0LL;
  RegionSize = 0LL;
  v10 = ZwMapViewOfSection(
          SectionHandle,
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &v15,
          0LL,
          0LL,
          0LL,
          &RegionSize,
          ViewShare,
          0,
          4u);
  if ( v10 < 0 )
  {
    NtClose(SectionHandle);
    goto LABEL_17;
  }
  v17 = (__int64)v15;
  LODWORD(v22) = RegionSize;
  v18 = RegionSize;
  v19 = 0LL;
  PsspWalkHandleTable(a2, (__int64)PsspHandleDumper, (__int64)&v17);
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v15);
  if ( v8 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  *(_DWORD *)(a1 + 960) = HIDWORD(v19);
  *(_QWORD *)(a1 + 968) = (unsigned int)v19;
  *(_QWORD *)(a1 + 976) = SectionHandle;
  *(_QWORD *)(a1 + 984) = MEMORY[0x7FFE0014];
  return 0;
}
