/*
 * XREFs of RtlpTpIoLookup @ 0x1800B6CDC
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x1800B6B90 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpIoAlloc @ 0x1800B6A04 (RtlpTpIoAlloc.c)
 *     TpBindFileToDirect @ 0x1800B7690 (TpBindFileToDirect.c)
 *     RtlSplay @ 0x1800B80F0 (RtlSplay.c)
 */

__int64 __fastcall RtlpTpIoLookup(_RTL_SPLAY_LINKS **a1, unsigned __int64 a2, void *a3)
{
  PRTL_SPLAY_LINKS v6; // rbx
  _RTL_SPLAY_LINKS *v7; // rdi
  int v8; // esi
  _RTL_SPLAY_LINKS *LeftChild; // rax
  PRTL_SPLAY_LINKS *p_Parent; // rax
  PRTL_SPLAY_LINKS v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v6 = RtlpTpIoTree;
  if ( !RtlpTpIoTree )
  {
    v8 = RtlpTpIoAlloc(&v12, a2, a3);
    v7 = v12;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v7 = v6 - 4;
    v12 = v6 - 4;
    if ( v6[-4].Parent == (_RTL_SPLAY_LINKS *)a2 )
    {
      v8 = TpBindFileToDirect(a3);
      if ( v8 >= 0 )
        ++LODWORD(v6[-1].RightChild);
      goto LABEL_16;
    }
    if ( v6[-4].Parent <= (_RTL_SPLAY_LINKS *)a2 )
      break;
    LeftChild = v6->LeftChild;
    if ( !LeftChild )
    {
      v8 = RtlpTpIoAlloc(&v12, a2, a3);
      v7 = v12;
      if ( !v12 )
        goto LABEL_16;
      p_Parent = &v12[4].Parent;
      v6->LeftChild = v12 + 4;
      goto LABEL_10;
    }
LABEL_15:
    v6 = LeftChild;
  }
  LeftChild = v6->RightChild;
  if ( LeftChild )
    goto LABEL_15;
  v8 = RtlpTpIoAlloc(&v12, a2, a3);
  v7 = v12;
  if ( v12 )
  {
    p_Parent = &v12[4].Parent;
    v6->RightChild = v12 + 4;
LABEL_10:
    *p_Parent = v6;
  }
LABEL_16:
  if ( v7 && RtlpTpIoTree != &v7[4] )
    RtlpTpIoTree = RtlSplay(v7 + 4);
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  *a1 = v7;
  return (unsigned int)v8;
}
