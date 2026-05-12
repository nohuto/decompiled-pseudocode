/*
 * XREFs of NvmeControllerResetWorkItemCallback @ 0x1400F4D80
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerReset @ 0x1400F488C (NvmeControllerReset.c)
 */

void __fastcall NvmeControllerResetWorkItemCallback(PDEVICE_OBJECT DeviceObject, _DWORD *Context)
{
  volatile signed __int32 *v2; // rbx

  if ( Context )
  {
    v2 = Context - 356;
    NvmeControllerReset((__int64)(Context - 356), (char)Context, Context[2]);
    _interlockedbittestandreset(v2 + 268, 7u);
  }
}
