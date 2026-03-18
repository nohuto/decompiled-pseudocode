/*
 * XREFs of ?ObjectInit@BufferCollectionObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1402245D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CBufferCollectionResource@DirectComposition@@IEAAJPEAPEAX_KU_LUID@@@Z @ 0x14022558C (-Initialize@CBufferCollectionResource@DirectComposition@@IEAAJPEAPEAX_KU_LUID@@@Z.c)
 */

__int64 __fastcall DirectComposition::BufferCollectionObject::ObjectInit(
        struct CompositionObject *a1,
        char *a2,
        struct ICompositionObject **a3)
{
  struct ICompositionObject *v3; // rax

  v3 = (struct CompositionObject *)((char *)a1 + 24);
  if ( a1 != (struct CompositionObject *)-24LL )
  {
    *((_QWORD *)a1 + 4) = 0LL;
    *((_QWORD *)a1 + 5) = 0LL;
    *((_QWORD *)a1 + 6) = 0LL;
    *((_QWORD *)a1 + 7) = 0LL;
    *(_QWORD *)v3 = &DirectComposition::CBufferCollectionResource::`vftable';
  }
  *a3 = v3;
  return DirectComposition::CBufferCollectionResource::Initialize(
           v3,
           *(void ***)a2,
           *((_QWORD *)a2 + 1),
           *(struct _LUID *)(a2 + 16));
}
