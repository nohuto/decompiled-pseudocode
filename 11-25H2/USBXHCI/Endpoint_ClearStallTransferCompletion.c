/*
 * XREFs of Endpoint_ClearStallTransferCompletion @ 0x14002C020
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     WPP_RECORDER_SF_ddqd @ 0x14002C170 (WPP_RECORDER_SF_ddqd.c)
 */

__int64 __fastcall Endpoint_ClearStallTransferCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddqd(Context[10], (_DWORD)Irp, (_DWORD)Context, 67);
  ESM_AddEsmEvent((__int64)Context);
  return 3221225494LL;
}
