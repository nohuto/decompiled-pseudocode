/*
 * XREFs of ??1CSurfaceManager@@MEAA@XZ @ 0x180260F30
 * Callers:
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x18025E458 (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x1801581DC (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Clo_ea_1801581DC.c)
 *     ?RemoveElement@?$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@QEAAXPEAVCCompositionSurfaceMap@CCompositionSurfaceManager@@@Z @ 0x1801EB0B0 (-RemoveElement@-$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@.c)
 */

void __fastcall CSurfaceManager::~CSurfaceManager(CSurfaceManager *this)
{
  HANDLE *v1; // rdi
  HANDLE *v2; // rsi
  const void *v4; // rcx
  struct _RTL_GENERIC_TABLE *i; // rbx
  PVOID v6; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v1 = (HANDLE *)((char *)this + 120);
  *((_BYTE *)this + 144) = 1;
  v2 = (HANDLE *)((char *)this + 128);
  if ( (unsigned __int64)(*((_QWORD *)this + 15) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    SetEvent(*v2);
    WaitForSingleObject(*v1, 0xFFFFFFFF);
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(v1);
  }
  v4 = (const void *)*((_QWORD *)this + 13);
  if ( v4 )
    UnmapViewOfFile(v4);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 17);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v2);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v1);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 12);
  *((_QWORD *)this + 2) = &CCompositionSurfaceManager::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 24);
        ;
        CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::RemoveElement(i, v6) )
  {
    RestartKey = 0LL;
    v6 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v6 )
      break;
  }
}
