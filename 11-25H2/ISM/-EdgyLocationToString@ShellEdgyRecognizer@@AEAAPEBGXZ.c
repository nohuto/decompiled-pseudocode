/*
 * XREFs of ?EdgyLocationToString@ShellEdgyRecognizer@@AEAAPEBGXZ @ 0x18015A6A8
 * Callers:
 *     ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x180057C0C (-ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV-$optional@ULastUpData@ShellEd.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall ShellEdgyRecognizer::EdgyLocationToString(ShellEdgyRecognizer *this)
{
  switch ( *((_DWORD *)this + 1) )
  {
    case 1:
      return L"LeftEdge";
    case 2:
      return L"TopEdge";
    case 4:
      return L"RightEdge";
    case 8:
      return L"BottomEdge";
  }
  return L"Unknown";
}
