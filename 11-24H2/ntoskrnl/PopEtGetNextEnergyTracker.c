/*
 * XREFs of PopEtGetNextEnergyTracker @ 0x14099CED4
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x14099BCAC (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 */

_QWORD *__fastcall PopEtGetNextEnergyTracker(_QWORD **Object)
{
  _QWORD *v2; // rsi
  _QWORD **v3; // rax
  _QWORD *i; // rbx

  v2 = 0LL;
  PopAcquireRwLockShared((volatile signed __int64 *)(PopEtGlobals + 16));
  v3 = (_QWORD **)PopEtGlobals;
  if ( Object )
    v3 = Object;
  for ( i = *v3; i != (_QWORD *)PopEtGlobals; i = (_QWORD *)*i )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)i, 0x74456F50u) )
    {
      v2 = i;
      break;
    }
  }
  PopReleaseRwLock((signed __int64 *)(PopEtGlobals + 16));
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x74456F50u);
  return v2;
}
