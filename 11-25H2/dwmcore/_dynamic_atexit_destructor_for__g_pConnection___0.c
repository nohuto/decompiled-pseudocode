/*
 * XREFs of _dynamic_atexit_destructor_for__g_pConnection___0 @ 0x1802E9060
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCInternalMilCmdConnection@@UEAAPEAXI@Z @ 0x180264470 (--_GCInternalMilCmdConnection@@UEAAPEAXI@Z.c)
 */

CInternalMilCmdConnection *dynamic_atexit_destructor_for__g_pConnection___0()
{
  CInternalMilCmdConnection *result; // rax

  if ( g_pConnection )
    return CInternalMilCmdConnection::`scalar deleting destructor'(g_pConnection, 1);
  return result;
}
