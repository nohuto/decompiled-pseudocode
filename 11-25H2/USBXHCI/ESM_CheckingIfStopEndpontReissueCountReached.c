/*
 * XREFs of ESM_CheckingIfStopEndpontReissueCountReached @ 0x140055C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ESM_CheckingIfStopEndpontReissueCountReached(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 960);
  v2 = *(_QWORD *)v1;
  if ( v1[39] < ((*(_QWORD *)(*(_QWORD *)v1 + 744LL) & 0x40000LL) != 0 ? 50 : 20) )
    return 21LL;
  ++*(_DWORD *)(v2 + 912);
  result = 33LL;
  ++*(_DWORD *)(v2 + 956);
  *(_BYTE *)(v2 + 872) = 1;
  return result;
}
