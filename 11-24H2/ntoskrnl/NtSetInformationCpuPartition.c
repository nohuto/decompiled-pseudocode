/*
 * XREFs of NtSetInformationCpuPartition @ 0x1407760E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeQueryActiveGroupCount @ 0x14047C720 (KeQueryActiveGroupCount.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspReferenceCpuPartitionByHandle @ 0x140777110 (PspReferenceCpuPartitionByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetInformationCpuPartition(
        ULONG_PTR a1,
        int a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  size_t v7; // rbx
  struct _KAFFINITY_EX *v9; // r15
  __int64 v11; // rcx
  int v12; // ebx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v14; // rsi
  unsigned int v15; // ecx
  USHORT v16; // bx
  USHORT *v17; // rdx
  __int64 v18; // r8
  USHORT v19; // ax
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int16 i; // bx
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  PVOID v24[4]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a4;
  Object = 0LL;
  v9 = 0LL;
  v24[0] = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( a2 )
      return 3221225475LL;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = 0x7FFFFFFF0000LL;
    }
    else
    {
      v11 = 0x7FFFFFFF0000LL;
    }
    if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
      v11 = (__int64)a7;
    *(_DWORD *)v11 = *(_DWORD *)v11;
  }
  if ( a2 )
  {
    v12 = -1073741821;
LABEL_41:
    *a7 = 0;
    return (unsigned int)v12;
  }
  if ( a4 >= 0x20 && (a4 & 0xF) == 0 )
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(0x101uLL, a4, 0x50707350u);
    v14 = Pool2;
    v24[2] = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, a3, v7);
      v15 = v14[6];
      if ( (unsigned int)(v7 - 16) >> 4 < v15 || *((_DWORD *)v14 + 2) )
        goto LABEL_19;
      v16 = 0;
      if ( (_WORD)v15 )
      {
        v17 = v14 + 12;
        v18 = v14[6];
        do
        {
          v19 = *v17;
          if ( *v17 <= v16 )
            v19 = v16;
          v16 = v19;
          v17 += 8;
          --v18;
        }
        while ( v18 );
      }
      if ( v16 >= KeQueryActiveGroupCount() )
      {
LABEL_19:
        v12 = -1073741811;
        goto LABEL_33;
      }
      v20 = (unsigned __int16)(v16 + 1);
      v21 = ExAllocatePool2(0x41uLL, 8 * v20 + 8, 0x50707350u);
      v9 = (struct _KAFFINITY_EX *)v21;
      if ( v21 )
      {
        *(_WORD *)v21 = 1;
        *(_WORD *)(v21 + 2) = v20;
        *(_DWORD *)(v21 + 4) = 0;
        memset_0((void *)(v21 + 8), 0, 8 * v20);
        for ( i = 0; i < v14[6]; ++i )
          KeAddGroupAffinityEx(&v9->Count, v14[8 * i + 12], *(_QWORD *)&v14[8 * i + 8]);
        v12 = PspReferenceCpuPartitionByHandle(*(_QWORD *)v14, (__int64)v24);
        if ( v12 >= 0 )
        {
          v12 = PspReferenceCpuPartitionByHandle(a1, (__int64)&Object);
          if ( v12 >= 0 )
            v12 = KeCpuPartitionMoveCpus(*(_QWORD *)Object, *(_QWORD *)v24[0], v9, 0);
        }
        goto LABEL_33;
      }
    }
    v12 = -1073741670;
LABEL_33:
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x50707350u);
    if ( v24[0] )
      ObfDereferenceObjectWithTag(v24[0], 0x50707350u);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x50707350u);
    if ( v14 )
      ExFreePoolWithTag(v14, 0x50707350u);
    goto LABEL_41;
  }
  return 3221225476LL;
}
