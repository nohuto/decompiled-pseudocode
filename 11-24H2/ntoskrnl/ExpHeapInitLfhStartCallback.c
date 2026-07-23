/*
 * XREFs of ExpHeapInitLfhStartCallback @ 0x1406589A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpLfhContextEnable @ 0x140603BBC (RtlpHpLfhContextEnable.c)
 */

__int64 __fastcall ExpHeapInitLfhStartCallback(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 20) & 0x400000) == 0 )
    NT_ASSERT("Heap->GlobalFlags & 0x00400000");
  result = RtlpHpLfhContextEnable(a1 + 832, (__int64)&unk_140E6BDD8);
  if ( (int)result >= 0 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFBFFFFF);
  return result;
}
