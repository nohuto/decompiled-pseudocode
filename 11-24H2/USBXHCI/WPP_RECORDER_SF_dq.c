/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x14000212C
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x140001110 (UsbDevice_DeviceResetCompletion.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x14000144C (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_DisableCompletion @ 0x140001D68 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x140002568 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x140029C68 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_UcxEvtReset @ 0x14002DE50 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtDisable @ 0x14002E4E0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_SetAddressCompletion @ 0x14002F8B0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x14002FC80 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x140030810 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x140039910 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_UpdateCompletion @ 0x14003BB80 (UsbDevice_UpdateCompletion.c)
 *     UsbDevice_ConfigureEndpointCompletion @ 0x14004D610 (UsbDevice_ConfigureEndpointCompletion.c)
 *     UsbDevice_DropEndpointsCompletion @ 0x14004D8A0 (UsbDevice_DropEndpointsCompletion.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_dq(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+50h] [rbp-18h]
  __int64 v14; // [rsp+58h] [rbp-10h]
  __int64 v15; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, (__int64 *)va, 4LL, va1, 8LL, 0LL, v13, v14);
}
