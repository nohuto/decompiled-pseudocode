/*
 * XREFs of XilCoreDeviceSlot_ClearDeviceContext @ 0x14002CA90
 * Callers:
 *     UsbDevice_SetDeviceDisabled @ 0x14000E7F4 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_DisableCompletion @ 0x14002C738 (UsbDevice_DisableCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x14000D698 (WPP_RECORDER_SF_qd.c)
 */

_UNKNOWN **__fastcall XilCoreDeviceSlot_ClearDeviceContext(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r10
  _UNKNOWN **result; // rax

  v3 = *(_QWORD *)(a1[3] + 16LL);
  *(_QWORD *)(a1[7] + 8LL * a3) = 0LL;
  *(_QWORD *)(v3 + 8LL * a3) = 0LL;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_qd(
                          *(_QWORD *)(a1[1] + 72LL),
                          4u,
                          0xAu,
                          0xAu,
                          (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids,
                          a2,
                          a3);
  return result;
}
