/*
 * XREFs of CcRecalculateVacbArrayHighwaterMark @ 0x1403B6278
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1404A08B8 (CcGetRandomVacbArrayWithReference.c)
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
