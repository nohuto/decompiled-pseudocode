/*
 * XREFs of RtlpHpMetadataHeapCreate @ 0x180034CC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapCreate @ 0x1800351B4 (RtlpHpHeapCreate.c)
 */

bool __fastcall RtlpHpMetadataHeapCreate(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  _RTL_RUN_ONCE v4; // rdx

  v4.Value = RtlpHpHeapCreate(37748736);
  if ( v4.Value )
    a1[-1].Ptr = v4.Ptr;
  return v4.Value != 0;
}
