/*
 * XREFs of ??1CCrossProcessMemoryManager@@UEAA@XZ @ 0x14001D8BC
 * Callers:
 *     ??_ECCrossProcessMemoryManager@@UEAAPEAXI@Z @ 0x14001D880 (--_ECCrossProcessMemoryManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001D8E4 (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 */

void __fastcall CCrossProcessMemoryManager::~CCrossProcessMemoryManager(CCrossProcessMemoryManager *this)
{
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((char *)this + 40);
  *((_DWORD *)this + 3) = -1073741823;
}
