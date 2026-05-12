/*
 * XREFs of TcglibEalGetCommandPayload @ 0x140085744
 * Callers:
 *     TcglibStackReset @ 0x14013CECC (TcglibStackReset.c)
 *     TcglibTPerReset @ 0x14013D1E4 (TcglibTPerReset.c)
 *     TcglibpCallMethod @ 0x14013EF38 (TcglibpCallMethod.c)
 *     TcglibpExecuteCommand @ 0x14013F190 (TcglibpExecuteCommand.c)
 *     TcglibpGetCapabilities @ 0x14013FB04 (TcglibpGetCapabilities.c)
 *     TcglibpGetProtocolList @ 0x14013FFF0 (TcglibpGetProtocolList.c)
 *     TcglibpCloseSession @ 0x14014155C (TcglibpCloseSession.c)
 *     TcglibpTransaction @ 0x140141BA4 (TcglibpTransaction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TcglibEalGetCommandPayload(_DWORD *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( *a1 == 1431193940 || *a1 == 1094997074 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
    {
      *a3 = *(_QWORD *)(a2 + 64);
      *a4 = *(_DWORD *)(a2 + 60);
    }
    else
    {
      *a3 = *(_QWORD *)(a2 + 24);
      *a4 = *(_DWORD *)(a2 + 16);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
