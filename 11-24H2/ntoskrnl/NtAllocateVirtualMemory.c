/*
 * XREFs of NtAllocateVirtualMemory @ 0x1409152C0
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1409157C0 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 */

NTSTATUS __stdcall NtAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  int v8; // r10d
  unsigned __int64 v9; // rdi
  char PreviousMode; // cl
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID v13; // r14
  ULONG_PTR v14; // r15
  NTSTATUS VirtualMemoryPrepare; // ebx
  char v17; // [rsp+70h] [rbp-128h]
  __int64 v18; // [rsp+78h] [rbp-120h] BYREF
  void *v19; // [rsp+80h] [rbp-118h] BYREF
  PVOID v20; // [rsp+88h] [rbp-110h]
  ULONG_PTR v21; // [rsp+90h] [rbp-108h]
  PVOID Object[3]; // [rsp+98h] [rbp-100h] BYREF
  __int128 v23; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v24; // [rsp+C0h] [rbp-D8h]
  __int128 v25; // [rsp+D0h] [rbp-C8h]
  __int128 v26; // [rsp+E0h] [rbp-B8h]
  __int64 v27; // [rsp+F0h] [rbp-A8h]
  __int128 v28; // [rsp+100h] [rbp-98h] BYREF
  __int128 v29; // [rsp+110h] [rbp-88h]
  __int128 v30; // [rsp+120h] [rbp-78h]
  __int128 v31; // [rsp+130h] [rbp-68h]
  __int128 v32; // [rsp+140h] [rbp-58h]
  __int128 v33; // [rsp+150h] [rbp-48h]
  __int128 v34; // [rsp+160h] [rbp-38h]
  __int128 v35; // [rsp+170h] [rbp-28h]

  v8 = (int)ProcessHandle;
  v9 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v17 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = 0x7FFFFFFF0000LL;
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
      v12 = (__int64)BaseAddress;
    *(_QWORD *)v12 = *(_QWORD *)v12;
    if ( (unsigned __int64)RegionSize < 0x7FFFFFFF0000LL )
      v11 = (__int64)RegionSize;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    PreviousMode = v17;
  }
  v13 = *BaseAddress;
  v20 = *BaseAddress;
  v14 = *RegionSize;
  v21 = *RegionSize;
  LODWORD(v25) = AllocationType & 0x7F;
  if ( (AllocationType & 0x44000) != 0 )
    return -1073741811;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v19 = 0LL;
  Object[0] = 0LL;
  v18 = 0LL;
  VirtualMemoryPrepare = MiAllocateVirtualMemoryPrepare(
                           v8,
                           (_DWORD)v13,
                           ZeroBits,
                           v14,
                           AllocationType & 0xFFFFFF80,
                           Protect,
                           (__int64)&v23,
                           PreviousMode,
                           0,
                           0,
                           0LL,
                           (__int64)&v28,
                           (__int64)Object);
  if ( VirtualMemoryPrepare >= 0 )
  {
    if ( *((_QWORD *)&v24 + 1) )
    {
      if ( *((_QWORD *)&v24 + 1) == -3LL )
      {
        v9 = 1LL;
        v18 = 1LL;
      }
      else
      {
        VirtualMemoryPrepare = PsReferencePartitionByHandle(*((ULONG_PTR *)&v24 + 1), 2, v17, 0x61566D4Du, &v18);
        v9 = v18;
        if ( VirtualMemoryPrepare < 0 )
          goto LABEL_13;
      }
    }
    if ( (_BYTE)v26 && (AllocationType & 0x20400000) != 0x400000 )
    {
      VirtualMemoryPrepare = -1073741811;
LABEL_23:
      if ( (_QWORD)v28 )
        ++dword_140E302F4;
      else
        ++dword_140E302F0;
      goto LABEL_14;
    }
    VirtualMemoryPrepare = MiAllocateVirtualMemory((unsigned int)&v28, v9, 0, 0, (__int64)&v19);
    if ( VirtualMemoryPrepare >= 0 )
    {
      v13 = v19;
      v20 = v19;
      v14 = *((_QWORD *)&v29 + 1);
      v21 = *((_QWORD *)&v29 + 1);
    }
  }
LABEL_13:
  if ( VirtualMemoryPrepare < 0 )
    goto LABEL_23;
LABEL_14:
  if ( v9 >= 2 )
    PsDereferencePartition(v9);
  if ( Object[0] )
    ObfDereferenceObjectWithTag(Object[0], 0x6D566D4Du);
  if ( VirtualMemoryPrepare >= 0 )
  {
    *BaseAddress = v13;
    *RegionSize = v14;
  }
  return VirtualMemoryPrepare;
}
