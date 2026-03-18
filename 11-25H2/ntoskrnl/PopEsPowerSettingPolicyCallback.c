/*
 * XREFs of PopEsPowerSettingPolicyCallback @ 0x140750BF0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopEsQueueStateEvaluation @ 0x140A36D7C (PopEsQueueStateEvaluation.c)
 */

__int64 __fastcall PopEsPowerSettingPolicyCallback(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v3; // ebx
  char v5; // di

  v3 = 0;
  if ( a2 && a3 == 4 )
  {
    v5 = 0;
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
    if ( *a2 == 1 )
    {
      if ( !byte_140F0B754 )
      {
        v5 = 1;
        byte_140F0B754 = 1;
      }
    }
    else if ( !*a2 && byte_140F0B754 )
    {
      v5 = 1;
      byte_140F0B754 = 0;
    }
    PopReleaseRwLock(&PopEsLock);
    if ( v5 )
      PopEsQueueStateEvaluation(0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
