/*
 * XREFs of ?FailureReasonToString@ShellEdgyRecognizer@@AEAAPEBGXZ @ 0x18015A6F4
 * Callers:
 *     ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x180057C0C (-ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV-$optional@ULastUpData@ShellEd.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall ShellEdgyRecognizer::FailureReasonToString(ShellEdgyRecognizer *this)
{
  if ( *((_DWORD *)this + 2) == 1 )
    return L"Duration Timeout";
  if ( *((_DWORD *)this + 2) == 2 )
    return L"Angle Invalid";
  return L"None";
}
