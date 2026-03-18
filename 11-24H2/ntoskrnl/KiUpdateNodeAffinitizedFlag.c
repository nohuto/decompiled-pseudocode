/*
 * XREFs of KiUpdateNodeAffinitizedFlag @ 0x14033939C
 * Callers:
 *     KiComputeThreadAffinity @ 0x14029AC34 (KiComputeThreadAffinity.c)
 *     KiSetSystemAffinityThread @ 0x1403398F4 (KiSetSystemAffinityThread.c)
 *     KiSetAffinityThread @ 0x1403B1A08 (KiSetAffinityThread.c)
 *     KeStartThread @ 0x1403B3660 (KeStartThread.c)
 * Callees:
 *     KiTestNodeAffinity @ 0x1403393D4 (KiTestNodeAffinity.c)
 */

__int64 __fastcall KiUpdateNodeAffinitizedFlag(__int64 a1)
{
  __int64 result; // rax

  result = KiTestNodeAffinity(*(_QWORD *)(a1 + 576));
  if ( (_DWORD)result == ((*(unsigned __int8 *)(a1 + 2) >> 3) & 1) )
    _InterlockedXor((volatile signed __int32 *)a1, 0x80000u);
  return result;
}
