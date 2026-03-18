/*
 * XREFs of Usbh_SSH_HubActive @ 0x14000C160
 * Callers:
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhSsh_CheckHubIdle @ 0x1400044C4 (UsbhSsh_CheckHubIdle.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSshSuspendHub @ 0x140013464 (UsbhSshSuspendHub.c)
 *     UsbhEnableTimerObject @ 0x14002C5D0 (UsbhEnableTimerObject.c)
 *     UsbhUnlockSSH @ 0x140031080 (UsbhUnlockSSH.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubActive(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rsi
  int v8; // ebx
  _DWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids);
  if ( !a1 )
LABEL_25:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  switch ( a2 )
  {
    case 1:
      v8 = UsbhSsh_CheckHubIdle(a1, 0x140000000LL, a3, a4);
      if ( v8 < 0 )
      {
        UsbhUnlockSSH(a3);
        KeWaitForSingleObject((PVOID)(v7 + 3160), Executive, 0, 0, 0LL);
        if ( !*(_QWORD *)(v7 + 3312) && !*(_QWORD *)(v7 + 3304) && !*(_QWORD *)(v7 + 3296) )
        {
          v9 = FdoExt(a1);
          UsbhEnableTimerObject(a1, v7 + 3200, *(_DWORD *)(v7 + 5256), 0, (__int64)(v9 + 478), 2001228627);
        }
        KeReleaseSemaphore((PRKSEMAPHORE)(v7 + 3160), 16, 1, 0);
      }
      else
      {
        KeResetEvent((PRKEVENT)(v7 + 3384));
        *(_BYTE *)(v7 + 3416) = 0;
        UsbhUnlockSSH(a3);
        UsbhSshSuspendHub(a1, a3);
      }
      return (unsigned int)v8;
    case 2:
    case 3:
    case 7:
    case 8:
    case 9:
      UsbhUnlockSSH(a3);
      return (unsigned int)-1073741823;
    case 4:
      v10 = *(_QWORD *)(v7 + 3304);
      UsbhUnlockSSH(a3);
      return v10 != 0 ? 0xC0000001 : 0;
    case 5:
      goto LABEL_18;
    case 6:
      *(_BYTE *)(v7 + 3408) = 1;
LABEL_18:
      UsbhUnlockSSH(a3);
      return 0;
    default:
      v11 = *(_QWORD *)(a3 + 8);
      if ( !v11 )
        goto LABEL_25;
      v12 = *(_QWORD *)(v11 + 64);
      if ( !v12 )
        UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), 0LL);
      if ( *(_DWORD *)v12 != 541218120 )
        UsbhTrapFatal_Dbg(*(_QWORD *)(a3 + 8), *(_QWORD *)(v11 + 64));
      v13 = *(unsigned int *)(v12 + 3456);
      *(_DWORD *)(v12 + 3124) = 1;
      *(_DWORD *)(32 * v13 + v12 + 3468) = 1;
      *(_DWORD *)(a3 + 120) = 1734964085;
      *(_QWORD *)(v12 + 3192) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v12 + 3128), 16, 1, 0);
      return (unsigned int)-1073741823;
  }
}
