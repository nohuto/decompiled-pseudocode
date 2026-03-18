/*
 * XREFs of PopEtGetNextEnergyTracker @ 0x140906254
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x140905028 (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
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
