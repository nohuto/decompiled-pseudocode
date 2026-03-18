/*
 * XREFs of ExpHpCompactionRoutine @ 0x140487E00
 * Callers:
 *     <none>
 * Callees:
 *     ExpHpEnumerateHeaps @ 0x140487E44 (ExpHpEnumerateHeaps.c)
 *     ExpCompactPrivatePools @ 0x140A496F8 (ExpCompactPrivatePools.c)
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
