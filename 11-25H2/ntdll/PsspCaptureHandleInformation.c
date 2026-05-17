/*
 * XREFs of PsspCaptureHandleInformation @ 0x1800C8758
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800C7F80 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     PsspWalkHandleTable @ 0x1800C8A4C (PsspWalkHandleTable.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 */

NTSTATUS __fastcall PsspCaptureHandleInformation(__int64 a1, void *a2, int a3)
{
  NTSTATUS result; // eax
  ULONG v7; // esi
  int v8; // ebx
  void *Heap; // rax
  NTSTATUS v10; // esi
  __int64 v11; // r9
  ULONG v12; // r12d
  __int64 v13; // r9
  __int64 v14; // [rsp+58h] [rbp-19h] BYREF
  void *v15; // [rsp+60h] [rbp-11h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-1h] BYREF
  __int64 v18; // [rsp+78h] [rbp+7h] BYREF
  __int64 ProcessInformation; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+88h] [rbp+17h] BYREF
  int v21; // [rsp+90h] [rbp+1Fh]
  __int64 v22; // [rsp+94h] [rbp+23h]
  int v23; // [rsp+9Ch] [rbp+2Bh]
  __int64 v24; // [rsp+A0h] [rbp+2Fh]
  unsigned int v25; // [rsp+F0h] [rbp+7Fh] BYREF

  ProcessInformation = 0LL;
  ReturnLength = 0;
  Handle = 0LL;
  v14 = 0LL;
  v23 = 0;
  result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)20, &ProcessInformation, 8u, 0LL);
  if ( result < 0 )
    return result;
  v7 = 4 * ProcessInformation;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    v15 = 0LL;
    v14 = (unsigned int)(4 * ProcessInformation);
    result = ZwAllocateVirtualMemory(-1LL, &v15, 0LL, &v14, 4096, 4);
    if ( result < 0 )
      return result;
    Heap = v15;
  }
  else
  {
    Heap = (void *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(4 * ProcessInformation));
    v15 = Heap;
    if ( !Heap )
      return -1073741670;
  }
  v10 = NtQueryInformationProcess(a2, ProcessWow64Information|0x20, Heap, v7, &ReturnLength);
  if ( v10 < 0 )
  {
    if ( !v8 )
    {
LABEL_18:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v15, v11);
      return v10;
    }
LABEL_15:
    v14 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v15, &v14, 0x8000LL);
    return v10;
  }
  v12 = ReturnLength >> 2;
  v25 = 0;
  PsspWalkHandleTable(
    (_DWORD)a2,
    (_DWORD)v15,
    ReturnLength >> 2,
    a3,
    (__int64)PsspHandleStreamSizeCalculator,
    (__int64)&v25);
  v24 = v25;
  v10 = NtCreateSection(&Handle, 983047LL, &unk_180180940);
  if ( v10 < 0 )
  {
LABEL_17:
    if ( !v8 )
      goto LABEL_18;
    goto LABEL_15;
  }
  v18 = 0LL;
  v14 = 0LL;
  v10 = ZwMapViewOfSection(Handle, -1LL, &v18, 0LL, 0LL, 0LL, &v14, 1, 0, 4);
  if ( v10 < 0 )
  {
    NtClose(Handle);
    goto LABEL_17;
  }
  v20 = v18;
  v25 = v14;
  v21 = v14;
  v22 = 0LL;
  PsspWalkHandleTable((_DWORD)a2, (_DWORD)v15, v12, a3, (__int64)PsspHandleDumper, (__int64)&v20);
  NtUnmapViewOfSection(-1LL);
  if ( v8 )
  {
    v14 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v15, &v14, 0x8000LL);
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v15, v13);
  }
  *(_DWORD *)(a1 + 960) = HIDWORD(v22);
  *(_QWORD *)(a1 + 968) = (unsigned int)v22;
  *(_QWORD *)(a1 + 976) = Handle;
  *(_QWORD *)(a1 + 984) = MEMORY[0x7FFE0014];
  return 0;
}
