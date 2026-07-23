/*
 * XREFs of RtlpHpMetadataHeapCreate @ 0x180026660
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapCreate @ 0x180026120 (RtlpHpHeapCreate.c)
 */

bool __fastcall RtlpHpMetadataHeapCreate(PRTL_RUN_ONCE a1, __int128 *a2, PVOID *a3)
{
  __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a2;
  v4 = RtlpHpHeapCreate(0x2400000u, 0LL, 0LL, &v6);
  if ( v4 )
    a1[-1].Value = v4;
  return v4 != 0;
}
