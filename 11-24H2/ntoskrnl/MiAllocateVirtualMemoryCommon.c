/*
 * XREFs of MiAllocateVirtualMemoryCommon @ 0x1409155A0
 * Callers:
 *     MmAllocateVirtualMemory @ 0x1409DB280 (MmAllocateVirtualMemory.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1409157C0 (MiAllocateVirtualMemoryPrepare.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 */

__int64 __fastcall MiAllocateVirtualMemoryCommon(
        int a1,
        __int64 *a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        int a9,
        int a10,
        __int64 a11)
{
  unsigned __int64 v11; // rdi
  __int64 v13; // r9
  __int64 v15; // rdx
  int VirtualMemoryPrepare; // ebx
  ULONG_PTR v17; // rcx
  int VirtualMemory; // eax
  int v20; // eax
  unsigned __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v24; // [rsp+90h] [rbp-70h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-60h]
  __int128 v26; // [rsp+B0h] [rbp-50h]
  __int128 v27; // [rsp+C0h] [rbp-40h]
  __int128 v28; // [rsp+D0h] [rbp-30h]
  __int128 v29; // [rsp+E0h] [rbp-20h]
  __int128 v30; // [rsp+F0h] [rbp-10h]
  __int128 v31; // [rsp+100h] [rbp+0h]

  v11 = 0LL;
  v22 = 0LL;
  v13 = *a4;
  v15 = *a2;
  Object[0] = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  VirtualMemoryPrepare = MiAllocateVirtualMemoryPrepare(
                           a1,
                           v15,
                           a3,
                           v13,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           a11,
                           (__int64)&v24,
                           (__int64)Object);
  if ( VirtualMemoryPrepare < 0 )
    goto LABEL_7;
  v17 = *(_QWORD *)(a7 + 24);
  if ( v17 )
  {
    if ( v17 == -3LL )
    {
      v11 = 1LL;
    }
    else
    {
      v20 = PsReferencePartitionByHandle(v17, 2, a8, 0x61566D4Du, &v21);
      v11 = v21;
      VirtualMemoryPrepare = v20;
      if ( v20 < 0 )
        goto LABEL_7;
    }
  }
  if ( !*(_BYTE *)(a7 + 48) || (a5 & 0x20400000) == 0x400000 )
  {
    if ( a9 < 0 )
    {
      v21 = 0LL;
      if ( (v28 & 0x40000000) != 0 )
      {
        DWORD1(v28) = 536870913;
        *((_QWORD *)&v28 + 1) = &v21;
      }
      VirtualMemory = MiAllocateVirtualMemory((unsigned int)&v24, 0, 0, 0, (__int64)&v22);
      *((_QWORD *)&v28 + 1) = 0LL;
      VirtualMemoryPrepare = VirtualMemory;
      DWORD1(v28) = 0;
      if ( VirtualMemory >= 0 )
        VirtualMemoryPrepare = 0;
    }
    else
    {
      VirtualMemoryPrepare = MiAllocateVirtualMemory((unsigned int)&v24, v11, 0, 0, (__int64)&v22);
    }
    if ( VirtualMemoryPrepare >= 0 )
    {
      *a2 = v22;
      *a4 = *((_QWORD *)&v25 + 1);
      goto LABEL_10;
    }
  }
  else
  {
    VirtualMemoryPrepare = -1073741811;
  }
LABEL_7:
  if ( (_QWORD)v24 )
    ++dword_140E302F4;
  else
    ++dword_140E302F0;
LABEL_10:
  if ( v11 >= 2 )
    PsDereferencePartition(v11);
  if ( Object[0] )
    ObfDereferenceObjectWithTag(Object[0], 0x6D566D4Du);
  return (unsigned int)VirtualMemoryPrepare;
}
