/*
 * XREFs of ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800BC5E8
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180012D20 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180017710 (-GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEA.c)
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180018E60 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x1800CF5BC (-AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800CFC20 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x1800CFD24 (-OnInputReceived@MPCRawInputProvider@@IEAAJXZ.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x1800CFF68 (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1800FD420 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FD7A0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FE340 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FE9E4 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Atomic_storage<bool,1>::load(__int64 a1)
{
  return *(_BYTE *)a1;
}
