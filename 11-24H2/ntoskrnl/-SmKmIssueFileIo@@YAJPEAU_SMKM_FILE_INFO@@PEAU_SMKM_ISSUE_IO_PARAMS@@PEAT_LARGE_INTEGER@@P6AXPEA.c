/*
 * XREFs of ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x14060D2E4
 * Callers:
 *     SmIssueIo @ 0x14060EF80 (SmIssueIo.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     NtReadFile @ 0x14084A380 (NtReadFile.c)
 *     NtWriteFile @ 0x1408C1170 (NtWriteFile.c)
 */

__int64 __fastcall SmKmIssueFileIo(
        void **a1,
        struct _SMKM_ISSUE_IO_PARAMS *a2,
        union _LARGE_INTEGER *a3,
        void (*a4)(void *, struct _IO_STATUS_BLOCK *, unsigned int),
        PVOID ApcContext)
{
  struct _IO_STATUS_BLOCK *v5; // rbx
  void *v6; // r10
  void *v7; // rcx
  NTSTATUS File; // eax
  __int64 v9; // r9
  ULONG v11; // [rsp+30h] [rbp-28h]

  v5 = *(struct _IO_STATUS_BLOCK **)a2;
  v6 = (void *)*((_QWORD *)a2 + 1);
  v7 = *a1;
  v11 = *((_DWORD *)a2 + 4);
  if ( (*((_DWORD *)a2 + 8) & 1) != 0 )
    File = NtReadFile(v7, 0LL, a4, ApcContext, v5, v6, v11, a3, 0LL);
  else
    File = NtWriteFile(v7, 0LL, a4, ApcContext, v5, v6, v11, a3, 0LL);
  if ( (File & 0xC0000000) == 0xC0000000 )
  {
    v5->Status = File;
    guard_dispatch_icall_no_overrides(ApcContext, v5, 0LL, v9);
  }
  return 259LL;
}
