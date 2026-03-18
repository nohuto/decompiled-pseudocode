/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x140009D50
 * Callers:
 *     <none>
 * Callees:
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     Register_WriteSecureMmio @ 0x14000E158 (Register_WriteSecureMmio.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     WPP_RECORDER_SF_q @ 0x14002CE68 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
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
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r15
  unsigned int *v12; // r14
  __int16 Ulong; // ax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  char v17; // bl
  signed __int32 v18[8]; // [rsp+0h] [rbp-58h] BYREF
  int v19; // [rsp+68h] [rbp+10h] BYREF

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
      3196LL);
  v4 = *(_QWORD *)(v3 + 152);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    result = (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *(_QWORD *)(v3 + 72),
                            v2,
                            4,
                            92,
                            (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
                            v1);
  }
  v6 = (*(_QWORD *)(v3 + 736) & 0x20000000LL) == 0;
  *(_BYTE *)(v3 + 868) = 0;
  if ( v6 )
  {
    for ( i = 0; i < *(_DWORD *)(v4 + 16); ++i )
    {
      v8 = 0;
      if ( KeGetCurrentIrql() == 2 )
      {
        v9 = *(_QWORD *)(v4 + 8);
        if ( *(_BYTE *)(v9 + 1001) )
        {
          Controller_LowerAndTrackIrql(v9);
          v8 = 1;
        }
      }
      v10 = *(_QWORD *)(v4 + 48);
      v11 = 120LL * i;
      DynamicLock_Acquire(*(_QWORD *)(v11 + v10 + 24));
      *(_BYTE *)(v11 + v10 + 32) = v8;
      v12 = (unsigned int *)(*(_QWORD *)(v4 + 40) + 16LL * i);
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(v3 + 88), v12);
      v14 = *(_QWORD *)(v3 + 88);
      v15 = Ulong & 0xC200;
      v19 = v15;
      if ( *(_BYTE *)(*(_QWORD *)(v14 + 8) + 1001LL) )
      {
        Register_WriteSecureMmio(v14, v12, 2LL, &v19);
      }
      else
      {
        *v12 = v15;
        _InterlockedOr(v18, 0);
      }
      v16 = *(_QWORD *)(v4 + 48);
      v17 = *(_BYTE *)(v11 + v16 + 32);
      *(_BYTE *)(v11 + v16 + 32) = 0;
      result = (_UNKNOWN **)DynamicLock_Release(*(_QWORD *)(v11 + v16 + 24));
      if ( v17 )
        result = (_UNKNOWN **)Controller_RaiseAndTrackIrql(*(_QWORD *)(v4 + 8));
    }
  }
  return result;
}
