/*
 * XREFs of HdlspEnableTerminal @ 0x140BAF9D4
 * Callers:
 *     HdlspDispatch @ 0x140BAF320 (HdlspDispatch.c)
 *     HeadlessInit @ 0x140C442D4 (HeadlessInit.c)
 * Callees:
 *     InbvPortInitialize @ 0x1406A2474 (InbvPortInitialize.c)
 *     InbvPortTerminate @ 0x1406A26A8 (InbvPortTerminate.c)
 *     HdlspSendStringAtBaud @ 0x140BB05CC (HdlspSendStringAtBaud.c)
 */

__int64 __fastcall HdlspEnableTerminal(char a1)
{
  unsigned int v1; // edx
  char v2; // r8
  char v3; // al
  __int64 v5; // r8

  if ( a1 == 1 )
  {
    v1 = *((_DWORD *)HeadlessGlobals + 12);
    if ( (v1 & 1) == 0 )
    {
      v2 = *((_BYTE *)HeadlessGlobals + 116);
      if ( !v2 || (v1 & 2) == 0 )
      {
        v3 = InbvPortInitialize(
               *((_DWORD *)HeadlessGlobals + 13),
               (v1 >> 9) & 7,
               HeadlessGlobals[8],
               (_DWORD *)HeadlessGlobals + 14,
               v2,
               *((_BYTE *)HeadlessGlobals + 85));
        *((_DWORD *)HeadlessGlobals + 12) ^= ((unsigned __int8)v3 ^ (unsigned __int8)*((_DWORD *)HeadlessGlobals + 12)) & 1;
        if ( (v3 & 1) == 0 )
          return 3221225473LL;
        HdlspSendStringAtBaud("\x1B[2J");
        HdlspSendStringAtBaud("\x1B[H");
      }
    }
  }
  else if ( !a1 )
  {
    InbvPortTerminate(*((_DWORD *)HeadlessGlobals + 14));
    *(_DWORD *)(v5 + 56) = 0;
    *(_DWORD *)(v5 + 48) &= ~1u;
  }
  return 0LL;
}
