/*
 * XREFs of IsShellFrameHangResilient @ 0x140156564
 * Callers:
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1401565AC (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1401565F8 (IsAdaptiveQueueDetachExempted.c)
 */

__int64 __fastcall IsShellFrameHangResilient(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // r8

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1360) & 0x40000) != 0 && tagQ::AreMultipleThreadsAttached(*(tagQ **)(a1 + 472)) )
    return (unsigned int)IsAdaptiveQueueDetachExempted(v3) == 0;
  return v1;
}
