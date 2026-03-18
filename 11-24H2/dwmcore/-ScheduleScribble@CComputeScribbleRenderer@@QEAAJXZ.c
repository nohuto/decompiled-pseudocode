/*
 * XREFs of ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801C4EF8
 * Callers:
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018EA60 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCComputeScribble@@_KI@Z @ 0x1801C4990 (-ScheduleScribbleFrame@CComputeScribbleScheduler@@QEAAJPEAVCComputeScribbleFramebuffer@@PEAVCCom.c)
 *     ?GetBackBufferData@CComputeScribbleRenderer@@AEAAPEAVCComputeScribbleFramebuffer@@XZ @ 0x1801C5014 (-GetBackBufferData@CComputeScribbleRenderer@@AEAAPEAVCComputeScribbleFramebuffer@@XZ.c)
 *     ?GetOverlaySwapChain@CComputeScribbleRenderer@@AEAAPEAVIOverlaySwapChain@@XZ @ 0x1801C59B0 (-GetOverlaySwapChain@CComputeScribbleRenderer@@AEAAPEAVIOverlaySwapChain@@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x18026D6D0 (McTemplateU0xddddd_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleRenderer::ScheduleScribble(CComputeScribbleRenderer *this)
{
  struct CComputeScribbleFramebuffer *BackBufferData; // rbp
  struct IOverlaySwapChain *OverlaySwapChain; // rax
  struct IOverlaySwapChain *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  unsigned int v8; // eax
  char v9; // r15
  struct CComputeScribble *v10; // r8
  char v12; // bl
  __int64 v13; // rax
  int v14; // eax
  _OWORD v15[2]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( !*((_BYTE *)this + 48) )
    return 0LL;
  BackBufferData = CComputeScribbleRenderer::GetBackBufferData(this);
  if ( !BackBufferData )
    return 0LL;
  OverlaySwapChain = CComputeScribbleRenderer::GetOverlaySwapChain(this);
  v4 = OverlaySwapChain;
  if ( !OverlaySwapChain )
    return 2291662854LL;
  memset(v15, 0, sizeof(v15));
  v5 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, _OWORD *))(*(_QWORD *)OverlaySwapChain + 136LL))(
         OverlaySwapChain,
         v15);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = DWORD2(v15[0]) + 2;
    v8 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)v4 + 96LL))(v4);
    v9 = v8;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v12 = v8 > LODWORD(v15[0]);
      v13 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)v4 + 192LL))(v4);
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 88LL))(v13);
      McTemplateU0xddddd_EventWriteTransfer(
        v15[0],
        (unsigned int)&EVTDESC_COMPUTESCRIBBLE_PRESCHEDULE,
        *((_QWORD *)this + 3),
        v14,
        v9,
        v15[0],
        SBYTE8(v15[0]),
        v12);
    }
    v10 = (struct CComputeScribble *)*((_QWORD *)this + 5);
    if ( v10 )
      CComputeScribbleScheduler::ScheduleScribbleFrame(
        *((HANDLE **)this + 4),
        BackBufferData,
        v10,
        *((_QWORD *)this + 3),
        v7);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12A,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
