/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_ETHREAD@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400EB17C
 * Callers:
 *     ??1_NDIS_THREAD_EXIT_REGISTRATION@@QEAA@XZ @ 0x1400EB1B4 (--1_NDIS_THREAD_EXIT_REGISTRATION@@QEAA@XZ.c)
 *     NdisRegisterUserThreadExitCallback @ 0x1400EB2D0 (NdisRegisterUserThreadExitCallback.c)
 *     NdisUnregisterUserThreadExitCallback @ 0x1400EB720 (NdisUnregisterUserThreadExitCallback.c)
 *     ndisThreadStateDelete @ 0x1400EBAB0 (ndisThreadStateDelete.c)
 * Callees:
 *     ??$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@Z @ 0x1400E3B84 (--$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_ETHREAD *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_ETHREAD *,_ETHREAD *,0,std::nullptr_t>>(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  LONG_PTR (__stdcall *v3)(PVOID); // [rsp+38h] [rbp+10h] BYREF

  result = *a1;
  if ( *a1 )
  {
    v2 = *a1;
    v3 = ObfDereferenceObject;
    return wistd::invoke<__int64 (*)(void *),_DRIVER_OBJECT * &>((__int64 (__fastcall **)(_QWORD))&v3, &v2);
  }
  return result;
}
