/*
 * XREFs of PiDqOpenObjectRegKey @ 0x140909DAC
 * Callers:
 *     PiDqPropertyCallback @ 0x1408D4890 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140994DB8 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqIrpPropertySet @ 0x1409FA620 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetChangedProperties @ 0x140A499C4 (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     _PnpOpenObjectRegKey @ 0x1408CD438 (_PnpOpenObjectRegKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x14090A064 (PiDqOpenUserObjectRegKey.c)
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
