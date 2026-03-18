/*
 * XREFs of MiSetZeroThreadState @ 0x1404A2C6C
 * Callers:
 *     MiCreateZeroThreadContext @ 0x1407FF2B0 (MiCreateZeroThreadContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetZeroThreadState(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2 | *(_DWORD *)(a1 + 384);
  *(_DWORD *)(a1 + 384) = result;
  return result;
}
