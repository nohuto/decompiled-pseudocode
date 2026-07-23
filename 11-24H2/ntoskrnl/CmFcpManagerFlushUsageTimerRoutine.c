/*
 * XREFs of CmFcpManagerFlushUsageTimerRoutine @ 0x1404CC4B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14021E9B0 (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerFlushUsageTimerRoutine(__int64 a1, __int64 a2)
{
  signed __int32 v2; // eax
  unsigned int v3; // r8d

  do
  {
    v2 = *(_DWORD *)(a2 + 1816);
    v3 = v2 & 0xFFFFFFED | 0x10;
    if ( (v2 & 1) == 0 )
      v3 = *(_DWORD *)(a2 + 1816) & 0xFFFFFFFD;
  }
  while ( v2 != _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 1816), v3, v2) );
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 1624));
}
