/*
 * XREFs of ?ndisIsValidPMAdminConfigState@@YAHW4_NDIS_PM_ADMIN_CONFIG_STATE@@0@Z @ 0x1400B2C8C
 * Callers:
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1400B5F90 (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIsValidPMAdminConfigState(unsigned int a1, enum _NDIS_PM_ADMIN_CONFIG_STATE a2)
{
  if ( a1 > 2 )
    return 3221225485LL;
  if ( a2 )
    return 0LL;
  return a1 != 0 ? 0xC0000225 : 0;
}
