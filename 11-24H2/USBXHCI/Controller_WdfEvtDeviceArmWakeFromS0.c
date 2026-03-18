/*
 * XREFs of Controller_WdfEvtDeviceArmWakeFromS0 @ 0x14000A640
 * Callers:
 *     <none>
 * Callees:
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000C924 (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     Register_WriteSecureMmio @ 0x14001CBB4 (Register_WriteSecureMmio.c)
 *     WPP_RECORDER_SF_q @ 0x14002C6F8 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceArmWakeFromS0(__int64 a1)
{
  char v1; // bl
  int v2; // edx
  __int64 v3; // rbp
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // r15
  char v7; // r12
  __int64 v8; // rbx
  int *v9; // r14
  __int16 Ulong; // ax
  __int64 v11; // rcx
  int v12; // eax
  signed __int32 v14[8]; // [rsp+0h] [rbp-58h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

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
      3237LL);
  v4 = *(_QWORD *)(v3 + 152);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(v3 + 72), v2, 4, 92, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v1);
  }
  v5 = 0;
  for ( *(_BYTE *)(v3 + 868) = 1; v5 < *(_DWORD *)(v4 + 16); ++v5 )
  {
    v6 = 120LL * v5;
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 48) + v6 + 64) & 2) == 0 )
    {
      v7 = 0;
      if ( KeGetCurrentIrql() == 2 && *(_BYTE *)(*(_QWORD *)(v4 + 8) + 1001LL) )
      {
        Controller_LowerAndTrackIrql();
        v7 = 1;
      }
      v8 = *(_QWORD *)(v4 + 48);
      DynamicLock_Acquire(*(_QWORD *)(v6 + v8 + 24));
      *(_BYTE *)(v6 + v8 + 32) = v7;
      v9 = (int *)(*(_QWORD *)(v4 + 40) + 16LL * v5);
      Ulong = XilRegister_ReadUlong(*(_QWORD *)(v3 + 88), v9);
      v11 = *(_QWORD *)(v3 + 88);
      v12 = Ulong & 0xC200 | 0xE000000;
      v15 = v12;
      if ( *(_BYTE *)(*(_QWORD *)(v11 + 8) + 1001LL) )
      {
        Register_WriteSecureMmio(v11, v9, 2LL, &v15);
      }
      else
      {
        *v9 = v12;
        _InterlockedOr(v14, 0);
      }
      RootHub_ReleaseReadModifyWriteLock(v4, v5);
    }
  }
  return 0LL;
}
