/*
 * XREFs of PopNewWakeSource @ 0x1406ED7D4
 * Callers:
 *     PopHandleWakeSources @ 0x140B4BE20 (PopHandleWakeSources.c)
 *     PopProcessWakeSourceWork @ 0x140B5D998 (PopProcessWakeSourceWork.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopNewWakeSource(int a1)
{
  __int64 result; // rax

  result = ExAllocatePool2(0x40uLL);
  if ( result )
    *(_DWORD *)(result + 16) = a1;
  return result;
}
