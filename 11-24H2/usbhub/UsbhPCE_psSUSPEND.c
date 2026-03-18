/*
 * XREFs of UsbhPCE_psSUSPEND @ 0x1400351E0
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1400083A0 (UsbhHubRunPortChangeQueue.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x140008E28 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     WPP_RECORDER_SF_dq @ 0x14003DE14 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhPCE_psSUSPEND(__int64 a1, __int64 a2, int a3)
{
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      70,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 942753104;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_QWORD *)(v10 + 24) = v8;
      }
    }
  }
  return UsbhDispatch_PortChangeQueueNullEvent(a1, a2, 18, a3);
}
