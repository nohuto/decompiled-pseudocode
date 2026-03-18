/*
 * XREFs of PackMouseSettings @ 0x140213938
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x140213C58 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     GetMouseSensitivity @ 0x1401080E0 (GetMouseSensitivity.c)
 */

__int64 __fastcall PackMouseSettings(_DWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  *a1 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 19928) + 1988LL);
  a1[1] = GetMouseSensitivity(0LL);
  result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v2) + 19928) + 4988LL);
  a1[2] = result;
  return result;
}
