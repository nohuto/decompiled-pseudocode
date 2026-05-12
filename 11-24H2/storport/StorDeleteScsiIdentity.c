/*
 * XREFs of StorDeleteScsiIdentity @ 0x14000F18C
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x14000E8A0 (RaidDeleteBusEnumerator.c)
 *     RaidUnitFreeResources @ 0x14000ED44 (RaidUnitFreeResources.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x140041298 (RaidBusEnumeratorProcessBusUnit.c)
 * Callees:
 *     StorFreeAnsiString @ 0x14000EAEC (StorFreeAnsiString.c)
 */

__int64 __fastcall StorDeleteScsiIdentity(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x32316152u);
    *(_QWORD *)a1 = 0LL;
  }
  StorFreeAnsiString(a1 + 8);
  v3 = *(void **)(a1 + 32);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x32316152u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v4 = *(void **)(a1 + 40);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x32316152u);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v5 = *(void **)(a1 + 48);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x32316152u);
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}
