/*
 * XREFs of MouseClassWaitWakeComplete @ 0x1C0004AB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0004CF0 (WPP_RECORDER_SF_qqd.c)
 *     MouseToggleWaitWake @ 0x1C0005A08 (MouseToggleWaitWake.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0006134 (WPP_RECORDER_SF_qd.c)
 */

void __fastcall MouseClassWaitWakeComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  void *v6; // rbp
  KIRQL v7; // r8
  struct _IO_STATUS_BLOCK *v8; // rax
  struct _IO_STATUS_BLOCK *v9; // rdx
  int v10; // edx
  int v11; // r8d
  NTSTATUS Status; // eax
  int v13; // edx
  int v14; // r8d
  int v15; // r9d

  v6 = 0LL;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 9);
  v8 = (struct _IO_STATUS_BLOCK *)*((_QWORD *)Context + 37);
  if ( v8 && IoStatus == &v8[3] )
  {
    v6 = (void *)*((_QWORD *)Context + 37);
    *((_QWORD *)Context + 37) = 0LL;
  }
  else
  {
    v9 = (struct _IO_STATUS_BLOCK *)*((_QWORD *)Context + 35);
    if ( v9 && IoStatus == &v9[3] )
    {
      v6 = (void *)*((_QWORD *)Context + 35);
      *((_QWORD *)Context + 35) = 0LL;
      *((_BYTE *)Context + 288) = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 9, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v10, v11, 86);
  }
  Status = IoStatus->Status;
  if ( !IoStatus->Status )
  {
    PoRequestPowerIrp(*((PDEVICE_OBJECT *)Context + 3), 2u, (POWER_STATE)1, MouseClassWWPowerUpComplete, Context, 0LL);
    goto LABEL_7;
  }
  if ( Status == -2147483631
    || Status == -1073741536
    || Status == -1073741436
    || Status == -1073741101
    || Status == -1072431071 )
  {
LABEL_7:
    if ( IoStatus->Status < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v10, v11, 87);
    }
    goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v10, v11, 88);
  }
  if ( (int)MouseToggleWaitWake(Context, 0LL) < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(WPP_GLOBAL_Control->DeviceExtension, v13, v14, v15);
LABEL_8:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)Context + 1, v6, 0x20u);
}
