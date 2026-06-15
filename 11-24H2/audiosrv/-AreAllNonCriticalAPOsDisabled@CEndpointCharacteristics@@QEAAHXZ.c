/*
 * XREFs of ?AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180132CE0
 * Callers:
 *     ?UpdateAPOEnableStatus@EffectPack@@QEAAJXZ @ 0x180138C40 (-UpdateAPOEnableStatus@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(CEndpointCharacteristics *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
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
           &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
           pvar) >= 0
      && LOWORD(pvar[0]) == 19 )
    {
      LOBYTE(v2) = LODWORD(pvar[1]) == 1;
    }
    PropVariantClear(pvar);
  }
  return v2;
}
