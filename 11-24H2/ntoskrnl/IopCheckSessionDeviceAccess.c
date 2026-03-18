/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x14034A630
 * Callers:
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     PsGetSessionId @ 0x1403D5E10 (PsGetSessionId.c)
 *     IopGetSessionIdFromPDO @ 0x140A11704 (IopGetSessionIdFromPDO.c)
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
