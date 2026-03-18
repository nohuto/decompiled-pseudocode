/*
 * XREFs of ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1802A7A40
 * Callers:
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800F775C (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 * Callees:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x18003BDB0 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x18003BEF0 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1800F17E0 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x1800F19C0 (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800FB18C (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::SetCustomAnimationFinalValue(
        _QWORD *a1,
        __int64 a2,
        CKeyframeAnimation *a3,
        int a4)
{
  const struct KeyframeValue *LastKeyframeValue; // rdi
  int Value; // eax
  unsigned int v9; // edi
  char v11; // r9
  __int64 v12; // [rsp+20h] [rbp-39h] BYREF
  int v13; // [rsp+28h] [rbp-31h]
  CPathData *v14; // [rsp+60h] [rbp+7h] BYREF
  int v15; // [rsp+68h] [rbp+Fh]
  __int64 v16; // [rsp+70h] [rbp+17h] BYREF
  int v17; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(a3);
  if ( *((_DWORD *)LastKeyframeValue + 5) != 1 )
    return 0LL;
  memset_0(&v12, 0, 0x40uLL);
  v14 = 0LL;
  v15 = 0;
  Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (struct CExpressionValue *)&v12);
  v9 = Value;
  if ( Value < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x430,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)(unsigned int)Value);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v14);
    return v9;
  }
  if ( !a4 )
  {
    v16 = v12;
    v17 = v13;
    CInteractionTracker::SetPosition(a2, (__int64)&v16, 1);
    v11 = 3;
LABEL_8:
    CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(a1, a2, a2, v11);
    goto LABEL_9;
  }
  if ( a4 == 1 )
  {
    CInteractionTracker::SetScale(a2, *(float *)&v12, 1);
    v11 = 4;
    goto LABEL_8;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v14);
  return 0LL;
}
