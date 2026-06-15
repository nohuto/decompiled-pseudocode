/*
 * XREFs of ?DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x18001D260
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator() @ 0x18001652C (_lambda_d1e543e32deb761d4b0a6b2d9b3a008a_--operator().c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::DoesProfileExistInStore(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this,
        const unsigned __int16 *a2)
{
  char v2; // bl
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+50h] [rbp+8h] BYREF
  const unsigned __int16 *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  v4[0] = this;
  v4[1] = &v6;
  v2 = 0;
  v4[2] = &v5;
  v5 = 0;
  if ( (int)lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator()((__int64)v4) >= 0 )
    return v5 != 0;
  return v2;
}
