/*
 * XREFs of TppDestroyTimer @ 0x1800EA74C
 * Callers:
 *     TppFreeWait @ 0x1800204A0 (TppFreeWait.c)
 *     TppTimerpFree @ 0x1800204F0 (TppTimerpFree.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1801652A0 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TppDestroyTimer(_QWORD *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[18];
  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 432), 0xFFFFFFFF);
  if ( v3 > 0 && v3 - 1 <= 0 )
  {
    v4 = *(_QWORD *)(v2 + 56);
    v6 = -1;
    NtSetInformationWorkerFactory(v4, 3LL, &v6);
  }
  return TppCleanupGroupMemberDestroy(a1);
}
