/*
 * XREFs of KiStartPrcbThreads @ 0x1405B4938
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     KiStartPrcbThread @ 0x1405B55AC (KiStartPrcbThread.c)
 */

__int64 __fastcall KiStartPrcbThreads(__int64 a1)
{
  KiStartPrcbThread(*(_QWORD *)(a1 + 14392), a1);
  return KiStartPrcbThread(*(_QWORD *)(a1 + 36480), a1);
}
