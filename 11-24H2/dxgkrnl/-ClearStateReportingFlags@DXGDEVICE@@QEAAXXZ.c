/*
 * XREFs of ?ClearStateReportingFlags@DXGDEVICE@@QEAAXXZ @ 0x1403B57E4
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1403B56B0 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::ClearStateReportingFlags(DXGDEVICE *this)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)this + 7); i; i = *(_QWORD *)(i + 40) )
  {
    if ( (*(_DWORD *)(i + 4) & 1) != 0 )
      *(_DWORD *)(*(_QWORD *)(i + 56) + 12LL) &= ~2u;
  }
}
