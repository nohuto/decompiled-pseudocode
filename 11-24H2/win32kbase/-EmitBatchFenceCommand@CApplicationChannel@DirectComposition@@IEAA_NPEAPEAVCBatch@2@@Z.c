/*
 * XREFs of ?EmitBatchFenceCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B88C8
 * Callers:
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1400B85F4 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::EmitBatchFenceCommand(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // ecx
  _DWORD *v6; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 673) || (*((_BYTE *)this + 48) & 1) == 0 )
    return 1;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v7) )
  {
    v4 = *(_QWORD *)(W32GetDCompSessionState() + 24);
    do
      v5 = _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
    while ( !v5 );
    v6 = v7;
    *((_DWORD *)this + 673) = v5;
    *v6 = 12;
    v6[1] = 259;
    v6[2] = *((_DWORD *)this + 673);
    return 1;
  }
  return 0;
}
