/*
 * XREFs of PipUpdateSetupInProgressNotify @ 0x14070E398
 * Callers:
 *     PipUpdateSetupInProgressCallback @ 0x14070E380 (PipUpdateSetupInProgressCallback.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14069D5A0 (ZwNotifyChangeKey.c)
 *     PipUpdateSetupInProgress @ 0x14070E278 (PipUpdateSetupInProgress.c)
 */

void __fastcall PipUpdateSetupInProgressNotify(void *a1, char a2)
{
  void *v4; // rbx

  if ( PnpSetupInProgress || PnpSetupOOBEInProgress )
  {
    v4 = a1;
    if ( ZwNotifyChangeKey(a1, 0LL, PnpSetupWorkItem, (PVOID)1, &PnpSetupIoStatusBlock, 4u, 0, 0LL, 0, 1u) >= 0 )
      v4 = 0LL;
    if ( a2 )
      PipUpdateSetupInProgress(a1);
    if ( v4 )
      ZwClose(v4);
  }
}
