/*
 * XREFs of PopEtGetNextEnergyTracker @ 0x1409626E4
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x14096148C (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
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
