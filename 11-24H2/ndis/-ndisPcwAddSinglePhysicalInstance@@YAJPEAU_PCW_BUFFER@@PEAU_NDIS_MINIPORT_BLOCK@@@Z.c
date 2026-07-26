/*
 * XREFs of ?ndisPcwAddSinglePhysicalInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401658C0
 * Callers:
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x140064EA0 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisPcwAddSinglePhysicalInstance(struct _PCW_BUFFER *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  ULONG64 v2; // rax
  ULONG v3; // r8d
  _UNICODE_STRING *pModifiedInstanceName; // rax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-18h] BYREF

  Data.Data = a2->PhysicalPerformanceCounters;
  v2 = a2->NetLuid.Value >> 24;
  Data.Size = 32;
  v3 = v2 ^ (a2->IfIndex ^ v2) & 0xFFFFFF;
  pModifiedInstanceName = a2->pModifiedInstanceName;
  if ( !pModifiedInstanceName )
    pModifiedInstanceName = a2->pAdapterInstanceName;
  return PcwAddInstance(a1, pModifiedInstanceName, v3, 1u, &Data);
}
