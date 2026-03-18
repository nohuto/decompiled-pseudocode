/*
 * XREFs of HUBDSM_CheckingIfCompleteAlternateBOSDescriptorWasRetrieved @ 0x1400203F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfCompleteAlternateBOSDescriptorWasRetrieved(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 960) + 264LL) < (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 960) + 1742LL)
       ? 4061
       : 4089;
}
