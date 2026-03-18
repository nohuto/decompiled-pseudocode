/*
 * XREFs of HUBDSM_CheckingIfAltEnumCmdNeededInReenum @ 0x140020160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfAltEnumCmdNeededInReenum(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 2472) & 4) == 0 || (*(_DWORD *)(v1 + 2476) & 1) != 0 )
    return 4061LL;
  _InterlockedOr((volatile signed __int32 *)(v1 + 2476), 2u);
  return 4089LL;
}
