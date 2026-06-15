/*
 * XREFs of ?IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ @ 0x18007CB00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800AB328 (IsGetDefaultSpatialRenderingModePresent.c)
 */

char __fastcall CSpatialAudioTech::IsLegacyVssRelevant(CSpatialAudioTech *this, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // bl
  CLSID pClsid; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v4 = 0;
  if ( byte_1801D093B )
    return byte_1801D093A;
  byte_1801D093B = 1;
  if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(
                           this,
                           a2,
                           a3,
                           a4,
                           *(_QWORD *)&pClsid.Data1,
                           *(_QWORD *)pClsid.Data4,
                           v7,
                           v8)
    || (unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform() )
  {
    pClsid = 0LL;
    v4 = CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) >= 0;
    byte_1801D093A = v4;
  }
  else
  {
    byte_1801D093A = 0;
  }
  return v4;
}
