/*
 * XREFs of Endpoint_ClearStallTransferCompletion @ 0x14002C370
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     WPP_RECORDER_SF_ddqd @ 0x14002C4C0 (WPP_RECORDER_SF_ddqd.c)
 */

__int64 __fastcall Endpoint_ClearStallTransferCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddqd(Context[10], (_DWORD)Irp, (_DWORD)Context, 69);
  ESM_AddEsmEvent((__int64)Context);
  return 3221225494LL;
}
