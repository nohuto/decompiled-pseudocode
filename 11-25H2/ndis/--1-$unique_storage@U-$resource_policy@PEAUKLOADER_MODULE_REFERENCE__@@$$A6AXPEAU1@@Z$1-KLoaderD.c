/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUKLOADER_MODULE_REFERENCE__@@$$A6AXPEAU1@@Z$1?KLoaderDereferenceModule@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400E3BA0
 * Callers:
 *     ??_GProxyFileObject@@QEAAPEAXI@Z @ 0x1400E3BD8 (--_GProxyFileObject@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@Z @ 0x1400E3B84 (--$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<KLOADER_MODULE_REFERENCE__ *,void (KLOADER_MODULE_REFERENCE__ *),&void KLoaderDereferenceModule(KLOADER_MODULE_REFERENCE__ *),wistd::integral_constant<unsigned __int64,0>,KLOADER_MODULE_REFERENCE__ *,KLOADER_MODULE_REFERENCE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<KLOADER_MODULE_REFERENCE__ *,void (KLOADER_MODULE_REFERENCE__ *),&void KLoaderDereferenceModule(KLOADER_MODULE_REFERENCE__ *),wistd::integral_constant<unsigned __int64,0>,KLOADER_MODULE_REFERENCE__ *,KLOADER_MODULE_REFERENCE__ *,0,std::nullptr_t>>(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall *v3)(struct KLOADER_MODULE_REFERENCE__ *); // [rsp+38h] [rbp+10h] BYREF

  result = *a1;
  if ( *a1 )
  {
    v2 = *a1;
    v3 = KLoaderDereferenceModule;
    return wistd::invoke<__int64 (*)(void *),_DRIVER_OBJECT * &>((__int64 (__fastcall **)(_QWORD))&v3, &v2);
  }
  return result;
}
