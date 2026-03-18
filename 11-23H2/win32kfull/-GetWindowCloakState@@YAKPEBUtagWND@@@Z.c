/*
 * XREFs of ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0121808
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008AF0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C004533C (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x1C005D940 (-ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00A40E8 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00AF0FC (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00E849C (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00E9820 (NtUserSetWindowCompositionAttribute.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121950 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C01232A4 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x1C013525C (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C0151390 (DCELogicalSpeedTopLevelHitTest.c)
 *     _ChildWindowFromPointEx @ 0x1C0154E3A (_ChildWindowFromPointEx.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01C8BBC (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01C9A08 (_GetNextQueueWindow.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E56D0 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxTouchTargetWindow @ 0x1C01E68D8 (xxxTouchTargetWindow.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F3588 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxAddShadow @ 0x1C0220DA4 (xxxAddShadow.c)
 *     _RealChildWindowFromPoint @ 0x1C022FDA8 (_RealChildWindowFromPoint.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C01231D8 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall GetWindowCloakState(struct tagTHREADINFO **a1)
{
  int v2; // esi
  __int64 v3; // rdx
  tagObjLock *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  _DWORD *Prop; // rbx
  int v9; // ecx
  struct tagTHREADINFO *v10; // rax
  unsigned int v11; // ebx
  unsigned int v12; // edx
  __int64 result; // rax
  _DWORD v14[16]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v15[16]; // [rsp+60h] [rbp-48h] BYREF
  tagObjLock *v16; // [rsp+70h] [rbp-38h]
  char v17; // [rsp+80h] [rbp-28h]
  char v18; // [rsp+88h] [rbp-20h]

  memset_0(v14, 0, sizeof(v14));
  v2 = 0;
  if ( !(unsigned int)IsTopLevelWindow(a1) && ((*((_BYTE *)a1[5] + 26) & 8) == 0 || !GetTopLevelWindow((__int64)v4)) )
    goto LABEL_6;
  v7 = *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy;
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(v15, a1[18]);
  Prop = (_DWORD *)RealGetProp(a1[18], v7, 1LL);
  if ( v18 )
  {
    if ( v17 )
    {
      v4 = v16;
      if ( v16 )
        tagObjLock::UnLockExclusive(v16);
    }
  }
  v2 = 1;
  if ( Prop )
  {
    v9 = *Prop & 0x7FFFF;
  }
  else
  {
LABEL_6:
    v10 = a1[2];
    v11 = v14[0] & 0xFFFD0000;
    if ( !v10 )
      v10 = PtiCurrentShared((__int64)v4, v3, v5, v6);
    v9 = (v11 ^ (v11 ^ (*((_DWORD *)v10 + 162) >> 3)) & 0x40000) & 0x7FFFF;
    if ( !v2 )
      return 0LL;
  }
  v12 = 0;
  if ( (v9 & 0x400) != 0 || (v9 & 0x2000) != 0 )
    v12 = 1;
  result = v12 | 2;
  if ( (v9 & 0x800) == 0 )
    return v12;
  return result;
}
