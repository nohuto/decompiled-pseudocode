/*
 * XREFs of ??0CInputView_SizeOrModeChangeBase@@QEAA@XZ @ 0x1800D14BC
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800813C4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180075058 (--0CStoryboard@@IEAA@_N@Z.c)
 */

CInputView_SizeOrModeChangeBase *__fastcall CInputView_SizeOrModeChangeBase::CInputView_SizeOrModeChangeBase(
        CInputView_SizeOrModeChangeBase *this)
{
  __int64 v1; // r10
  CInputView_SizeOrModeChangeBase *result; // rax

  CStoryboard::CStoryboard(this);
  *(_BYTE *)(v1 + 68) = 1;
  *(_QWORD *)(v1 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = (CInputView_SizeOrModeChangeBase *)v1;
  *(_QWORD *)v1 = &CInputView_SizeOrModeChangeBase::`vftable'{for `CBaseObject'};
  return result;
}
