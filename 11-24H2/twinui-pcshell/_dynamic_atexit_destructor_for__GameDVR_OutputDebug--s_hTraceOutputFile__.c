/*
 * XREFs of _dynamic_atexit_destructor_for__GameDVR_OutputDebug::s_hTraceOutputFile__ @ 0x180706EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_atexit_destructor_for__GameDVR_OutputDebug::s_hTraceOutputFile__()
{
  int result; // eax

  result = (_DWORD)GameDVR_OutputDebug::s_hTraceOutputFile - 1;
  if ( (char *)GameDVR_OutputDebug::s_hTraceOutputFile - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    return CloseHandle(GameDVR_OutputDebug::s_hTraceOutputFile);
  return result;
}
