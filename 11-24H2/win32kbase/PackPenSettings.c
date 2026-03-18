/*
 * XREFs of PackPenSettings @ 0x140213990
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x140213C58 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PackPenSettings(_DWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  a1[3] = *(_DWORD *)(W32GetUserSessionState(a1) + 67376);
  a1[4] = *(_DWORD *)(W32GetUserSessionState(v2) + 67328);
  result = W32GetUserSessionState(v3);
  a1[5] = *(_DWORD *)(result + 67392);
  return result;
}
