/*
 * XREFs of HamRpcSrvTerminateSelfOnRequiredProcessExit @ 0x180081CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvTerminateSelfOnRequiredProcessExit(__int64 a1, void *a2, DWORD a3, char a4)
{
  return HamSrvTerminateSelfOnProcessExit(a1, a2, a3, a4);
}
