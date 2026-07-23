/*
 * XREFs of ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x1406012B8
 * Callers:
 *     SmIssueIo @ 0x140602FC0 (SmIssueIo.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     NtReadFile @ 0x14084E5D0 (NtReadFile.c)
 *     NtWriteFile @ 0x1408C32D0 (NtWriteFile.c)
 */

__int64 __fastcall SmKmIssueFileIo(
        struct _SMKM_FILE_INFO *a1,
        struct _SMKM_ISSUE_IO_PARAMS *a2,
        union _LARGE_INTEGER *a3,
        void (*a4)(void *, struct _IO_STATUS_BLOCK *, unsigned int),
        PVOID ApcContext)
{
  struct _IO_STATUS_BLOCK *v5; // rbx
  void *v6; // r10
  HANDLE FileHandle; // rcx
  NTSTATUS File; // eax
  ULONG v10; // [rsp+30h] [rbp-28h]

  v5 = *(struct _IO_STATUS_BLOCK **)a2;
  v6 = (void *)*((_QWORD *)a2 + 1);
  FileHandle = a1->FileHandle;
  v10 = *((_DWORD *)a2 + 4);
  if ( (*((_DWORD *)a2 + 8) & 1) != 0 )
    File = NtReadFile(FileHandle, 0LL, a4, ApcContext, v5, v6, v10, a3, 0LL);
  else
    File = NtWriteFile(FileHandle, 0LL, a4, ApcContext, v5, v6, v10, a3, 0LL);
  if ( (File & 0xC0000000) == 0xC0000000 )
  {
    v5->Status = File;
    guard_dispatch_icall_no_overrides(ApcContext);
  }
  return 259LL;
}
