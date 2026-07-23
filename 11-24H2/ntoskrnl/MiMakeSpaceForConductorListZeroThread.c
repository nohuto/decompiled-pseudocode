/*
 * XREFs of MiMakeSpaceForConductorListZeroThread @ 0x1407FFE14
 * Callers:
 *     MiInsertNewZeroThread @ 0x140690A00 (MiInsertNewZeroThread.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMakeSpaceForConductorListZeroThread(__int64 a1, __int64 *a2)
{
  __int64 v3; // r8
  const void **v5; // rsi
  __int64 v6; // rdx
  unsigned int *v7; // rbx
  __int64 v8; // rdx
  PVOID *v9; // rdi
  unsigned int v10; // ebp
  void *Pool; // rax
  void *v12; // r14
  const void *v13; // rdx
  unsigned int v14; // esi

  *a2 = 0LL;
  v3 = *(unsigned int *)(a1 + 60);
  if ( (unsigned int)v3 >= 0x3D )
    return 3221225769LL;
  v5 = (const void **)(a1 + 72);
  v6 = *(_QWORD *)(a1 + 72);
  v7 = (unsigned int *)(a1 + 64);
  if ( v6 )
  {
    if ( (int)v3 + 3 < *v7 )
    {
      v8 = v6 + 8 * v3 + 24;
      if ( v8 )
        goto LABEL_14;
    }
    v9 = (PVOID *)(a1 + 72);
  }
  else
  {
    v9 = (PVOID *)(a1 + 72);
  }
  v10 = v3 + 4;
  Pool = (void *)MiAllocatePool(0x40uLL, 56LL * (unsigned int)(v3 + 4), 1650092365);
  v12 = Pool;
  if ( !Pool )
    return 3221225773LL;
  v13 = *v5;
  if ( *v5 )
  {
    v14 = *v7;
    memmove(Pool, v13, 8LL * *v7);
    ExFreePoolWithTag(*v9, 0);
  }
  else
  {
    v14 = 3;
  }
  *v9 = v12;
  *v7 = v10;
  v8 = (__int64)v12 + 8 * v14;
LABEL_14:
  *a2 = v8;
  return 0LL;
}
