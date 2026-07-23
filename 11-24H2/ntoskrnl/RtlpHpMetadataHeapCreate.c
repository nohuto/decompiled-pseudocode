/*
 * XREFs of RtlpHpMetadataHeapCreate @ 0x1406029F0
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x140658BE8 (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     RtlpHpHeapCreate @ 0x14060234C (RtlpHpHeapCreate.c)
 */

bool __fastcall RtlpHpMetadataHeapCreate(PRTL_RUN_ONCE a1, __int128 *a2, PVOID *a3)
{
  __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a2;
  v4 = RtlpHpHeapCreate(37748736, (__int64)a2, (__int64)a3, &v6);
  if ( v4 )
    a1[-1].Value = v4;
  return v4 != 0;
}
