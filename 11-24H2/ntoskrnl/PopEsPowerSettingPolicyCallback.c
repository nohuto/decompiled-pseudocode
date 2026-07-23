/*
 * XREFs of PopEsPowerSettingPolicyCallback @ 0x14075C490
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopEsQueueStateEvaluation @ 0x140A31258 (PopEsQueueStateEvaluation.c)
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
      if ( !byte_140F0B3D4 )
      {
        v5 = 1;
        byte_140F0B3D4 = 1;
      }
    }
    else if ( !*a2 && byte_140F0B3D4 )
    {
      v5 = 1;
      byte_140F0B3D4 = 0;
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
