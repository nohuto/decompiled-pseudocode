/*
 * XREFs of ?GetFirst@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@XZ @ 0x1801188D4
 * Callers:
 *     ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x18011A850 (-Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::GetFirst(__int64 a1)
{
  __int64 v1; // r8
  unsigned int i; // edx
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 8) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * i);
      if ( v3 )
        goto LABEL_7;
    }
  }
  v3 = 0LL;
LABEL_7:
  *(_QWORD *)(a1 + 72) = v3;
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( !v4 )
    {
      LODWORD(v5) = *(_DWORD *)(v3 + 48) % *(_DWORD *)(a1 + 16);
      do
      {
        v5 = (unsigned int)(v5 + 1);
        v4 = 0LL;
        if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 16) )
          break;
        v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
      }
      while ( !v4 );
    }
    *(_QWORD *)(a1 + 72) = v4;
    return v3 + 8;
  }
  return v1;
}
