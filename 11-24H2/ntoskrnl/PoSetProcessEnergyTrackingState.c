/*
 * XREFs of PoSetProcessEnergyTrackingState @ 0x1409044C4
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopEtEnergyContextSetState @ 0x140904E6C (PopEtEnergyContextSetState.c)
 */

__int64 __fastcall PoSetProcessEnergyTrackingState(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  unsigned int i; // ecx
  int v6; // ebx

  v2 = *(_QWORD *)(a1 + 1640);
  if ( !v2 )
    return (unsigned int)-1073741637;
  if ( a2[2] || (*a2 & 0xFFFFFFEF) != 0 || (~*a2 & a2[1]) != 0 )
    return (unsigned int)-1073741811;
  if ( (a2[3] & 1) != 0 )
  {
    for ( i = 0; i < 0x40; ++i )
    {
      if ( !*((_WORD *)a2 + i + 8) )
        goto LABEL_12;
    }
    return (unsigned int)-1073741811;
  }
LABEL_12:
  PopAcquireRwLockExclusive((unsigned __int64 *)(v2 + 440));
  v6 = PopEtEnergyContextSetState(a1, a2);
  if ( v6 >= 0 )
    v6 = 0;
  PopReleaseRwLock((signed __int64 *)(v2 + 440));
  return (unsigned int)v6;
}
