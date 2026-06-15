/*
 * XREFs of ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x1801561C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180062F48 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 */

void __fastcall AtmosCheck::StaticClientAtmosCheckEventFired(AtmosCheck *a1, __int64 a2, __int64 a3, __int64 a4)
{
  AtmosCheck::Trace(a1, "Global\\Client_Atmos_Check_Event is signaled", 0LL, a4);
  *((_DWORD *)a1 + 46) = 8;
  AtmosCheck::PerformLicenseCheck(a1, 1);
}
