/*
 * XREFs of KiUpdateNodeAffinitizedFlag @ 0x14027812C
 * Callers:
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 *     KiSetAffinityThread @ 0x140271884 (KiSetAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1402720F8 (KiComputeThreadAffinity.c)
 *     KiSetSystemAffinityThread @ 0x140278684 (KiSetSystemAffinityThread.c)
 * Callees:
 *     KiTestNodeAffinity @ 0x140278164 (KiTestNodeAffinity.c)
 */

__int64 __fastcall KiUpdateNodeAffinitizedFlag(__int64 a1)
{
  __int64 result; // rax

  result = KiTestNodeAffinity(*(_QWORD *)(a1 + 576));
  if ( (_DWORD)result == ((*(unsigned __int8 *)(a1 + 2) >> 3) & 1) )
    _InterlockedXor((volatile signed __int32 *)a1, 0x80000u);
  return result;
}
