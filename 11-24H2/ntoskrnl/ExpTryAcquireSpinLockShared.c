/*
 * XREFs of ExpTryAcquireSpinLockShared @ 0x140404D60
 * Callers:
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140404C8C (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x140404D20 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpTryAcquireSpinLockShared(_DWORD *a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw(a1);
  v1 = *a1 & 0x7FFFFFFF;
  do
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange(a1, v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  while ( v1 >= 0 );
  return 0;
}
