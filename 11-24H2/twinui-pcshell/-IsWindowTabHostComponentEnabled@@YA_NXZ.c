/*
 * XREFs of ?IsWindowTabHostComponentEnabled@@YA_NXZ @ 0x1803EC3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x180152ABC (-IsWindowTabHostEnabledOnSKU@@YA_NXZ.c)
 *     ?IsComponentEnabledInProfile@ShellComponentFilter@@QEAA_NAEBU_GUID@@@Z @ 0x18022CA6C (-IsComponentEnabledInProfile@ShellComponentFilter@@QEAA_NAEBU_GUID@@@Z.c)
 */

bool IsWindowTabHostComponentEnabled(void)
{
  char v0; // bl

  v0 = 0;
  if ( IsWindowTabHostEnabledOnSKU() )
    return ShellComponentFilter::IsComponentEnabledInProfile(shellComponentFilter, &stru_1807A1E30) != 0;
  return v0;
}
