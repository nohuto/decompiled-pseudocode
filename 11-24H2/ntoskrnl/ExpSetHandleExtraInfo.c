/*
 * XREFs of ExpSetHandleExtraInfo @ 0x14094CF14
 * Callers:
 *     ExpDuplicateSingleHandle @ 0x140891D94 (ExpDuplicateSingleHandle.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExpFreeTablePagedPool @ 0x1408497A4 (ExpFreeTablePagedPool.c)
 *     ExpAllocateTablePagedPool @ 0x14094D7D0 (ExpAllocateTablePagedPool.c)
 */

__int64 __fastcall ExpSetHandleExtraInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbp
  volatile signed __int64 *v6; // rax
  volatile signed __int64 *v7; // rdi
  volatile signed __int64 v8; // rdx
  void *TablePagedPool; // rax

  v5 = (unsigned __int8)((unsigned int)a2 >> 2);
  v6 = (volatile signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  v7 = v6;
  if ( !v6 )
    return 3221225473LL;
  v8 = *v6;
  if ( *v6 )
    goto LABEL_3;
  TablePagedPool = (void *)ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 2048LL);
  v8 = (volatile signed __int64)TablePagedPool;
  if ( TablePagedPool )
  {
    if ( !_InterlockedCompareExchange64(v7, (signed __int64)TablePagedPool, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
      goto LABEL_3;
    }
    ExpFreeTablePagedPool(*(_QWORD *)(a1 + 16), TablePagedPool, 0x800uLL);
    v8 = *v7;
    if ( *v7 )
    {
LABEL_3:
      *(_QWORD *)(v8 + 8 * v5) = *a3;
      return 0LL;
    }
  }
  return 3221225626LL;
}
