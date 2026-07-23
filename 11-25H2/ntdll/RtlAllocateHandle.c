/*
 * XREFs of RtlAllocateHandle @ 0x180068460
 * Callers:
 *     RtlpInsertStringAtom @ 0x1800683B0 (RtlpInsertStringAtom.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180029DE0 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 */

PRTL_HANDLE_TABLE_ENTRY __cdecl RtlAllocateHandle(PRTL_HANDLE_TABLE HandleTable, PULONG HandleIndex)
{
  _QWORD *p_FreeHandles; // rsi
  PRTL_HANDLE_TABLE_ENTRY FreeHandles; // rcx
  _RTL_HANDLE_TABLE_ENTRY *v6; // r8
  ULONG v8; // ecx
  ULONG SizeOfHandleTableEntry; // eax
  PRTL_HANDLE_TABLE_ENTRY CommittedHandles; // r8
  unsigned int v11; // r15d
  void *ProcessHeap; // rcx
  __int64 v13; // r14
  _RTL_HANDLE_TABLE_ENTRY *v14; // rax
  _RTL_HANDLE_TABLE_ENTRY *v15; // rdx
  PRTL_HANDLE_TABLE_ENTRY *p_UnCommittedHandles; // r14
  char *v17; // rcx
  _RTL_HANDLE_TABLE_ENTRY *UnCommittedHandles; // rdx
  _RTL_HANDLE_TABLE_ENTRY *v19; // rcx
  ULONG_PTR v20[7]; // [rsp+30h] [rbp-38h] BYREF
  PVOID v21; // [rsp+70h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+20h] BYREF

  p_FreeHandles = &HandleTable->FreeHandles;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v20[0] = 0LL;
  if ( !HandleTable->FreeHandles )
  {
    if ( HandleTable->Reserved[0] )
    {
      v8 = HandleTable->Reserved[1];
      if ( v8 <= HandleTable->MaximumNumberOfHandles )
      {
        SizeOfHandleTableEntry = HandleTable->SizeOfHandleTableEntry;
        CommittedHandles = HandleTable->CommittedHandles;
        v11 = v8 * SizeOfHandleTableEntry;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        v13 = v11 + 8 * SizeOfHandleTableEntry;
        v14 = (_RTL_HANDLE_TABLE_ENTRY *)(CommittedHandles
                                        ? RtlReAllocateHeap(ProcessHeap, 8u, CommittedHandles, (unsigned int)v13)
                                        : RtlAllocateHeap(ProcessHeap, 8u, v11 + 8 * SizeOfHandleTableEntry));
        BaseAddress = v14;
        if ( v14 )
        {
          HandleTable->Reserved[1] += 8;
          v15 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v14 + v13);
          p_UnCommittedHandles = &HandleTable->UnCommittedHandles;
          v17 = (char *)v14 + v11;
          HandleTable->CommittedHandles = v14;
          v21 = v17;
          HandleTable->UnCommittedHandles = v15;
          goto LABEL_11;
        }
      }
    }
    else
    {
      UnCommittedHandles = HandleTable->UnCommittedHandles;
      if ( UnCommittedHandles )
      {
        p_UnCommittedHandles = &HandleTable->UnCommittedHandles;
      }
      else
      {
        RegionSize = HandleTable->MaximumNumberOfHandles * HandleTable->SizeOfHandleTableEntry;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
          return 0LL;
        UnCommittedHandles = (_RTL_HANDLE_TABLE_ENTRY *)BaseAddress;
        p_UnCommittedHandles = &HandleTable->UnCommittedHandles;
        v19 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)BaseAddress + RegionSize);
        HandleTable->CommittedHandles = (PRTL_HANDLE_TABLE_ENTRY)BaseAddress;
        HandleTable->MaxReservedHandles = v19;
        HandleTable->UnCommittedHandles = UnCommittedHandles;
      }
      v21 = UnCommittedHandles;
      if ( UnCommittedHandles < HandleTable->MaxReservedHandles )
      {
        v20[0] = 4096LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v21, 0LL, v20, 0x1000u, 4u) >= 0 )
        {
          v17 = (char *)v21;
          v15 = (_RTL_HANDLE_TABLE_ENTRY *)((char *)v21 + v20[0]);
          HandleTable->UnCommittedHandles = (PRTL_HANDLE_TABLE_ENTRY)((char *)v21 + v20[0]);
LABEL_11:
          if ( v17 < (char *)v15 )
          {
            do
            {
              *p_FreeHandles = v17;
              p_FreeHandles = v21;
              v17 = (char *)v21 + HandleTable->SizeOfHandleTableEntry;
              v21 = v17;
            }
            while ( v17 < (char *)*p_UnCommittedHandles );
          }
          goto LABEL_2;
        }
      }
    }
    return 0LL;
  }
LABEL_2:
  FreeHandles = HandleTable->FreeHandles;
  v21 = FreeHandles;
  HandleTable->FreeHandles = FreeHandles->NextFree;
  FreeHandles->NextFree = 0LL;
  v6 = (_RTL_HANDLE_TABLE_ENTRY *)v21;
  if ( HandleIndex )
    *HandleIndex = (signed __int64)((__int64)v21 - (unsigned __int64)HandleTable->CommittedHandles)
                 / HandleTable->SizeOfHandleTableEntry;
  return v6;
}
