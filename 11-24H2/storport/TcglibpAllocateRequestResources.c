/*
 * XREFs of TcglibpAllocateRequestResources @ 0x14013EE80
 * Callers:
 *     TcglibCloseSession @ 0x14013BB98 (TcglibCloseSession.c)
 *     TcglibStackReset @ 0x14013CECC (TcglibStackReset.c)
 *     TcglibTPerReset @ 0x14013D1E4 (TcglibTPerReset.c)
 *     TcglibpGetTPerProperties @ 0x140141758 (TcglibpGetTPerProperties.c)
 *     TcglibpOpenSession @ 0x14014186C (TcglibpOpenSession.c)
 *     TcglibpSetMaxPacketSizes @ 0x140141A9C (TcglibpSetMaxPacketSizes.c)
 * Callees:
 *     TcglibEalAllocateIfRecvCommand @ 0x140084DA4 (TcglibEalAllocateIfRecvCommand.c)
 *     TcglibEalAllocateIfSendCommand @ 0x1400850B0 (TcglibEalAllocateIfSendCommand.c)
 *     TcglibEalFreeCommand @ 0x140085678 (TcglibEalFreeCommand.c)
 */

__int64 __fastcall TcglibpAllocateRequestResources(_DWORD *a1, char a2, __int16 a3, int a4, __int64 *a5, __int64 *a6)
{
  int IfSendCommand; // esi

  *a5 = 0LL;
  *a6 = 0LL;
  IfSendCommand = TcglibEalAllocateIfSendCommand((__int64)a1, a2, a3, a4, a5);
  if ( IfSendCommand < 0
    || (IfSendCommand = TcglibEalAllocateIfRecvCommand((__int64)a1, a2, a3, a4, a6), IfSendCommand < 0) )
  {
    if ( *a5 )
    {
      TcglibEalFreeCommand(a1, *a5);
      *a5 = 0LL;
    }
    if ( *a6 )
    {
      TcglibEalFreeCommand(a1, *a6);
      *a6 = 0LL;
    }
  }
  return (unsigned int)IfSendCommand;
}
