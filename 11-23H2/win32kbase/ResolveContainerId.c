/*
 * XREFs of ResolveContainerId @ 0x1C01E89FC
 * Callers:
 *     NtUserGetInputContainerId @ 0x1C01447A0 (NtUserGetInputContainerId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall ResolveContainerId(const struct _GUID *a1, struct CONTAINER_ID *a2)
{
  int v2; // eax

  if ( gpfnIVResolveContainerId )
    v2 = gpfnIVResolveContainerId(a1, a2);
  else
    v2 = -1073741637;
  return v2 >= 0;
}
