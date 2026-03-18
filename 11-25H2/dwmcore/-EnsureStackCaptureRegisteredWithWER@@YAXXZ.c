/*
 * XREFs of ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x1801FDE10
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1801FDCA8 (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x18025AC84 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 */

void EnsureStackCaptureRegisteredWithWER(void)
{
  if ( !_InterlockedCompareExchange(&dword_180407374, 1, 0) )
  {
    MilWerRegisterMemoryBlock(&g_StackCaptureFrames, 0x3800u);
    MilWerRegisterMemoryBlock((const void *)&g_nCurrentStackCaptureIndex, 4u);
  }
}
