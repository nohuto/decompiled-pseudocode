/*
 * XREFs of ?GetHookPriorityFloor@@YA?AW4tagThreadPriorityFloor@@PEBUtagHOOK@@@Z @ 0x14019A134
 * Callers:
 *     ?BoostHook@@YA_NPEAUtagTHREADINFO@@PEAUtagHOOK@@W4CallHookHints@@@Z @ 0x1402832C8 (-BoostHook@@YA_NPEAUtagTHREADINFO@@PEAUtagHOOK@@W4CallHookHints@@@Z.c)
 *     ?DeBoostHook@@YAXPEAUtagHOOK@@@Z @ 0x1402836F0 (-DeBoostHook@@YAXPEAUtagHOOK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetHookPriorityFloor(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( v1 == 13 )
    return 0LL;
  result = 0xFFFFFFFFLL;
  if ( v1 == 14 )
    return 1LL;
  return result;
}
