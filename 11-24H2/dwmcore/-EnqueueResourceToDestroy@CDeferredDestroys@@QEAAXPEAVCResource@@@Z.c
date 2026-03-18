/*
 * XREFs of ?EnqueueResourceToDestroy@CDeferredDestroys@@QEAAXPEAVCResource@@@Z @ 0x1801EE998
 * Callers:
 *     ?AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180132E48 (-AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDeferredDestroys::EnqueueResourceToDestroy(CDeferredDestroys *this, struct CResource *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    *(_QWORD *)(v2 + 64) = a2;
  else
    *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a2;
}
