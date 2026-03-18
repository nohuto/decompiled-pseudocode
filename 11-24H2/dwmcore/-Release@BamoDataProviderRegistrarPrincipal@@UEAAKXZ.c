/*
 * XREFs of ?Release@BamoDataProviderRegistrarPrincipal@@UEAAKXZ @ 0x180270E10
 * Callers:
 *     ?Release@BamoDataSourceProxy@@W7EAAKXZ @ 0x180270E30 (-Release@BamoDataSourceProxy@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataProviderRegistrarPrincipal::Release(BamoDataProviderRegistrarPrincipal *this)
{
  return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
}
