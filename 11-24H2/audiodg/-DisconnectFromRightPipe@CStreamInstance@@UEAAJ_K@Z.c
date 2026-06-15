/*
 * XREFs of ?DisconnectFromRightPipe@CStreamInstance@@UEAAJ_K@Z @ 0x14006E470
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x14002F5C0 (-UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CStreamInstance::DisconnectFromRightPipe(CPipeInstance **this, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CPipeInstance::UnresolvePendingConnections(this[10], a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA4,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
