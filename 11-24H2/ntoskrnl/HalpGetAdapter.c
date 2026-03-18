/*
 * XREFs of HalpGetAdapter @ 0x1406FD4DC
 * Callers:
 *     HaliGetDmaAdapter @ 0x140542050 (HaliGetDmaAdapter.c)
 *     HalGetAdapter @ 0x1406FD4C0 (HalGetAdapter.c)
 * Callees:
 *     HalpAreDriversDmarCompatible @ 0x14053D7C0 (HalpAreDriversDmarCompatible.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x14053D8A0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     HalGetAdapterV3 @ 0x1407000B8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140700658 (HalGetAdapterV2.c)
 */

__int64 __fastcall HalpGetAdapter(__int64 a1, struct _DEVICE_OBJECT *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi

  v3 = 0LL;
  *a3 = 0;
  v7 = 0;
  if ( a2 )
  {
    if ( HalpAreDriversDmarCompatible(a2) )
    {
      v7 = 3;
    }
    else if ( ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator() )
    {
      v7 = 2;
    }
  }
  if ( *(_DWORD *)a1 > 2u )
  {
    if ( *(_DWORD *)a1 == 3 )
      return HalGetAdapterV3(a1, a2, v7, a3);
  }
  else
  {
    if ( !v7 )
      return HalGetAdapterV2(a1, a2, a3);
    if ( *(_BYTE *)(a1 + 4) )
      return HalGetAdapterV3(a1, a2, v7, a3);
  }
  return v3;
}
