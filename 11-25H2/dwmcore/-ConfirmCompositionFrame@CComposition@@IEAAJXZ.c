/*
 * XREFs of ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x180031B80
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030238 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800320D0 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?GetFrameDuration@CComposition@@QEBA_KXZ @ 0x180032100 (-GetFrameDuration@CComposition@@QEBA_KXZ.c)
 *     ?ConfirmFrame@CKernelTransport@@UEAAJAEBUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x180032130 (-ConfirmFrame@CKernelTransport@@UEAAJAEBUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x18013F210 (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 *     McTemplateU0qxqNR2_EventWriteTransfer @ 0x18022D908 (McTemplateU0qxqNR2_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::ConfirmCompositionFrame(CComposition *this)
{
  unsigned __int64 FrameDuration; // rax
  CRenderTargetManager *v3; // rcx
  __int64 v4; // rcx
  CKernelTransport *v5; // rcx
  __int64 (__fastcall *v6)(CKernelTransport *__hidden, const struct tagCOMPOSITION_CONFIRM_FRAME_INFO *); // rax
  int v7; // eax
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-60h]
  _QWORD v11[3]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v12; // [rsp+58h] [rbp-28h]
  struct tagCOMPOSITION_TARGET_ID_AND_STATS *v13[2]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  if ( !*((_QWORD *)this + 111) )
    return 0LL;
  v11[0] = *((_QWORD *)this + 111);
  v11[1] = *((_QWORD *)this + 37);
  v12 = 0LL;
  *(_OWORD *)v13 = 0LL;
  v11[2] = CComposition::GetFrameTargetTime(this);
  FrameDuration = CComposition::GetFrameDuration(this);
  v3 = (CRenderTargetManager *)*((_QWORD *)this + 77);
  *(_QWORD *)&v12 = FrameDuration;
  LODWORD(v13[0]) = CRenderTargetManager::CollectStats(v3, &v13[1]);
  v4 = 0LL;
  if ( CFlipAwayFence::s_fenceIdsToDestroy != qword_180406BC0 )
  {
    v4 = *(_QWORD *)(qword_180406BC0 - 8);
    qword_180406BC0 -= 8LL;
  }
  *((_QWORD *)&v12 + 1) = v4;
  v5 = (CKernelTransport *)*((_QWORD *)this + 709);
  v6 = *(__int64 (__fastcall **)(CKernelTransport *__hidden, const struct tagCOMPOSITION_CONFIRM_FRAME_INFO *))(*(_QWORD *)v5 + 16LL);
  v7 = v6 == CKernelTransport::ConfirmFrame
     ? CKernelTransport::ConfirmFrame(v5, (const struct tagCOMPOSITION_CONFIRM_FRAME_INFO *)v11)
     : v6(v5, (const struct tagCOMPOSITION_CONFIRM_FRAME_INFO *)v11);
  v8 = v7;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0qxqNR2_EventWriteTransfer(
      120 * LODWORD(v13[0]),
      v13[0],
      v7,
      *((_QWORD *)this + 111),
      v13[0],
      120 * LODWORD(v13[0]),
      (__int64)v13[1]);
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC79,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\composition.cpp",
    (const char *)(unsigned int)v8,
    v10);
  return (unsigned int)v8;
}
