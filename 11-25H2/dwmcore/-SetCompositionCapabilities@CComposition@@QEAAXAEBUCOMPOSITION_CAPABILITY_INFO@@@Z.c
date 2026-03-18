/*
 * XREFs of ?SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z @ 0x180226BA0
 * Callers:
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@_N@Z @ 0x180226A48 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@_N@Z.c)
 *     ??0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x18026F434 (--0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 * Callees:
 *     ?UpdatePowerNotifications@CComposition@@QEAAJXZ @ 0x180254B48 (-UpdatePowerNotifications@CComposition@@QEAAJXZ.c)
 */

void __fastcall CComposition::SetCompositionCapabilities(
        CComposition *this,
        const struct COMPOSITION_CAPABILITY_INFO *a2)
{
  __int128 v2; // xmm0
  int v3; // eax

  if ( *((_DWORD *)this + 1625) != *(_DWORD *)a2
    || *((_DWORD *)this + 1626) != *((_DWORD *)a2 + 1)
    || *((_DWORD *)this + 1627) != *((_DWORD *)a2 + 2)
    || *((_DWORD *)this + 1628) != *((_DWORD *)a2 + 3)
    || *((_DWORD *)this + 1629) != *((_DWORD *)a2 + 4) )
  {
    v2 = *(_OWORD *)a2;
    v3 = *((_DWORD *)a2 + 4);
    *((_BYTE *)this + 6494) = 1;
    *(_OWORD *)((char *)this + 6500) = v2;
    *((_DWORD *)this + 1629) = v3;
    CComposition::UpdatePowerNotifications(this);
  }
}
