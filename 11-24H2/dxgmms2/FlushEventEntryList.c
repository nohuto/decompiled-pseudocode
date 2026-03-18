/*
 * XREFs of FlushEventEntryList @ 0x1400910D8
 * Callers:
 *     FlushLookUpTableBucket @ 0x140044550 (FlushLookUpTableBucket.c)
 * Callees:
 *     DestroyEventEntry @ 0x1400552AC (DestroyEventEntry.c)
 *     FlushEventEntry @ 0x1400A8384 (FlushEventEntry.c)
 */

void __fastcall FlushEventEntryList(REGHANDLE RegHandle, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx

  if ( a2 )
  {
    v2 = a2;
    do
    {
      FlushEventEntry(RegHandle);
      v4 = *(_QWORD *)(v2 + 24);
      DestroyEventEntry(v2);
      v2 = v4;
    }
    while ( v4 );
  }
}
