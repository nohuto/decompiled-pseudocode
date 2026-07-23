/*
 * XREFs of PsspCaptureAuxiliaryPages @ 0x1800C7130
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800C7F80 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspCaptureAuxiliaryPages(__int64 a1, void *a2, int a3, PVOID *a4)
{
  int v4; // ebx
  int v8; // edi
  NTSTATUS v9; // r14d
  PVOID v10; // r14
  NTSTATUS result; // eax
  PVOID Heap; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-28h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-18h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+70h] [rbp-10h] BYREF

  v4 = 0;
  SectionHandle = 0LL;
  ViewSize = 0LL;
  MaximumSize.QuadPart = 0LL;
  if ( !is_mul_ok(0x1000uLL, 1uLL) )
    return -1073741675;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    Heap = 0LL;
    ViewSize = 64LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Heap, 0LL, &ViewSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (0x1000 * (unsigned __int128)1uLL) >> 64, 0x40uLL);
    if ( !Heap )
      return -1073741670;
  }
  MaximumSize.QuadPart = 4096LL;
  v9 = NtCreateSection(&SectionHandle, 0xF0007u, (POBJECT_ATTRIBUTES)&stru_1801808E0, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v9 >= 0 )
  {
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v9 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           0LL,
           &ViewSize,
           ViewShare,
           0,
           4u);
    if ( v9 >= 0 )
    {
      v10 = BaseAddress;
      memset_thunk_772440563353939046(Heap, 0, 0x40uLL);
      if ( *a4 == (PVOID)2147352576 )
      {
        memmove(v10, (const void *)0x7FFE0000, 0xA80uLL);
      }
      else if ( ZwReadVirtualMemory(a2, *a4, v10, 0x1000uLL, 0LL) < 0 )
      {
LABEL_8:
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        *(_DWORD *)(a1 + 888) = v4;
        *(_DWORD *)(a1 + 4) |= v8 != 0 ? 4 : 2;
        *(_QWORD *)(a1 + 896) = SectionHandle;
        *(_QWORD *)(a1 + 904) = Heap;
        *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
        return 0;
      }
      if ( ZwQueryVirtualMemory(a2, *a4, MemoryBasicInformation, (char *)Heap + 8, 0x30uLL, 0LL) >= 0 )
      {
        v4 = 1;
        *(_QWORD *)Heap = *a4;
        *((_QWORD *)Heap + 7) = MEMORY[0x7FFE0014];
      }
      goto LABEL_8;
    }
    NtClose(SectionHandle);
  }
  if ( v8 )
  {
    ViewSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Heap, &ViewSize, 0x8000u);
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return v9;
}
