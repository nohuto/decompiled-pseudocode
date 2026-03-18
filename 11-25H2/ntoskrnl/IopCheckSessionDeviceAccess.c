/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x140433938
 * Callers:
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     PsGetSessionId @ 0x140433C80 (PsGetSessionId.c)
 *     IopGetSessionIdFromPDO @ 0x1409A1C44 (IopGetSessionIdFromPDO.c)
 */

bool __fastcall IopCheckSessionDeviceAccess(__int64 a1)
{
  int SessionId; // ebx
  unsigned __int64 CurrentServerSilo; // rax
  int SessionIdFromPDO; // eax
  bool result; // al

  SessionId = PsGetSessionId(KeGetCurrentThread()->ApcState.Process);
  CurrentServerSilo = PsGetCurrentServerSilo();
  result = SessionId == **((_DWORD **)PsGetServerSiloGlobals(CurrentServerSilo) + 161)
        && !IopSessionZeroAccessCheckEnabled
        || (SessionIdFromPDO = IopGetSessionIdFromPDO(a1), SessionIdFromPDO == -1)
        || SessionId == SessionIdFromPDO;
  return result;
}
