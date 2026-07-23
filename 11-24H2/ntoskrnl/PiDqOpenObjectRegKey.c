/*
 * XREFs of PiDqOpenObjectRegKey @ 0x1408E14CC
 * Callers:
 *     PiDqPropertyCallback @ 0x1408D2280 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14097FDF8 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqIrpPropertySet @ 0x1409F2F90 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetChangedProperties @ 0x140A406E4 (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x1408E1780 (PiDqOpenUserObjectRegKey.c)
 */

__int64 __fastcall PiDqOpenObjectRegKey(
        int a1,
        WCHAR *a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  *a7 = 0LL;
  if ( !a1 )
    return PnpOpenObjectRegKey(*(_QWORD **)&PiPnpRtlCtx, a2, a3, a4, a5, (__int64)a7);
  if ( a1 == 1 )
    return PiDqOpenUserObjectRegKey(a2, a3, a4);
  return 3221225485LL;
}
