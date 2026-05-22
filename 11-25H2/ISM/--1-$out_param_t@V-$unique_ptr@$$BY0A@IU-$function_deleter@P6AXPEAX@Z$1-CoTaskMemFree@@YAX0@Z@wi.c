/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@$$BY0A@IU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800E4ACC
 * Callers:
 *     ?SetAmbientPids@LampArrayDevice@@QEAAXPEAUIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@@Z @ 0x1800E51A0 (-SetAmbientPids@LampArrayDevice@@QEAAXPEAUIAmbientDeviceMappingChangedEventArgs@Internal@Lights@.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<unsigned int [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<unsigned int [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        __int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      CoTaskMemFree(v1);
  }
}
