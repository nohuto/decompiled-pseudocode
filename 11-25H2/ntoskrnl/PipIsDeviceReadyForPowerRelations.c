/*
 * XREFs of PipIsDeviceReadyForPowerRelations @ 0x140830F84
 * Callers:
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x1406EB0AC (PipCheckIfAllProvidersHaveDevnodes.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x140830F0C (PipAddtoRebuildPowerRelationsQueue.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140832888 (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     <none>
 */

bool __fastcall PipIsDeviceReadyForPowerRelations(__int64 a1)
{
  __int64 v1; // rax
  int v2; // eax
  bool result; // al

  result = a1
        && (v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) != 0
        && (v2 = *(_DWORD *)(v1 + 300), v2 != 769)
        && v2 != 770;
  return result;
}
