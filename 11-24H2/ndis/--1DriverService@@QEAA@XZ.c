/*
 * XREFs of ??1DriverService@@QEAA@XZ @ 0x14014AC24
 * Callers:
 *     ??1KModule@@QEAA@XZ @ 0x14014AC50 (--1KModule@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x14008ACB0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@P6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400DCC60 (--1-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@P6A_JPEAX@Z$1-ObfDereferenceObject@@YA_.c)
 */

void __fastcall DriverService::~DriverService(void **this)
{
  wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (*)(void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (*)(void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>(this + 5);
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(this, 0LL);
}
