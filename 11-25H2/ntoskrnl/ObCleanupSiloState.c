/*
 * XREFs of ObCleanupSiloState @ 0x140736E78
 * Callers:
 *     ObShutdownSystem @ 0x1407372B0 (ObShutdownSystem.c)
 *     PspDeleteExternalServerSiloState @ 0x140762F68 (PspDeleteExternalServerSiloState.c)
 *     PspDeleteServerSiloGlobals @ 0x14076302C (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObDereferenceDeviceMap @ 0x14097F5CC (ObDereferenceDeviceMap.c)
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
