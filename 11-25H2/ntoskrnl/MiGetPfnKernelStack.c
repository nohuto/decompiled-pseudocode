/*
 * XREFs of MiGetPfnKernelStack @ 0x14044AEF8
 * Callers:
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x1403DC23C (MiCanStealKernelStack.c)
 *     MiJumpStackTarget @ 0x140480160 (MiJumpStackTarget.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPfnKernelStack(_QWORD *a1)
{
  __int64 v1; // r8

  v1 = 0LL;
  if ( (*a1 & 0xFFFFFFFFFFELL) != 0 )
    return 8 * (*a1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  return v1;
}
