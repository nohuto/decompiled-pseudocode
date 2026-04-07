/*
 * XREFs of McTemplateU0d_EtwEventWriteTransfer @ 0x180014940
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800141DC (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180014650 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x1800147A8 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x180014864 (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002D918 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800EB990 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0d_EtwEventWriteTransfer(__int64 a1, int a2, int a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  int v7; // [rsp+80h] [rbp+18h] BYREF

  v7 = a3;
  v4[2] = &v7;
  v6 = 0;
  v5 = 4;
  return McGenEventWrite_EtwEventWriteTransfer(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           a2,
           a3,
           2,
           (__int64)v4);
}
