/*
 * XREFs of ?ConnectCallbackThunk@ServiceModuleBase@Internal@Windows@@SAJPEAUtagComCallData@@@Z @ 0x1800CC3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ServiceModuleBase::ConnectCallbackThunk(struct tagComCallData *a1)
{
  return (**(__int64 (__fastcall ***)(struct tagComCallData *))&a1->dwDispid)(a1);
}
