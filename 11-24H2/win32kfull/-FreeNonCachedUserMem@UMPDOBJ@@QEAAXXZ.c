/*
 * XREFs of ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1400D8CD0
 * Callers:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1400D8410 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 *     UMPDThreadCleanup @ 0x1400D8A90 (UMPDThreadCleanup.c)
 *     NtGdiSetPUMPDOBJ @ 0x140262E70 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1400D930C (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1400D9E4C (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 */

void __fastcall UMPDOBJ::FreeNonCachedUserMem(UMPDOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  struct _UMPDHEAP *v5; // rcx

  if ( (unsigned int)UMPDOBJ::bSandboxedClient(this) )
  {
    *((_QWORD *)this + 53) = 0LL;
  }
  else if ( *((_QWORD *)this + 9) )
  {
    CurrentThread = GreGetCurrentThread(v3, v2);
    v5 = (struct _UMPDHEAP *)*((_QWORD *)this + 9);
    if ( *((struct _UMPDHEAP **)CurrentThread + 6) != v5 )
      DestroyUMPDHeap(v5);
    *((_QWORD *)this + 9) = 0LL;
  }
}
