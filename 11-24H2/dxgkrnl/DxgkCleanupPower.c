/*
 * XREFs of DxgkCleanupPower @ 0x14023C478
 * Callers:
 *     DxgkUnload @ 0x1401CBE90 (DxgkUnload.c)
 *     DriverEntry @ 0x140435078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_140160D17 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1401611F0 )
    {
      PoUnregisterPowerSettingCallback(qword_1401611F0);
      qword_1401611F0 = 0LL;
    }
    if ( qword_140161280 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_140161280, qword_140161280 | 3, qword_140161280 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_140161280 = 0LL;
      }
    }
  }
}
