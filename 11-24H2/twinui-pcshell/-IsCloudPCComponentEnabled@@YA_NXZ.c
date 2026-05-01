/*
 * XREFs of ?IsCloudPCComponentEnabled@@YA_NXZ @ 0x180248E30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x18023DC68 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 */

char IsCloudPCComponentEnabled(void)
{
  if ( (unsigned int)CloudPCHelpers::GetCloudPCMode() )
    return 1;
  else
    return AreVirtualDesktopsEnabled();
}
