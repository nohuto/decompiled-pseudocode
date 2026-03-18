/*
 * XREFs of ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x180172D2C
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x1801C6470 (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1801724A0 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?StopOnGpu@CComputeScribbleStopwatch@@QEAAXPEAUID3D12GraphicsCommandList@@@Z @ 0x180172EE0 (-StopOnGpu@CComputeScribbleStopwatch@@QEAAXPEAUID3D12GraphicsCommandList@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     wil::scope_exit__lambda_a89e02357b9dabebac3bdfc007c7c760___ @ 0x1802887D0 (wil--scope_exit__lambda_a89e02357b9dabebac3bdfc007c7c760___.c)
 *     _lambda_a89e02357b9dabebac3bdfc007c7c760_::_lambda_a89e02357b9dabebac3bdfc007c7c760_ @ 0x1802887E8 (_lambda_a89e02357b9dabebac3bdfc007c7c760_--_lambda_a89e02357b9dabebac3bdfc007c7c760_.c)
 *     wil::details::lambda_call__lambda_a89e02357b9dabebac3bdfc007c7c760___::_lambda_call__lambda_a89e02357b9dabebac3bdfc007c7c760___ @ 0x1802888BC (wil--details--lambda_call__lambda_a89e02357b9dabebac3bdfc007c7c760___--_lambda_call__lambda_a89e.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::BuildCommandList(
        CComputeScribbleFramebuffer *this,
        struct CComputeScribbleStopwatch *a2,
        struct IDCompositionDirectInkSuperWetRenderer *a3,
        struct ComputeScribbleLatencyData *a4)
{
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v19; // rdx
  int v20; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v21[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v22; // [rsp+50h] [rbp-29h]
  int v23; // [rsp+58h] [rbp-21h]
  int v24; // [rsp+5Ch] [rbp-1Dh]
  int v25; // [rsp+60h] [rbp-19h]
  int v26; // [rsp+64h] [rbp-15h]
  _BYTE v27[16]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v28[8]; // [rsp+78h] [rbp-1h] BYREF
  struct tagRECT v29; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  if ( v8 < 0 )
  {
    v19 = 197LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 80LL))(
         *((_QWORD *)this + 5),
         *((_QWORD *)this + 4),
         0LL);
  if ( v8 < 0 )
  {
    v19 = 198LL;
    goto LABEL_14;
  }
  v9 = lambda_a89e02357b9dabebac3bdfc007c7c760_::_lambda_a89e02357b9dabebac3bdfc007c7c760_(v28, this);
  wil::scope_exit__lambda_a89e02357b9dabebac3bdfc007c7c760___(v27, v9);
  v10 = *((_QWORD *)this + 11);
  v20 = 0;
  v11 = *((_QWORD *)this + 3);
  v29 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct IDCompositionDirectInkSuperWetRenderer *, int *, struct ComputeScribbleLatencyData *, struct tagRECT *))(*(_QWORD *)v10 + 40LL))(
          v10,
          *((_QWORD *)this + 5),
          v11,
          a3,
          &v20,
          a4,
          &v29);
  v8 = v12;
  if ( v12 < 0 )
  {
    v17 = 217LL;
  }
  else
  {
    CRegion::AddRectangle((const struct FastRegion::Internal::CRgnData **)this + 12, &v29);
    if ( v20 )
    {
      v13 = *((_QWORD *)this + 3);
      v14 = (__int64 *)*((_QWORD *)this + 5);
      v23 = 0;
      v26 = 0;
      v21[0] = 0;
      v21[1] = 0;
      v25 = 0;
      v22 = v13;
      v15 = *v14;
      v24 = v20;
      (*(void (__fastcall **)(__int64 *, __int64, _DWORD *))(v15 + 208))(v14, 1LL, v21);
      v20 = 0;
    }
    CComputeScribbleStopwatch::StopOnGpu(a2, *((struct ID3D12GraphicsCommandList **)this + 5));
    v16 = *((_QWORD *)this + 5);
    v27[8] = 0;
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL))(v16);
    v8 = v12;
    if ( v12 >= 0 )
    {
      v8 = 0;
      goto LABEL_9;
    }
    v17 = 234LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
    (const char *)(unsigned int)v12);
LABEL_9:
  wil::details::lambda_call__lambda_a89e02357b9dabebac3bdfc007c7c760___::_lambda_call__lambda_a89e02357b9dabebac3bdfc007c7c760___(v27);
  return (unsigned int)v8;
}
