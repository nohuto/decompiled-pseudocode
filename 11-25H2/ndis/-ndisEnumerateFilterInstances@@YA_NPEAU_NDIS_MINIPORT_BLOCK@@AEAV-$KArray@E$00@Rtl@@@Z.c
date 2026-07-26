/*
 * XREFs of ?ndisEnumerateFilterInstances@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@E$00@Rtl@@@Z @ 0x14016E6D0
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1400756B0 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 * Callees:
 *     ?reserve@?$KArray@E$00@Rtl@@QEAA_N_K@Z @ 0x14007CE90 (-reserve@-$KArray@E$00@Rtl@@QEAA_N_K@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

char __fastcall ndisEnumerateFilterInstances(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  unsigned __int16 *v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // rbx
  _WORD *i; // rdi
  unsigned __int16 *v10; // rax

  v2 = *(_QWORD *)(a1 + 2040);
  v3 = 0LL;
  if ( !v2 )
    return 1;
  do
  {
    v6 = *(unsigned __int16 **)(v2 + 40);
    v2 = *(_QWORD *)(v2 + 120);
    v3 += *v6 + 2LL;
  }
  while ( v2 );
  if ( !v3 )
    return 1;
  if ( Rtl::KArray<unsigned char,1>::reserve((unsigned int *)a2, v3) )
  {
    v7 = *(unsigned int *)(a2 + 4);
    if ( v3 > v7 )
      memset((void *)(*(_QWORD *)(a2 + 8) + v7), 0, v3 - v7);
    *(_DWORD *)(a2 + 4) = v3;
    if ( !(_DWORD)v3 )
      __fastfail(5u);
    v8 = *(_QWORD *)(a1 + 2040);
    for ( i = *(_WORD **)(a2 + 8); v8; i = (_WORD *)((char *)i + *v10 + 2) )
    {
      *i = **(_WORD **)(v8 + 40);
      memmove(i + 1, *(const void **)(*(_QWORD *)(v8 + 40) + 8LL), **(unsigned __int16 **)(v8 + 40));
      v10 = *(unsigned __int16 **)(v8 + 40);
      v8 = *(_QWORD *)(v8 + 120);
    }
    return 1;
  }
  return 0;
}
