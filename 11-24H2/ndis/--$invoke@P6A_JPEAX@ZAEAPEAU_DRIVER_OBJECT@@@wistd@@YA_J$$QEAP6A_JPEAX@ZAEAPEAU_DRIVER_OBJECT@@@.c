/*
 * XREFs of ??$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@Z @ 0x1400DC974
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAUKLOADER_MODULE_REFERENCE__@@$$A6AXPEAU1@@Z$1?KLoaderDereferenceModule@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400DC990 (--1-$unique_storage@U-$resource_policy@PEAUKLOADER_MODULE_REFERENCE__@@$$A6AXPEAU1@@Z$1-KLoaderD.c)
 *     ndisKLoaderIrpCreateHandler @ 0x1400DCA80 (ndisKLoaderIrpCreateHandler.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400E3F6C (--1-$unique_storage@U-$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1-ObfDereferenceObject@@YA_J0.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DRIVER_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400E3FCC (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DRIVER_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUNDIS_THREAD_STATE@@@Z @ 0x1400E4068 (-reset@-$unique_storage@U-$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1-ObfDereference.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wistd::invoke<__int64 (*)(void *),_DRIVER_OBJECT * &>(__int64 (__fastcall **a1)(_QWORD), _QWORD *a2)
{
  return (*a1)(*a2);
}
