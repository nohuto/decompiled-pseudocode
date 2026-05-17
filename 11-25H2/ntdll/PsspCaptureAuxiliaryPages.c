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

__int64 __fastcall PsspCaptureAuxiliaryPages(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v4; // ebx
  int v8; // edi
  __int64 v9; // r9
  int v10; // r14d
  void *v11; // r14
  __int64 result; // rax
  void *Heap; // [rsp+50h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  void *v16; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h]

  v4 = 0;
  Handle = 0LL;
  v14 = 0LL;
  v17 = 0LL;
  if ( !is_mul_ok(0x1000uLL, 1uLL) )
    return 3221225621LL;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    Heap = 0LL;
    v14 = 64LL;
    result = ZwAllocateVirtualMemory(-1LL, &Heap, 0LL, &v14, 4096, 4);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    Heap = (void *)RtlAllocateHeap(
                     (char *)NtCurrentPeb()->ProcessHeap,
                     (0x1000 * (unsigned __int128)1uLL) >> 64,
                     0x40uLL);
    if ( !Heap )
      return 3221225626LL;
  }
  v17 = 4096LL;
  v10 = NtCreateSection(&Handle, 983047LL, &unk_1801808E0);
  if ( v10 >= 0 )
  {
    v16 = 0LL;
    v14 = 0LL;
    v10 = ZwMapViewOfSection(Handle, -1LL, &v16, 0LL, 0LL, 0LL, &v14, 1, 0, 4);
    if ( v10 >= 0 )
    {
      v11 = v16;
      memset_thunk_772440563353939046(Heap, 0, 0x40uLL);
      if ( *a4 == 2147352576LL )
      {
        memmove(v11, (const void *)0x7FFE0000, 0xA80uLL);
      }
      else if ( (int)ZwReadVirtualMemory(a2, *a4, v11, 4096LL, 0LL) < 0 )
      {
LABEL_8:
        NtUnmapViewOfSection(-1LL);
        *(_DWORD *)(a1 + 888) = v4;
        *(_DWORD *)(a1 + 4) |= v8 != 0 ? 4 : 2;
        *(_QWORD *)(a1 + 896) = Handle;
        *(_QWORD *)(a1 + 904) = Heap;
        *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
        return 0LL;
      }
      if ( (int)ZwQueryVirtualMemory(a2, *a4, 0LL, (char *)Heap + 8, 48LL, 0LL) >= 0 )
      {
        v4 = 1;
        *(_QWORD *)Heap = *a4;
        *((_QWORD *)Heap + 7) = MEMORY[0x7FFE0014];
      }
      goto LABEL_8;
    }
    NtClose(Handle);
  }
  if ( v8 )
  {
    v14 = 0LL;
    ZwFreeVirtualMemory(-1LL, &Heap, &v14, 0x8000LL);
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v9);
  }
  return (unsigned int)v10;
}
