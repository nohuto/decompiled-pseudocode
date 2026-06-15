/*
 * XREFs of ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x18012F6D0
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800F1DD0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CEndpointCharacteristics::SharedAndExclusiveCanCoexist(CEndpointCharacteristics *this)
{
  __int64 v1; // rcx
  bool v2; // bl
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)this + 9);
  v2 = 0;
  if ( v1 )
  {
    v5 = 0LL;
    *(_OWORD *)pvar = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(
           v1,
           &PKEY_Endpoint_AllowConcurrentSharedExclusive,
           pvar) >= 0
      && LOWORD(pvar[0]) == 19 )
    {
      v2 = LODWORD(pvar[1]) != 0;
    }
    PropVariantClear(pvar);
  }
  return v2;
}
