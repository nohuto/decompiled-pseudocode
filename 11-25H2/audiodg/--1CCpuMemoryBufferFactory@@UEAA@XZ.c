/*
 * XREFs of ??1CCpuMemoryBufferFactory@@UEAA@XZ @ 0x14001DC50
 * Callers:
 *     ??_GCCpuMemoryBufferFactory@@UEAAPEAXI@Z @ 0x14001DC10 (--_GCCpuMemoryBufferFactory@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?AERTDestroyHeap@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001DC9C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-AERTDestroyHeap@@YAX0@ZU-$integral_const.c)
 *     ?AERTUnlockHeap@@YAJPEAX@Z @ 0x14001E1A0 (-AERTUnlockHeap@@YAJPEAX@Z.c)
 */

void __fastcall CCpuMemoryBufferFactory::~CCpuMemoryBufferFactory(void **this)
{
  *this = &CCpuMemoryBufferFactory::`vftable';
  if ( *((_BYTE *)this + 24) )
  {
    AERTUnlockHeap(this[2]);
    *((_BYTE *)this + 24) = 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void AERTDestroyHeap(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void AERTDestroyHeap(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
