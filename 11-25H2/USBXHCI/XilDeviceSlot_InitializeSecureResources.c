/*
 * XREFs of XilDeviceSlot_InitializeSecureResources @ 0x140045E80
 * Callers:
 *     DeviceSlot_Initialize @ 0x14000D658 (DeviceSlot_Initialize.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

__int64 __fastcall XilDeviceSlot_InitializeSecureResources(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // r10
  int v4; // eax
  unsigned int v5; // ebx
  void *v6; // rdx
  void *v7; // rdx
  int v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]

  v1 = *(_QWORD *)(a1[9] + 8);
  v2 = *a1;
  v3 = *(_QWORD *)(v1 + 112);
  v10 = 0LL;
  v14 = 0;
  v9 = 0;
  v11 = 0LL;
  v12 = v2;
  v13 = 24;
  v4 = SecureChannel_SendRequestSynchronously(v3, (GUID *)&v10, 40, (__int64)&v9, 4);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = &WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids;
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v1 + 72),
          (_DWORD)v7,
          10,
          20,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v9);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotInitialize failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        460);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = &WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids;
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 72),
      (_DWORD)v6,
      10,
      19,
      (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
      v4);
  }
  return v5;
}
