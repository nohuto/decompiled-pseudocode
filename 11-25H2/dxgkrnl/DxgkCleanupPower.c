/*
 * XREFs of DxgkCleanupPower @ 0x140235A98
 * Callers:
 *     DxgkUnload @ 0x1401C6C00 (DxgkUnload.c)
 *     DriverEntry @ 0x140433078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_14015DD57 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_14015E230 )
    {
      PoUnregisterPowerSettingCallback(qword_14015E230);
      qword_14015E230 = 0LL;
    }
    if ( qword_14015E2C0 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_14015E2C0, qword_14015E2C0 | 3, qword_14015E2C0 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_14015E2C0 = 0LL;
      }
    }
  }
}
