/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?AERTDestroyHeap@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001D99C
 * Callers:
 *     ??1CCpuMemoryBufferFactory@@UEAA@XZ @ 0x14001D950 (--1CCpuMemoryBufferFactory@@UEAA@XZ.c)
 * Callees:
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14001E648 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void AERTDestroyHeap(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void AERTDestroyHeap(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    AERTDestroyHeap(v1);
}
