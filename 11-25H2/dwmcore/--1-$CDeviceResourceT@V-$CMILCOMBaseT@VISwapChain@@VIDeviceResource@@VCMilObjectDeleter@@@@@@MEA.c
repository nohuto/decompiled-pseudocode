/*
 * XREFs of ??1?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@MEAA@XZ @ 0x18025A8B0
 * Callers:
 *     ??1CDDASwapChain@@MEAA@XZ @ 0x180259398 (--1CDDASwapChain@@MEAA@XZ.c)
 *     ??1CDummyRemotingSwapChain@@MEAA@XZ @ 0x1802CF978 (--1CDummyRemotingSwapChain@@MEAA@XZ.c)
 *     ??1CCompSwapChain@@MEAA@XZ @ 0x1802D083C (--1CCompSwapChain@@MEAA@XZ.c)
 *     ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x1802D4CE8 (--1CLegacyRemotingSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::~CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>(
        _QWORD *a1)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
}
