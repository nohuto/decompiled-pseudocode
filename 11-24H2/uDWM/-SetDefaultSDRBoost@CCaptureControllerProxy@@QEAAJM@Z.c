/*
 * XREFs of ?SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z @ 0x1800A85D4
 * Callers:
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_0d61ac3af7bbde50e422a604397c2ed5___ @ 0x1800ABA74 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindow__lambda_0d61ac3af7bbde50e422a604.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B4EB0 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     CProjectionBorderManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_1eb49ca778746744b4a6345f153f5572___ @ 0x1800CB3A0 (CProjectionBorderManager--_ApplyToAllCaptureControllersForCapturedWindow__lambda_1eb49ca77874674.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@M@Z @ 0x1800CFBF8 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@M@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CFC5C (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureControllerProxy::SetDefaultSDRBoost(CCaptureControllerProxy *this, float a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 728LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
}
