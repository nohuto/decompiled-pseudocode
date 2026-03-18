/*
 * XREFs of DpiFdoPendingCreatePdoCompletion @ 0x14024A3D0
 * Callers:
 *     DpiPdoPollingWorkItem @ 0x1402555B0 (DpiPdoPollingWorkItem.c)
 *     DpiPdoIsChildConnected @ 0x14031D668 (DpiPdoIsChildConnected.c)
 *     DpiPdoAddPdo @ 0x1404293CC (DpiPdoAddPdo.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DpiFdoPendingCreatePdoCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  LONG result; // eax

  v2 = *(_QWORD *)(a1 + 64);
  *(_BYTE *)(a2 + 64) = 0;
  if ( (*(_DWORD *)(v2 + 3824))-- == 1 )
    return KeSetEvent((PRKEVENT)(v2 + 3832), 0, 0);
  return result;
}
