/*
 * XREFs of ?HampSystemCdplIsManaged@@YAKXZ @ 0x18004733C
 * Callers:
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180047074 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x180064F84 (-HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x180047418 (-CdplIsSupportedInl@@YAJPEAH@Z.c)
 */

__int64 HampSystemCdplIsManaged(void)
{
  unsigned int v0; // ebx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( (int)CdplIsSupportedInl(&v2) >= 0 )
    LOBYTE(v0) = v2 != 0;
  return v0;
}
