/*
 * XREFs of ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x180066F74
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18008C498 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z @ 0x180067020 (-GetBlob@CUnsupportedConnectorFormats@@QEAAJPEAPEAEPEAK@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CEndpointCharacteristics::CacheUnsupportedConnectorFormats(
        CEndpointCharacteristics *this,
        struct CUnsupportedConnectorFormats *a2)
{
  int v2; // eax
  __int128 pvar; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 *v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h] BYREF
  int v7; // [rsp+48h] [rbp-20h]

  v5 = 0LL;
  v2 = 200 * *(_DWORD *)a2;
  pvar = 0LL;
  v6 = PKEY_AudioEngine_Connector_UnsupportedFormats;
  v7 = v2 + 2;
  LOWORD(pvar) = 65;
  if ( CUnsupportedConnectorFormats::GetBlob(a2, &v5, (unsigned int *)&pvar + 2) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *, __int128 *))(**((_QWORD **)this + 9) + 48LL))(
      *((_QWORD *)this + 9),
      &v6,
      &pvar);
    PropVariantClear((PROPVARIANT *)&pvar);
  }
}
