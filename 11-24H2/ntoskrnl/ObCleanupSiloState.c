/*
 * XREFs of ObCleanupSiloState @ 0x140742E98
 * Callers:
 *     ObShutdownSystem @ 0x1407432D0 (ObShutdownSystem.c)
 *     PspDeleteExternalServerSiloState @ 0x140772928 (PspDeleteExternalServerSiloState.c)
 *     PspDeleteServerSiloGlobals @ 0x1407729F4 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObDereferenceDeviceMap @ 0x1409855D4 (ObDereferenceDeviceMap.c)
 */

__int64 __fastcall ObCleanupSiloState(volatile __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = (__int64)a1;
  v2 = _InterlockedExchange64(a1, 0LL);
  if ( v2 )
    return ObDereferenceDeviceMap((PVOID)(v2 & 0xFFFFFFFFFFFFFFF0uLL));
  return result;
}
