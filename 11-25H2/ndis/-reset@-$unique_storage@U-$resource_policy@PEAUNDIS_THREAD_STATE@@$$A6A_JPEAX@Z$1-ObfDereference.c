/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUNDIS_THREAD_STATE@@@Z @ 0x1400EB278
 * Callers:
 *     NdisRegisterUserThreadExitCallback @ 0x1400EB2D0 (NdisRegisterUserThreadExitCallback.c)
 *     ?ndisCreateThreadStateObject@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDIS_THREAD_STATE@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1400EB8B8 (-ndisCreateThreadStateObject@@YAJAEAV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDI.c)
 * Callees:
 *     ??$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@Z @ 0x1400E3B84 (--$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<NDIS_THREAD_STATE *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,NDIS_THREAD_STATE *,NDIS_THREAD_STATE *,0,std::nullptr_t>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  LONG_PTR (__stdcall *v6)(PVOID); // [rsp+38h] [rbp+10h] BYREF

  result = *a1;
  if ( *a1 )
  {
    v5 = *a1;
    v6 = ObfDereferenceObject;
    result = wistd::invoke<__int64 (*)(void *),_DRIVER_OBJECT * &>((__int64 (__fastcall **)(_QWORD))&v6, &v5);
  }
  *a1 = a2;
  return result;
}
