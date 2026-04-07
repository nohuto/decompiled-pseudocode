/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x18010DDB4
 * Callers:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001EC8C (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1801094A0 (-CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18010DE7C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1801477A4;
  if ( !(_BYTE)word_1801477A4 )
    return 0;
  v1 = HIBYTE(word_1801477A4);
  v2 = 1;
  if ( HIBYTE(word_1801477A4) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1801477A4, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1801477A4);
      v0 = word_1801477A4;
    }
    else
    {
      v0 = 1;
      word_1801477A4 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
