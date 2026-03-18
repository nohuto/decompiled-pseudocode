/*
 * XREFs of UsbhQueuePauseChange @ 0x140006628
 * Callers:
 *     UsbhBusPause_Action @ 0x140005D1C (UsbhBusPause_Action.c)
 *     UsbhHubProcessIsr @ 0x14000D190 (UsbhHubProcessIsr.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEvent @ 0x140008E50 (UsbhDispatch_PortChangeQueueEvent.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhQueuePauseChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // [rsp+88h] [rbp+20h]

  v4 = (unsigned __int16)a2;
  v5 = a3;
  HIDWORD(v18) = 0;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      a4 = *(_QWORD *)(a1 + 64);
      if ( a4 )
      {
        v7 = *(_QWORD *)(a4 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a4 + 880)) & *(_DWORD *)(a4 + 884));
        *(_DWORD *)v7 = 829912937;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a3;
        *(_QWORD *)(v7 + 24) = (unsigned __int16)a2;
      }
    }
  }
  LODWORD(v18) = 0x80000;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      79,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      a2);
  result = (unsigned int)UsbhLogMask;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      a2 = *(_QWORD *)(a1 + 64);
      if ( a2 )
      {
        result = 1413771367LL;
        v9 = *(_QWORD *)(a2 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a2 + 880)) & *(_DWORD *)(a2 + 884));
        *(_DWORD *)v9 = 1413771367;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = v4;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
  if ( (_WORD)v4 )
  {
    v10 = FdoExt(a1, a2, a3, a4);
    result = FdoExt(a1, v11, v12, v13);
    if ( (unsigned __int16)v4 <= *(unsigned __int8 *)(result + 2938) )
    {
      v14 = *(_QWORD *)(v10 + 3056);
      if ( v14 )
      {
        result = (unsigned int)UsbhLogMask;
        v15 = v14 + 2928 * v4 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v16 = *(_QWORD *)(a1 + 64);
            if ( v16 )
            {
              result = 1044672615LL;
              v17 = *(_QWORD *)(v16 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
              *(_DWORD *)v17 = 1044672615;
              *(_QWORD *)(v17 + 8) = 0LL;
              *(_QWORD *)(v17 + 16) = v4;
              *(_QWORD *)(v17 + 24) = v15;
            }
          }
        }
        if ( v15 )
          result = UsbhDispatch_PortChangeQueueEvent(a1, v15, 4, v5, v18, 0, 0LL);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_d(
               WPP_GLOBAL_Control->DeviceExtension,
               0,
               1,
               80,
               (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
               v4);
  }
  return result;
}
