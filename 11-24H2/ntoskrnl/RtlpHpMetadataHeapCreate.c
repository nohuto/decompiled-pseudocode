/*
 * XREFs of RtlpHpMetadataHeapCreate @ 0x1406053B0
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x14065A518 (RtlHpKInitializeHeapManager.c)
 * Callees:
 *     RtlpHpHeapCreate @ 0x140604D0C (RtlpHpHeapCreate.c)
 */

bool __fastcall RtlpHpMetadataHeapCreate(PRTL_RUN_ONCE RunOnce, __int128 *Parameter, PVOID *Context)
{
  __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *Parameter;
  v4 = RtlpHpHeapCreate(37748736, (__int64)Parameter, (__int64)Context, &v6);
  if ( v4 )
    RunOnce[-1].Value = v4;
  return v4 != 0;
}
