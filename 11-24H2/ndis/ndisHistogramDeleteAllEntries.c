/*
 * XREFs of ndisHistogramDeleteAllEntries @ 0x140138C60
 * Callers:
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x140138938 (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x140138CD8 (-ndisReinitializeHistograms@@YAJXZ.c)
 * Callees:
 *     ??_GNdisHistogramEntry@@QEAAPEAXI@Z @ 0x1401387B0 (--_GNdisHistogramEntry@@QEAAPEAXI@Z.c)
 */

void **ndisHistogramDeleteAllEntries()
{
  _DWORD *v0; // rbx
  void **result; // rax
  _QWORD *v2; // rcx

  v0 = qword_14011CF38;
  while ( 1 )
  {
    result = *(void ***)v0;
    if ( *(_DWORD **)v0 == v0 )
      break;
    if ( result[1] != v0 || (v2 = *result, *((void ***)*result + 1) != result) )
      __fastfail(3u);
    *(_QWORD *)v0 = v2;
    v2[1] = v0;
    if ( result != (void **)16 )
      NdisHistogramEntry::`scalar deleting destructor'(result - 2);
  }
  v0[4] = 0;
  return result;
}
