/*
 * XREFs of RtlTraceDatabaseUnlock @ 0x180148490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlTraceDatabaseUnlock(__int64 a1)
{
  *(_QWORD *)(a1 + 40) = 0LL;
  return RtlLeaveCriticalSection(a1 + 48);
}
