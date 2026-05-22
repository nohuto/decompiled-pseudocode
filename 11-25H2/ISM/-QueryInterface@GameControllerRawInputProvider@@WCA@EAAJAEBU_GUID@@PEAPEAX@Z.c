/*
 * XREFs of ?QueryInterface@GameControllerRawInputProvider@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CBD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GameControllerRawInputProvider::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        GameControllerRawInputProvider **a3)
{
  return GameControllerRawInputProvider::QueryInterface((GameControllerRawInputProvider *)(a1 - 32), a2, a3);
}
