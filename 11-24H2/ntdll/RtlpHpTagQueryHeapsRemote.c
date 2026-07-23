/*
 * XREFs of RtlpHpTagQueryHeapsRemote @ 0x1800A2080
 * Callers:
 *     RtlpHpTagQueryTags @ 0x1800A1A5C (RtlpHpTagQueryTags.c)
 * Callees:
 *     RtlpHeapPerformCrossProcessQuery @ 0x1801109D0 (RtlpHeapPerformCrossProcessQuery.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180160990 (NtCreateSection.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpTagQueryHeapsRemote(_OWORD *a1, SIZE_T CommitSize, size_t *a3)
{
  NTSTATUS v6; // edi
  _OWORD *v7; // rax
  void *v8; // rcx
  size_t v9; // r8
  bool v10; // cc
  PVOID v11; // rbx
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-29h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+58h] [rbp-21h] BYREF
  _QWORD Buffer[3]; // [rsp+60h] [rbp-19h] BYREF
  int v16; // [rsp+78h] [rbp-1h]
  size_t Size; // [rsp+80h] [rbp+7h]
  PVOID BaseAddress; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE SectionHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  ViewSize = 0LL;
  memset_thunk_772440563353939046(Buffer, 0, 0x60uLL);
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  MaximumSize.QuadPart = (CommitSize + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v6 = NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v6 < 0 )
    goto LABEL_7;
  ViewSize = CommitSize;
  v6 = ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         CommitSize,
         0LL,
         &ViewSize,
         ViewUnmap,
         0,
         4u);
  if ( v6 < 0 )
    goto LABEL_7;
  v7 = BaseAddress;
  *(_OWORD *)BaseAddress = *a1;
  v7[1] = a1[1];
  v7[2] = a1[2];
  v8 = (void *)*((_QWORD *)a1 + 1);
  Buffer[0] = SectionHandle;
  Buffer[1] = MaximumSize.QuadPart;
  v16 = 0x40000000;
  v6 = RtlpHeapPerformCrossProcessQuery(v8, Buffer);
  if ( v6 < 0 )
  {
LABEL_7:
    v11 = BaseAddress;
  }
  else
  {
    v9 = Size;
    v10 = Size <= CommitSize;
    *a3 = Size;
    v11 = BaseAddress;
    if ( v10 )
    {
      memmove(a1, BaseAddress, v9);
      v6 = 0;
    }
    else
    {
      v6 = -1073741789;
    }
  }
  if ( v11 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v11);
  if ( SectionHandle )
    NtClose(SectionHandle);
  return (unsigned int)v6;
}
