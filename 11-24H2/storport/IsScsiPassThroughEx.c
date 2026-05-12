/*
 * XREFs of IsScsiPassThroughEx @ 0x140032488
 * Callers:
 *     PortpCompleteRequestIrp @ 0x140032324 (PortpCompleteRequestIrp.c)
 *     NvmeAdapterPassThrough @ 0x14019A9EC (NvmeAdapterPassThrough.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsScsiPassThroughEx(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
  return v1 == 315460 || v1 == 315464;
}
