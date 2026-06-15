/*
 * XREFs of _PublishApoTelemetry_::_1_::dtor$49 @ 0x14009500F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall PublishApoTelemetry_::_1_::dtor_49(__int64 a1, __int64 a2)
{
  return wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::~unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>((PROPVARIANT *)(a2 + 1528));
}
