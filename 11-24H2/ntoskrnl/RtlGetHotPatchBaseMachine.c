/*
 * XREFs of RtlGetHotPatchBaseMachine @ 0x14082FB38
 * Callers:
 *     RtlFindHotPatchBaseMachine @ 0x14082F88C (RtlFindHotPatchBaseMachine.c)
 *     RtlFindHotPatchInformation @ 0x14082F8F4 (RtlFindHotPatchInformation.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlGetHotPatchBaseMachine(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 4);
  if ( (v1 & 4) != 0 )
    return 332;
  if ( (v1 & 0x10) != 0 )
    return -31132;
  return (v1 & 8) != 0 ? 0xAA64 : 0;
}
