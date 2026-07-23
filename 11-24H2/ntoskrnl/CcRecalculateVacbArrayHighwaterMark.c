/*
 * XREFs of CcRecalculateVacbArrayHighwaterMark @ 0x1403EEF14
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x1403EE7EC (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall CcRecalculateVacbArrayHighwaterMark(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 8) + 1;
  if ( *(_DWORD *)(a1 + 8) != -1 )
  {
    do
    {
      if ( *(_QWORD *)(a1 + 40LL * (unsigned int)--v1 + 24) )
        break;
      *(_DWORD *)(a1 + 8) = v1;
    }
    while ( v1 );
  }
}
