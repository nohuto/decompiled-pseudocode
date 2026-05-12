/*
 * XREFs of TcglibpReleaseRequestResources @ 0x14013F49C
 * Callers:
 *     TcglibStackReset @ 0x14013CECC (TcglibStackReset.c)
 *     TcglibTPerReset @ 0x14013D1E4 (TcglibTPerReset.c)
 *     TcglibpCloseSession @ 0x14014155C (TcglibpCloseSession.c)
 *     TcglibpGetTPerProperties @ 0x140141758 (TcglibpGetTPerProperties.c)
 *     TcglibpOpenSession @ 0x14014186C (TcglibpOpenSession.c)
 *     TcglibpSetMaxPacketSizes @ 0x140141A9C (TcglibpSetMaxPacketSizes.c)
 * Callees:
 *     TcglibEalFreeCommand @ 0x140085678 (TcglibEalFreeCommand.c)
 */

__int64 __fastcall TcglibpReleaseRequestResources(_DWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 result; // rax

  v5 = *a2;
  if ( v5 )
  {
    result = TcglibEalFreeCommand(a1, v5);
    *a2 = 0LL;
  }
  if ( *a3 )
  {
    result = TcglibEalFreeCommand(a1, *a3);
    *a3 = 0LL;
  }
  return result;
}
