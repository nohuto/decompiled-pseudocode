/*
 * XREFs of HUBHSM_GettingRootHubInfo @ 0x140009420
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_GetControllerInfo @ 0x140027318 (HUBUCX_GetControllerInfo.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x140028194 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 */

__int64 __fastcall HUBHSM_GettingRootHubInfo(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBUCX_GetControllerInfo(v1);
  HUBUCX_GetRootHubInfoUsingUCXIoctl(v1);
  return 1000LL;
}
