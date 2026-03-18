/*
 * XREFs of ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x14006E0EC
 * Callers:
 *     NtDCompositionWaitForChannel @ 0x14006DF10 (NtDCompositionWaitForChannel.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x14007E0B8 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x14007F850 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(
        DirectComposition::CApplicationChannel *this,
        char a2)
{
  char v2; // di
  char v3; // bl
  char v4; // bp
  char v5; // al

  v2 = 0;
  v3 = 1;
  v4 = 1;
  v5 = 0;
  do
  {
    if ( *((int *)this + 63) <= 0 )
      break;
    if ( v5 && KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)this + 30) + 8LL), UserRequest, 0, 1u, 0LL) )
      v4 = 0;
    if ( DirectComposition::CApplicationChannel::ProcessReturnedBatches(this) )
      v2 = 1;
    if ( !a2 && v2 )
      return v3;
    v5 = 1;
  }
  while ( v4 );
  if ( !v2 || a2 && *((_DWORD *)this + 63) )
    return 0;
  return v3;
}
