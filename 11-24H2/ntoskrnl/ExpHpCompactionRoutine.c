/*
 * XREFs of ExpHpCompactionRoutine @ 0x140480FD0
 * Callers:
 *     <none>
 * Callees:
 *     ExpHpEnumerateHeaps @ 0x140481014 (ExpHpEnumerateHeaps.c)
 *     ExpCompactPrivatePools @ 0x140A41B0C (ExpCompactPrivatePools.c)
 */

__int64 __fastcall ExpHpCompactionRoutine(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax

  v1 = a1;
  ExpHpEnumerateHeaps(a1, ExpHpCompactHeapCallback);
  result = ExpCompactPrivatePools(v1);
  if ( v1 == 1 )
    ExpHpGCScheduledNonPaged = 0;
  else
    ExpHpGCScheduledPaged = 0;
  return result;
}
