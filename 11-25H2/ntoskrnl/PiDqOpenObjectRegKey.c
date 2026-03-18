/*
 * XREFs of PiDqOpenObjectRegKey @ 0x14083E018
 * Callers:
 *     PiDqActionDataGetChangedProperties @ 0x14083A250 (PiDqActionDataGetChangedProperties.c)
 *     PiDqPropertyCallback @ 0x1408D2660 (PiDqPropertyCallback.c)
 *     PiDqIrpPropertySet @ 0x14095E610 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140A49A08 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 * Callees:
 *     PiDqOpenUserObjectRegKey @ 0x14083E2D0 (PiDqOpenUserObjectRegKey.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAD38 (_PnpOpenObjectRegKey.c)
 */

__int64 __fastcall PiDqOpenObjectRegKey(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v8; // r8

  *a7 = 0LL;
  if ( !a1 )
    return PnpOpenObjectRegKey(PiPnpRtlCtx, a2, a3, a4, a5, (__int64)a7);
  if ( a1 != 1 )
    return 3221225485LL;
  v8 = (unsigned int)a4;
  LOBYTE(a4) = a5;
  return PiDqOpenUserObjectRegKey(a2, a3, v8, a4, a6, a7);
}
