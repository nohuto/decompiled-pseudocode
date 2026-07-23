/*
 * XREFs of PspFreezeProcessWorker @ 0x140779160
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsSuspendProcess @ 0x140A0CD70 (PsSuspendProcess.c)
 *     PsCaptureExceptionPort @ 0x140A15A5C (PsCaptureExceptionPort.c)
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
