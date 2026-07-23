/*
 * XREFs of RtlpHpRemoteStackSerializeWriter @ 0x180140AB0
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __fastcall RtlpHpRemoteStackSerializeWriter(char *Src, size_t Size, __int64 a3)
{
  size_t v4; // rdi
  PVOID *v6; // r15
  ULONG_PTR *ViewSize; // r14
  __int64 v8; // rdx
  char *v9; // rcx
  size_t v10; // rsi
  signed __int64 v11; // rdx
  SIZE_T CommitSize; // rcx
  SIZE_T v13; // rax
  NTSTATUS result; // eax

  *(_QWORD *)(a3 + 32) += Size;
  v4 = Size;
  if ( *(_DWORD *)(a3 + 28) != -1073741789 && Size )
  {
    v6 = (PVOID *)(a3 + 48);
    ViewSize = (ULONG_PTR *)(a3 + 56);
    while ( 1 )
    {
      v8 = *(_QWORD *)(a3 + 72);
      v9 = (char *)*v6 + v8;
      if ( v8 + v4 <= *ViewSize )
        break;
      v10 = *ViewSize - v8;
      memmove(v9, Src, v10);
      v4 -= v10;
      Src += v10;
      v11 = *(_QWORD *)(a3 + 64) + *ViewSize;
      *(_QWORD *)(a3 + 64) = v11;
      if ( v11 >= *(_QWORD *)(a3 + 8) )
      {
        *(_DWORD *)(a3 + 28) = -1073741789;
        return 0;
      }
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v6);
      CommitSize = *ViewSize;
      v13 = *(_QWORD *)(a3 + 8) - *(_QWORD *)(a3 + 64);
      *v6 = 0LL;
      if ( CommitSize >= v13 )
        CommitSize = v13;
      *ViewSize = CommitSize;
      result = ZwMapViewOfSection(
                 *(HANDLE *)a3,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 v6,
                 0LL,
                 CommitSize,
                 (PLARGE_INTEGER)(a3 + 64),
                 ViewSize,
                 ViewUnmap,
                 0,
                 4u);
      if ( result < 0 )
        return result;
      *(_QWORD *)(a3 + 72) = 0LL;
    }
    memmove(v9, Src, v4);
    *(_QWORD *)(a3 + 72) += v4;
  }
  return 0;
}
