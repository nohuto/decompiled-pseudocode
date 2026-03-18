/*
 * XREFs of XilUsbDevice_GetDeviceContextBufferSize @ 0x14003C964
 * Callers:
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x14000144C (XilCoreDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     WPP_RECORDER_SF_sds @ 0x140045A8C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall XilUsbDevice_GetDeviceContextBufferSize(__int64 a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

  v4 = 0;
  if ( *(_BYTE *)(a1 + 665) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 640);
    if ( v5 )
      return *(unsigned int *)(v5 + 44);
  }
  return v4;
}
