/*
 * XREFs of UsbDevice_DeviceNotificationEventHandler @ 0x14003CBF8
 * Callers:
 *     Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624 (Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled.c)
 * Callees:
 *     WPP_RECORDER_SF_dqd @ 0x140032ECC (WPP_RECORDER_SF_dqd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

char __fastcall UsbDevice_DeviceNotificationEventHandler(_QWORD *a1, _DWORD *a2)
{
  char result; // al
  unsigned __int8 *v4; // rbx
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+38h] [rbp-10h]

  result = *a2 & 0xF0;
  if ( result == 16 )
  {
    v4 = (unsigned __int8 *)a2 + 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = *v4;
      v5 = *((unsigned __int8 *)a1 + 135);
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xCu,
        0x52u,
        (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
        v5,
        *a1,
        v6);
    }
    return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_14006BDC8)(UcxDriverGlobals, *a1, *v4);
  }
  return result;
}
