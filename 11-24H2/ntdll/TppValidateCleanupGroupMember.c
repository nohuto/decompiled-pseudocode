/*
 * XREFs of TppValidateCleanupGroupMember @ 0x1800866B0
 * Callers:
 *     TppJobpValidateJob @ 0x1800863AC (TppJobpValidateJob.c)
 *     TppAlpcpValidateAlpc @ 0x18008663C (TppAlpcpValidateAlpc.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TppValidateCleanupGroupMember(__int64 a1, int a2)
{
  int v2; // eax
  void *ThreadPoolData; // rcx

  v2 = *(_DWORD *)(a1 + 168);
  if ( (v2 & 0x10000) != 0 )
    return 0LL;
  if ( (v2 & 0x20000) == 0 )
    return 1LL;
  return a2
      && (ThreadPoolData = NtCurrentTeb()->ThreadPoolData) != 0LL
      && *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) == a1;
}
