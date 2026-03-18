/*
 * XREFs of VidMmTerminateProcess @ 0x14001D1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x14001D1EC (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 */

void *__fastcall VidMmTerminateProcess(VIDMM_PROCESS *a1, unsigned int a2)
{
  void *result; // rax

  if ( a1 )
    return VIDMM_PROCESS::`scalar deleting destructor'(a1, a2);
  return result;
}
