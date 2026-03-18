/*
 * XREFs of XilCoreDeviceSlot_SetDeviceContext @ 0x14002C5CC
 * Callers:
 *     XilDeviceSlot_SetDeviceContext @ 0x14002C4C8 (XilDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140015624 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dq @ 0x14002CC1C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_qdi @ 0x1400346E8 (WPP_RECORDER_SF_qdi.c)
 *     XilUsbDevice_GetDeviceContextBufferSize @ 0x14003C9E4 (XilUsbDevice_GetDeviceContextBufferSize.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferLA @ 0x140057424 (XilCoreUsbDevice_GetDeviceContextBufferLA.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall XilCoreDeviceSlot_SetDeviceContext(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 DeviceContextBufferLA)
{
  __int64 v5; // rbp
  void *DeviceContextBufferVA; // r13
  __int64 v9; // rdx
  unsigned int DeviceContextBufferSize; // eax
  unsigned int v11; // edi
  __int64 v12; // r12
  size_t v13; // rdx
  __int64 v14; // r15
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdx

  v5 = a3;
  DeviceContextBufferVA = (void *)XilCoreUsbDevice_GetDeviceContextBufferVA(a2 + (*(_BYTE *)(a2 + 657) != 0
                                                                                ? 616LL
                                                                                : 608LL));
  DeviceContextBufferSize = XilUsbDevice_GetDeviceContextBufferSize(v9);
  v11 = 0;
  v12 = a1[7];
  v13 = DeviceContextBufferSize;
  v14 = *(_QWORD *)(a1[3] + 16LL);
  if ( !DeviceContextBufferLA )
    DeviceContextBufferLA = XilCoreUsbDevice_GetDeviceContextBufferLA(
                              a2 + (*(_BYTE *)(a2 + 657) != 0 ? 616LL : 608LL),
                              DeviceContextBufferSize);
  memset(DeviceContextBufferVA, 0, v13);
  v17 = *(_QWORD *)(v12 + 8 * v5);
  if ( v17 || *(_QWORD *)(v14 + 8 * v5) )
  {
    v11 = -1073741790;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(a1[1] + 72LL),
        v17,
        10,
        12,
        (__int64)&WPP_cb7a5c278baa3da630509d7564b04261_Traceguids,
        v5,
        *(_QWORD *)(v12 + 8 * v5));
    }
  }
  else
  {
    *(_QWORD *)(v12 + 8 * v5) = a2;
    *(_QWORD *)(v14 + 8 * v5) = DeviceContextBufferLA;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdi(*(_QWORD *)(a1[1] + 72LL), 0, v15, v16);
  }
  return v11;
}
