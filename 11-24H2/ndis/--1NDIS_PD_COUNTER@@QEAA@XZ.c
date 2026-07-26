/*
 * XREFs of ??1NDIS_PD_COUNTER@@QEAA@XZ @ 0x1401395E8
 * Callers:
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x140139730 (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_PD_COUNTER::~NDIS_PD_COUNTER(_UNICODE_STRING *this)
{
  RtlFreeUnicodeString(this + 6);
  RtlFreeUnicodeString(this + 7);
}
