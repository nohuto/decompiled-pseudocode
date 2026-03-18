/*
 * XREFs of memcpy_s @ 0x14003CC30
 * Callers:
 *     Controller_ExecuteDSM @ 0x14008187C (Controller_ExecuteDSM.c)
 * Callees:
 *     Control_Cleanup @ 0x140034200 (Control_Cleanup.c)
 *     memmove @ 0x140058BC0 (memmove.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

errno_t __cdecl memcpy_s(void *a1, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v8; // ebx

  if ( !MaxCount )
    return 0;
  if ( !a1 )
    goto LABEL_11;
  if ( Src && DstSize >= MaxCount )
  {
    memmove(a1, Src, MaxCount);
    return 0;
  }
  memset(a1, 0, DstSize);
  if ( Src )
  {
    if ( DstSize >= MaxCount )
      return 22;
    v8 = 34;
  }
  else
  {
LABEL_11:
    v8 = 22;
  }
  Control_Cleanup();
  return v8;
}
