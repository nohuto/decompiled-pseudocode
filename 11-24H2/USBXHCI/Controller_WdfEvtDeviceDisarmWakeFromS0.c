/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x14000B2A0
 * Callers:
 *     <none>
 * Callees:
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000C970 (DynamicLock_Release.c)
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     Register_WriteSecureMmio @ 0x14001CBB4 (Register_WriteSecureMmio.c)
 *     WPP_RECORDER_SF_q @ 0x14002C6F8 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall Controller_WdfEvtDeviceDisarmWakeFromS0(__int64 a1)
{
  char v1; // bl
  int v2; // edx
  __int64 v3; // rsi
  __int64 v4; // rdi
  _UNKNOWN **result; // rax
  bool v6; // zf
  unsigned int i; // ebp
  char v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r15
  int *v11; // r14
  __int16 Ulong; // ax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  char v16; // bl
  signed __int32 v17[8]; // [rsp+0h] [rbp-58h] BYREF
  int v18; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  if ( *(_BYTE *)(v3 + 1001) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      3290LL);
  v4 = *(_QWORD *)(v3 + 152);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    result = (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *(_QWORD *)(v3 + 72),
                            v2,
                            4,
                            93,
                            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
                            v1);
  }
  v6 = (*(_QWORD *)(v3 + 736) & 0x20000000LL) == 0;
  *(_BYTE *)(v3 + 868) = 0;
  if ( v6 )
  {
    for ( i = 0; i < *(_DWORD *)(v4 + 16); ++i )
    {
      v8 = 0;
      if ( KeGetCurrentIrql() == 2 && *(_BYTE *)(*(_QWORD *)(v4 + 8) + 1001LL) )
      {
        Controller_LowerAndTrackIrql();
        v8 = 1;
      }
      v9 = *(_QWORD *)(v4 + 48);
      v10 = 120LL * i;
      DynamicLock_Acquire(*(_QWORD *)(v10 + v9 + 24));
      *(_BYTE *)(v10 + v9 + 32) = v8;
      v11 = (int *)(*(_QWORD *)(v4 + 40) + 16LL * i);
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(v3 + 88), v11);
      v13 = *(_QWORD *)(v3 + 88);
      v14 = Ulong & 0xC200;
      v18 = v14;
      if ( *(_BYTE *)(*(_QWORD *)(v13 + 8) + 1001LL) )
      {
        Register_WriteSecureMmio(v13, v11, 2LL, &v18);
      }
      else
      {
        *v11 = v14;
        _InterlockedOr(v17, 0);
      }
      v15 = *(_QWORD *)(v4 + 48);
      v16 = *(_BYTE *)(v10 + v15 + 32);
      *(_BYTE *)(v10 + v15 + 32) = 0;
      result = (_UNKNOWN **)DynamicLock_Release(*(_QWORD *)(v10 + v15 + 24));
      if ( v16 )
        result = (_UNKNOWN **)Controller_RaiseAndTrackIrql(*(_QWORD *)(v4 + 8));
    }
  }
  return result;
}
