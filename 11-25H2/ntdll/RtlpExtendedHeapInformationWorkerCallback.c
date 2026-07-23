/*
 * XREFs of RtlpExtendedHeapInformationWorkerCallback @ 0x180143A20
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __fastcall RtlpExtendedHeapInformationWorkerCallback(size_t *Src, __int64 a2)
{
  size_t *v2; // rsi
  unsigned __int64 v4; // rax
  NTSTATUS result; // eax
  ULONG_PTR *ViewSize; // r15
  PVOID *v8; // r14
  unsigned __int64 v9; // rdi
  SIZE_T CommitSize; // rdx
  __int64 v11; // rax
  _QWORD *v12; // r15

  v2 = Src + 1;
  v4 = Src[1];
  if ( v4 > 0x10000 )
    return -1073741595;
  *(_QWORD *)(a2 + 32) += v4;
  if ( *(_DWORD *)(a2 + 28) == -1073741789 )
    return 0;
  ViewSize = (ULONG_PTR *)(a2 + 56);
  v8 = (PVOID *)(a2 + 48);
  v9 = (*(_QWORD *)(a2 + 72) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a2 + 72) = v9;
  if ( v9 + *v2 <= *(_QWORD *)(a2 + 56) )
  {
    v12 = Src + 1;
LABEL_10:
    memmove((char *)*v8 + v9, Src, *v2);
    ++*(_DWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 72) += *v12;
    return 0;
  }
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v8);
  CommitSize = *ViewSize;
  *(_QWORD *)(a2 + 64) += *ViewSize;
  v9 = 0LL;
  v11 = *(_QWORD *)(a2 + 64);
  *v8 = 0LL;
  if ( v11 < *(_QWORD *)(a2 + 8) )
  {
    result = ZwMapViewOfSection(
               *(HANDLE *)a2,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               v8,
               0LL,
               CommitSize,
               (PLARGE_INTEGER)(a2 + 64),
               ViewSize,
               ViewUnmap,
               0,
               4u);
    if ( result < 0 )
      return result;
    *(_QWORD *)(a2 + 72) = 0LL;
    v12 = Src + 1;
    goto LABEL_10;
  }
  *(_DWORD *)(a2 + 28) = -1073741789;
  return 0;
}
