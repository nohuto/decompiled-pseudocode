/*
 * XREFs of ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x1800F36C0
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800F3A90 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?GetFrameDuration@CComposition@@QEBA_KXZ @ 0x1800F3AC0 (-GetFrameDuration@CComposition@@QEBA_KXZ.c)
 *     ?ConfirmFrame@CKernelTransport@@UEAAJAEBUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1800F3AF0 (-ConfirmFrame@CKernelTransport@@UEAAJAEBUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180103700 (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 *     McTemplateU0qxqNR2_EventWriteTransfer @ 0x180222498 (McTemplateU0qxqNR2_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::ConfirmCompositionFrame(CComposition *this)
{
  unsigned __int64 FrameDuration; // rax
  CRenderTargetManager *v3; // rcx
  __int64 v4; // rcx
  CKernelTransport *v5; // rcx
  int (*v6)(CKernelTransport *__hidden, const struct tagCOMPOSITION_CONFIRM_FRAME_INFO *); // rax
  int v7; // eax
  int v8; // ebx
  _QWORD v10[3]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v11; // [rsp+58h] [rbp-28h]
  struct tagCOMPOSITION_TARGET_ID_AND_STATS *v12[2]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  if ( !*((_QWORD *)this + 111) )
    return 0LL;
  v10[0] = *((_QWORD *)this + 111);
  v10[1] = *((_QWORD *)this + 37);
  v11 = 0LL;
  *(_OWORD *)v12 = 0LL;
  v10[2] = CComposition::GetFrameTargetTime(this);
  FrameDuration = CComposition::GetFrameDuration(this);
  v3 = (CRenderTargetManager *)*((_QWORD *)this + 77);
  *(_QWORD *)&v11 = FrameDuration;
  LODWORD(v12[0]) = CRenderTargetManager::CollectStats(v3, &v12[1]);
  v4 = 0LL;
  if ( CFlipAwayFence::s_fenceIdsToDestroy != qword_1803FAB70 )
  {
    v4 = *(_QWORD *)(qword_1803FAB70 - 8);
    qword_1803FAB70 -= 8LL;
  }
  *((_QWORD *)&v11 + 1) = v4;
  v5 = (CKernelTransport *)*((_QWORD *)this + 709);
  v6 = *(int (**)(CKernelTransport *__hidden, const struct tagCOMPOSITION_CONFIRM_FRAME_INFO *))(*(_QWORD *)v5 + 16LL);
  v7 = v6 == CKernelTransport::ConfirmFrame
     ? CKernelTransport::ConfirmFrame(v5, (const struct tagCOMPOSITION_CONFIRM_FRAME_INFO *)v10)
     : ((__int64 (__fastcall *)(CKernelTransport *, _QWORD *))v6)(v5, v10);
  v8 = v7;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0qxqNR2_EventWriteTransfer(
      120 * LODWORD(v12[0]),
      v12[0],
      v7,
      *((_QWORD *)this + 111),
      v12[0],
      120 * LODWORD(v12[0]),
      (__int64)v12[1]);
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBE8,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\composition.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
