/*
 * XREFs of ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18005F090
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002A060 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800532D0 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180089088 (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

bool __fastcall RmpPolicyFilterActivityHostWithFlags(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  if ( ((unsigned __int8)a2 & 1) != 0 && !(unsigned int)RmpActivityHostIsRevocable(a1)
    || (v2 & 2) != 0 && RmpActivityHostHasPpleResourceSet(a1) )
  {
    return 0;
  }
  if ( (v2 & 4) != 0 )
    return RmpPolicyActivityHostIsValidEmptyTarget(a1);
  return 1;
}
