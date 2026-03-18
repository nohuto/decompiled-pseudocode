/*
 * XREFs of ?SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z @ 0x18021AEF0
 * Callers:
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@_N@Z @ 0x18021AD90 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@_N@Z.c)
 *     ??0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1802633E4 (--0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 * Callees:
 *     ?UpdatePowerNotifications@CComposition@@QEAAJXZ @ 0x1802497F4 (-UpdatePowerNotifications@CComposition@@QEAAJXZ.c)
 */

void __fastcall CComposition::SetCompositionCapabilities(
        CComposition *this,
        const struct COMPOSITION_CAPABILITY_INFO *a2)
{
  __int128 v2; // xmm0
  int v3; // eax

  if ( *((_DWORD *)this + 1619) != *(_DWORD *)a2
    || *((_DWORD *)this + 1620) != *((_DWORD *)a2 + 1)
    || *((_DWORD *)this + 1621) != *((_DWORD *)a2 + 2)
    || *((_DWORD *)this + 1622) != *((_DWORD *)a2 + 3)
    || *((_DWORD *)this + 1623) != *((_DWORD *)a2 + 4) )
  {
    v2 = *(_OWORD *)a2;
    v3 = *((_DWORD *)a2 + 4);
    *((_BYTE *)this + 6470) = 1;
    *(_OWORD *)((char *)this + 6476) = v2;
    *((_DWORD *)this + 1623) = v3;
    CComposition::UpdatePowerNotifications(this);
  }
}
