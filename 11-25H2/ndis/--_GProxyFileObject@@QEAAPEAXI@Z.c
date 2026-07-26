/*
 * XREFs of ??_GProxyFileObject@@QEAAPEAXI@Z @ 0x1400E3BD8
 * Callers:
 *     ndisKLoaderIrpCreateHandler @ 0x1400E3C90 (ndisKLoaderIrpCreateHandler.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUKLOADER_MODULE_REFERENCE__@@$$A6AXPEAU1@@Z$1?KLoaderDereferenceModule@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400E3BA0 (--1-$unique_storage@U-$resource_policy@PEAUKLOADER_MODULE_REFERENCE__@@$$A6AXPEAU1@@Z$1-KLoaderD.c)
 */

__int64 *__fastcall ProxyFileObject::`scalar deleting destructor'(__int64 *P)
{
  wil::details::unique_storage<wil::details::resource_policy<KLOADER_MODULE_REFERENCE__ *,void (KLOADER_MODULE_REFERENCE__ *),&void KLoaderDereferenceModule(KLOADER_MODULE_REFERENCE__ *),wistd::integral_constant<unsigned __int64,0>,KLOADER_MODULE_REFERENCE__ *,KLOADER_MODULE_REFERENCE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<KLOADER_MODULE_REFERENCE__ *,void (KLOADER_MODULE_REFERENCE__ *),&void KLoaderDereferenceModule(KLOADER_MODULE_REFERENCE__ *),wistd::integral_constant<unsigned __int64,0>,KLOADER_MODULE_REFERENCE__ *,KLOADER_MODULE_REFERENCE__ *,0,std::nullptr_t>>(P + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x62694C4Eu);
  return P;
}
