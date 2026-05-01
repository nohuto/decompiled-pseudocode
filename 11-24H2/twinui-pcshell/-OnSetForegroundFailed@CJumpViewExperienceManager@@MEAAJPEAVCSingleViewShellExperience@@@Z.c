/*
 * XREFs of ?OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803952B0
 * Callers:
 *     <none>
 * Callees:
 *     ?TransferToCurrentThread@ShowJumpViewActivity@JumpViewProvider@@QEAA?AV12@XZ @ 0x1801ABE28 (-TransferToCurrentThread@ShowJumpViewActivity@JumpViewProvider@@QEAA-AV12@XZ.c)
 *     ?CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ @ 0x1802286AC (-CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x1802A164C (--1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x180393A4C (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     ?FireCancelledEvent@CJumpViewExperienceManager@@AEAAXXZ @ 0x180394350 (-FireCancelledEvent@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?JumpViewCancelledDueToForeground@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ @ 0x180394B54 (-JumpViewCancelledDueToForeground@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180395FC0 (-Stop@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CJumpViewExperienceManager::OnSetForegroundFailed(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CJumpViewExperienceManager *v3; // rdi
  _BYTE v5[336]; // [rsp+20h] [rbp-168h] BYREF

  v3 = (CJumpViewExperienceManager *)((char *)this - 64);
  CJumpViewExperienceManager::FireCancelledEvent((CJumpViewExperienceManager *)((char *)this - 64));
  if ( **((_DWORD **)this + 94) == 1 )
  {
    JumpViewProvider::ShowJumpViewActivity::TransferToCurrentThread(
      (__int64)this + 480,
      (struct wil::details::IFailureCallback *)v5);
    JumpViewProvider::ShowJumpViewActivity::JumpViewCancelledDueToForeground((JumpViewProvider::ShowJumpViewActivity *)v5);
    CJumpViewExperienceManager::DismissImpl(v3, 1);
    CJumpViewExperienceManager::CancelJumpViewTelemetryTimeout(v3);
    wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v5);
    JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v5);
  }
  return 0LL;
}
