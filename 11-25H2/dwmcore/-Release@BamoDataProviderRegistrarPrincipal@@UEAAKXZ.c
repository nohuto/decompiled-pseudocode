/*
 * XREFs of ?Release@BamoDataProviderRegistrarPrincipal@@UEAAKXZ @ 0x18027B520
 * Callers:
 *     ?Release@BamoDataSourceProxy@@W7EAAKXZ @ 0x18027B540 (-Release@BamoDataSourceProxy@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataProviderRegistrarPrincipal::Release(BamoDataProviderRegistrarPrincipal *this)
{
  return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
}
