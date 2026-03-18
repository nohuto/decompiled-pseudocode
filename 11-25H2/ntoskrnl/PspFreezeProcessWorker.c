/*
 * XREFs of PspFreezeProcessWorker @ 0x1407693B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsCaptureExceptionPort @ 0x1408F62C8 (PsCaptureExceptionPort.c)
 *     PsSuspendProcess @ 0x1409BA0F0 (PsSuspendProcess.c)
 */

__int64 __fastcall PspFreezeProcessWorker(_DWORD *a1)
{
  _DWORD **ServerSiloGlobals; // rax
  int v3; // ecx
  void *v4; // rax

  ServerSiloGlobals = (_DWORD **)PsGetServerSiloGlobals(0LL);
  v3 = a1[383];
  if ( (v3 & 0x1000) == 0 && a1 != PsIdleProcess && a1 != ServerSiloGlobals[106] && (v3 & 0x40000000) == 0 )
  {
    v4 = (void *)PsCaptureExceptionPort(a1);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( (a1[125] & 4) == 0 )
      PsSuspendProcess(a1);
  }
  return 0LL;
}
