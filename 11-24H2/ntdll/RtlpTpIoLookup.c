/*
 * XREFs of RtlpTpIoLookup @ 0x1800BEF1C
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x1800BEDD0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpIoAlloc @ 0x1800BEC44 (RtlpTpIoAlloc.c)
 *     TpBindFileToDirect @ 0x1800BF8D0 (TpBindFileToDirect.c)
 *     RtlSplay @ 0x1800C0330 (RtlSplay.c)
 */

__int64 __fastcall RtlpTpIoLookup(unsigned __int64 *a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // rax
  __int64 *v10; // rax
  unsigned __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpTpIoTreeLock, a2, a3);
  v6 = RtlpTpIoTree;
  if ( !RtlpTpIoTree )
  {
    v8 = RtlpTpIoAlloc(&v12, (__int64)a2, a3);
    v7 = v12;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v7 = v6 - 96;
    v12 = v6 - 96;
    if ( *(volatile signed __int32 ***)(v6 - 96) == a2 )
    {
      v8 = TpBindFileToDirect(a3, v7 + 8, *(_QWORD *)(v6 - 16));
      if ( v8 >= 0 )
        ++*(_DWORD *)(v6 - 8);
      goto LABEL_16;
    }
    if ( *(_QWORD *)(v6 - 96) <= (unsigned __int64)a2 )
      break;
    v9 = *(_QWORD *)(v6 + 8);
    if ( !v9 )
    {
      v8 = RtlpTpIoAlloc(&v12, (__int64)a2, a3);
      v7 = v12;
      if ( !v12 )
        goto LABEL_16;
      v10 = (__int64 *)(v12 + 96);
      *(_QWORD *)(v6 + 8) = v12 + 96;
      goto LABEL_10;
    }
LABEL_15:
    v6 = v9;
  }
  v9 = *(_QWORD *)(v6 + 16);
  if ( v9 )
    goto LABEL_15;
  v8 = RtlpTpIoAlloc(&v12, (__int64)a2, a3);
  v7 = v12;
  if ( v12 )
  {
    v10 = (__int64 *)(v12 + 96);
    *(_QWORD *)(v6 + 16) = v12 + 96;
LABEL_10:
    *v10 = v6;
  }
LABEL_16:
  if ( v7 && RtlpTpIoTree != v7 + 96 )
    RtlpTpIoTree = RtlSplay(v7 + 96);
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  *a1 = v7;
  return (unsigned int)v8;
}
