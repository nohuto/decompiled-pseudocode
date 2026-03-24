/*
 * XREFs of KeyboardClassWaitWakeComplete @ 0x1C0004B10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0004D60 (WPP_RECORDER_SF_qqd.c)
 *     KeyboardToggleWaitWake @ 0x1C0005E38 (KeyboardToggleWaitWake.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00067A4 (WPP_RECORDER_SF_qd.c)
 */

void __fastcall KeyboardClassWaitWakeComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  void *v6; // rsi
  KIRQL v7; // r8
  struct _IO_STATUS_BLOCK *v8; // rax
  struct _IO_STATUS_BLOCK *v9; // rdx
  int v10; // edx
  NTSTATUS Status; // eax
  int v12; // edx
  int v13; // r8d
  int v14; // r9d

  v6 = 0LL;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 9);
  v8 = (struct _IO_STATUS_BLOCK *)*((_QWORD *)Context + 39);
  if ( v8 && IoStatus == &v8[3] )
  {
    v6 = (void *)*((_QWORD *)Context + 39);
    *((_QWORD *)Context + 39) = 0LL;
  }
  else
  {
    v9 = (struct _IO_STATUS_BLOCK *)*((_QWORD *)Context + 37);
    if ( v9 && IoStatus == &v9[3] )
    {
      v6 = (void *)*((_QWORD *)Context + 37);
      *((_QWORD *)Context + 37) = 0LL;
      *((_BYTE *)Context + 304) = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 9, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v10, 5, 92);
  }
  Status = IoStatus->Status;
  if ( IoStatus->Status == -2147483631 )
    goto LABEL_6;
  if ( !Status )
  {
    PoRequestPowerIrp(
      *((PDEVICE_OBJECT *)Context + 3),
      2u,
      (POWER_STATE)1,
      KeyboardClassWWPowerUpComplete,
      Context,
      0LL);
    goto LABEL_6;
  }
  if ( Status == -1073741536 || Status == -1073741436 || Status == -1073741101 || Status == -1072431071 )
  {
LABEL_6:
    if ( IoStatus->Status < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v10, 5, 93);
    }
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v10, 5, 94);
  }
  if ( (int)KeyboardToggleWaitWake(Context, 0LL) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14);
  }
LABEL_7:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)Context + 1, v6, 0x20u);
}
