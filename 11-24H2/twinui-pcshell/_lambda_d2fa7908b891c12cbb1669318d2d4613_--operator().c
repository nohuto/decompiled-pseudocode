/*
 * XREFs of _lambda_d2fa7908b891c12cbb1669318d2d4613_::operator() @ 0x18022CC6C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__&_::Run @ 0x1802B83A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__-_--Run.c)
 * Callees:
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1801F6600 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1802C4FF4 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 */

void __fastcall lambda_d2fa7908b891c12cbb1669318d2d4613_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v2 + 220) == 1 )
  {
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(v2 + 216, 2LL);
    v3 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v3 + 52) )
      CFrameApplicationPresentation::_SetFrameCloakSerialized(v3, 0);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
