/*
 * XREFs of PopEsPowerSettingPolicyCallback @ 0x14075D4F0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopEsQueueStateEvaluation @ 0x140A3BA78 (PopEsQueueStateEvaluation.c)
 */

__int64 __fastcall PopEsPowerSettingPolicyCallback(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v3; // ebx
  char v5; // di

  v3 = 0;
  if ( a2 && a3 == 4 )
  {
    v5 = 0;
    PopAcquireRwLockExclusive(&PopEsLock);
    if ( *a2 == 1 )
    {
      if ( !byte_140F0BA94 )
      {
        v5 = 1;
        byte_140F0BA94 = 1;
      }
    }
    else if ( !*a2 && byte_140F0BA94 )
    {
      v5 = 1;
      byte_140F0BA94 = 0;
    }
    PopReleaseRwLock((signed __int64 *)&PopEsLock);
    if ( v5 )
      PopEsQueueStateEvaluation(0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
