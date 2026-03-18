/*
 * XREFs of ?CaptureCOLORADJUSTMENT@@YAXPEAPEAUtagCOLORADJUSTMENT@@PEAU1@@Z @ 0x1C02C6A08
 * Callers:
 *     NtGdiEngPlgBlt @ 0x1C02C9EF0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02CA300 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CA7D0 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     <none>
 */

void __fastcall CaptureCOLORADJUSTMENT(struct tagCOLORADJUSTMENT **a1, struct tagCOLORADJUSTMENT *a2)
{
  struct tagCOLORADJUSTMENT *v2; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (struct tagCOLORADJUSTMENT *)MmUserProbeAddress;
    *a2 = *v2;
    *a1 = a2;
  }
}
