/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x1403C1594
 * Callers:
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     IopGetSessionIdFromPDO @ 0x1409BFB14 (IopGetSessionIdFromPDO.c)
 */

bool __fastcall IopCheckSessionDeviceAccess(__int64 a1)
{
  int SessionId; // ebx
  __int64 CurrentServerSilo; // rax
  int SessionIdFromPDO; // eax
  bool result; // al

  SessionId = PsGetSessionId((__int64)KeGetCurrentThread()->ApcState.Process);
  CurrentServerSilo = PsGetCurrentServerSilo();
  result = SessionId == **(_DWORD **)(PsGetServerSiloGlobals(CurrentServerSilo) + 1288)
        && !IopSessionZeroAccessCheckEnabled
        || (SessionIdFromPDO = IopGetSessionIdFromPDO(a1), SessionIdFromPDO == -1)
        || SessionId == SessionIdFromPDO;
  return result;
}
