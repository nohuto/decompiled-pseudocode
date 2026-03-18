/*
 * XREFs of FlushEventEntry @ 0x1400A8384
 * Callers:
 *     FlushEventEntryList @ 0x1400910D8 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FlushEventEntry(REGHANDLE RegHandle, __int64 a2)
{
  int v2; // r10d
  __int64 v3; // r9

  v2 = 2;
  if ( *(_BYTE *)(a2 + 45) )
  {
    v3 = 32LL;
    do
    {
      v3 += 16LL;
      ++v2;
      *(_BYTE *)(*(_QWORD *)(a2 + 16) + v3 - 3) = 0;
    }
    while ( v2 < *(unsigned __int8 *)(a2 + 45) + 2 );
  }
  return EtwWriteTransfer(
           RegHandle,
           (PCEVENT_DESCRIPTOR)a2,
           0LL,
           0LL,
           *(unsigned __int8 *)(a2 + 44),
           *(PEVENT_DATA_DESCRIPTOR *)(a2 + 16));
}
