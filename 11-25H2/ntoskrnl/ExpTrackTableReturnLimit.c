/*
 * XREFs of ExpTrackTableReturnLimit @ 0x1404A579C
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpTrackTableReturnLimit(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r8
  __int64 result; // rax

  v3 = 3LL * a3;
  result = *(_QWORD *)(a1 + 8 * v3 + 16);
  if ( result || *(_QWORD *)(a1 + 8 * v3 + 24) )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 8 * v3 + 32), -a2);
  return result;
}
