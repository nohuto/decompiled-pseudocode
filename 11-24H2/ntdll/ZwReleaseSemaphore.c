/*
 * XREFs of ZwReleaseSemaphore @ 0x180161DD0
 * Callers:
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
 *     RtlReleaseResource @ 0x1800E0880 (RtlReleaseResource.c)
 *     RtlConvertExclusiveToShared @ 0x18010FDC0 (RtlConvertExclusiveToShared.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseSemaphore()
{
  __int64 result; // rax

  result = 10LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
