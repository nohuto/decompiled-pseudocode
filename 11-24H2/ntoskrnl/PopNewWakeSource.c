/*
 * XREFs of PopNewWakeSource @ 0x1406F7184
 * Callers:
 *     PopHandleWakeSources @ 0x140B5DE94 (PopHandleWakeSources.c)
 *     PopProcessWakeSourceWork @ 0x140B6E318 (PopProcessWakeSourceWork.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopNewWakeSource(int a1)
{
  __int64 result; // rax

  result = ExAllocatePool2(0x40uLL, 0x70uLL, 0x206D654Du);
  if ( result )
    *(_DWORD *)(result + 16) = a1;
  return result;
}
