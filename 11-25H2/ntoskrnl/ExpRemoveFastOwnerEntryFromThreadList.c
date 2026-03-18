/*
 * XREFs of ExpRemoveFastOwnerEntryFromThreadList @ 0x1404077B0
 * Callers:
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x140406C0C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x1404070D8 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x140407388 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1404074C0 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x1404981A0 (ExDisownFastResource.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14064AB90 (ExTryToConvertFastResourceSharedToExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpRemoveFastOwnerEntryFromThreadList(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax
  __int64 result; // rax

  v1 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v2 = (_QWORD *)a1[1], (_QWORD *)*v2 != a1) )
    __fastfail(3u);
  *v2 = v1;
  *(_QWORD *)(v1 + 8) = v2;
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
