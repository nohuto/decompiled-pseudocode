/*
 * XREFs of RaidAdapterValidateStorPoFxComponent @ 0x140072BC0
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x140074E94 (StorpAdapterInitializePoFxPower.c)
 *     NvmeAdapterInitializePoFx @ 0x14012EA7C (NvmeAdapterInitializePoFx.c)
 * Callees:
 *     RaidStorPoFxComponentVersionAndSizeIsValid @ 0x140072F84 (RaidStorPoFxComponentVersionAndSizeIsValid.c)
 */

bool __fastcall RaidAdapterValidateStorPoFxComponent(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( !(unsigned __int8)RaidStorPoFxComponentVersionAndSizeIsValid(a1, a1)
    || (unsigned int)(*(_DWORD *)(v2 + 8) - 1) > 7 )
  {
    return 0;
  }
  v3 = *(_QWORD *)(v2 + 16) - 0x481F895FDCAF9C10LL;
  if ( !v3 )
    v3 = *(_QWORD *)(v1 + 24) - 0x3356F5D2CED492A4LL;
  return !v3;
}
