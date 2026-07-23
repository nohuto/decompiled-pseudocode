/*
 * XREFs of LdrAddLoadAsDataTable @ 0x180079D70
 * Callers:
 *     LdrResSearchResource @ 0x18002D200 (LdrResSearchResource.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x180079C04 (LdrpInitMuiCrits.c)
 *     LdrRemoveLoadAsDataTable @ 0x180079FB0 (LdrRemoveLoadAsDataTable.c)
 *     RtlReAllocateHeap @ 0x18007A7D0 (RtlReAllocateHeap.c)
 *     LdrLogNewDataDllLoad @ 0x180090CF0 (LdrLogNewDataDllLoad.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl LdrAddLoadAsDataTable(
        PVOID Module,
        PWSTR FilePath,
        SIZE_T Size,
        HANDLE Handle,
        PACTIVATION_CONTEXT ActCtx)
{
  PVOID v9; // r14
  NTSTATUS v10; // edi
  unsigned int v11; // esi
  PVOID *v12; // rdx
  __int64 v13; // rax
  size_t v14; // rdi
  PVOID v15; // rax
  __int64 v16; // rcx
  PVOID *v17; // rax
  PVOID *Heap; // rax

  v9 = 0LL;
  v10 = 0;
  if ( !Module )
    return -1073741811;
  LdrpInitMuiCrits((__int64)Module, (__int64)FilePath);
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v11 = 0;
  v12 = (PVOID *)LoadAsDataTable;
  while ( v11 < LoadAsDataTableCount )
  {
    if ( v12[6 * v11] == Module )
    {
      LdrRemoveLoadAsDataTable(Module, 0LL, 0LL, 0);
      v12 = (PVOID *)LoadAsDataTable;
    }
    ++v11;
  }
  if ( v12 )
  {
    if ( LoadAsDataTableCount < (unsigned int)LoadAsDataTableBlockCount )
      goto LABEL_6;
    Heap = (PVOID *)RtlReAllocateHeap(
                      NtCurrentPeb()->ProcessHeap,
                      0,
                      LoadAsDataTable,
                      48LL * (unsigned int)(LoadAsDataTableBlockCount + 32));
    v12 = Heap;
    if ( !Heap )
    {
      v10 = -1073741801;
      goto LABEL_23;
    }
    LoadAsDataTable = Heap;
    LoadAsDataTableBlockCount += 32;
  }
  else
  {
    v17 = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x600uLL);
    v12 = v17;
    if ( !v17 )
    {
      v10 = -1073741801;
      goto LABEL_23;
    }
    LoadAsDataTable = v17;
    LoadAsDataTableBlockCount = 32;
  }
  v10 = 0;
LABEL_6:
  if ( !FilePath )
  {
LABEL_15:
    v16 = 6LL * (unsigned int)LoadAsDataTableCount;
    v12[v16] = Module;
    v12[v16 + 1] = v9;
    v12[v16 + 2] = (PVOID)Size;
    v12[v16 + 3] = Handle;
    LODWORD(v12[v16 + 4]) = 1;
    v12[v16 + 5] = ActCtx;
    ++LoadAsDataTableCount;
    goto LABEL_23;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( FilePath[v13] );
  v14 = 2 * v13;
  v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v13 + 2);
  v9 = v15;
  if ( v15 )
  {
    memmove(v15, FilePath, v14);
    v10 = 0;
    v12 = (PVOID *)LoadAsDataTable;
    goto LABEL_15;
  }
  v10 = -1073741801;
LABEL_23:
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  if ( v10 >= 0 )
  {
    if ( FilePath )
      LdrLogNewDataDllLoad(Module, FilePath);
  }
  return v10;
}
