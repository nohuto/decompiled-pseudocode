/*
 * XREFs of ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x140221E18
 * Callers:
 *     NtGdiEngStretchBlt @ 0x140261C70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x140262120 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngPlgBlt @ 0x140339C60 (NtGdiEngPlgBlt.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

void __fastcall CaptureCOLORADJUSTMENT(struct tagCOLORADJUSTMENT **a1, struct tagCOLORADJUSTMENT *a2)
{
  const void *v4; // rdx

  v4 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, v4, 0x18uLL);
    *a1 = a2;
  }
}
