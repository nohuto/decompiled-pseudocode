/*
 * XREFs of ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800DBD40
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800DAB4C (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180087450 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x1800DBF10 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::Clear(CDrawingContext *this, const struct _D3DCOLORVALUE *a2)
{
  __int64 (*v4)(void); // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r8
  int v17; // xmm0_4
  int v18; // xmm1_4
  int v19; // xmm0_4
  int v20; // xmm1_4
  int v21; // [rsp+30h] [rbp-49h] BYREF
  int v22; // [rsp+38h] [rbp-41h] BYREF
  int v23; // [rsp+40h] [rbp-39h] BYREF
  int v24; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+50h] [rbp-29h] BYREF
  int *v26; // [rsp+60h] [rbp-19h]
  int v27; // [rsp+68h] [rbp-11h]
  int v28; // [rsp+6Ch] [rbp-Dh]
  int *v29; // [rsp+70h] [rbp-9h]
  int v30; // [rsp+78h] [rbp-1h]
  int v31; // [rsp+7Ch] [rbp+3h]
  int *v32; // [rsp+80h] [rbp+7h]
  int v33; // [rsp+88h] [rbp+Fh]
  int v34; // [rsp+8Ch] [rbp+13h]
  int *v35; // [rsp+90h] [rbp+17h]
  int v36; // [rsp+98h] [rbp+1Fh]
  int v37; // [rsp+9Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+A0h] [rbp+27h] BYREF

  v4 = *(__int64 (**)(void))(*(_QWORD *)this + 112LL);
  if ( (char *)v4 == (char *)CDrawingContext::ApplyRenderState )
    v5 = CDrawingContext::ApplyRenderState(this);
  else
    v5 = v4();
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x29Du, 0LL);
  }
  else
  {
    v9 = *((_QWORD *)this + 3);
    CD2DContext::FlushDrawList((CD2DContext *)(v9 + 16), v6, v7);
    v12 = *(_DWORD *)(v9 + 368);
    v13 = 0LL;
    if ( v12 )
    {
      v10 = (unsigned int)(v12 - 1);
      v13 = *(_QWORD *)(*(_QWORD *)(v9 + 344) + 8 * v10);
    }
    CD2DContext::EnsureBeginDraw((CD2DContext *)(v9 + 16), v10, v11);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v17 = *(_DWORD *)(v13 + 64);
      v18 = *(_DWORD *)(v13 + 60);
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v26 = &v21;
      v24 = v17;
      v19 = *(_DWORD *)(v13 + 56);
      v29 = &v22;
      v32 = &v23;
      v35 = &v24;
      v23 = v18;
      v20 = *(_DWORD *)(v13 + 52);
      v27 = 4;
      v30 = 4;
      v33 = 4;
      v36 = 4;
      v22 = v19;
      v21 = v20;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        (const EVENT_DESCRIPTOR *)"(",
        v14,
        5u,
        &v25);
    }
    (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**(_QWORD **)(*(_QWORD *)(v13 + 16) + 200LL) + 376LL))(
      *(_QWORD *)(*(_QWORD *)(v13 + 16) + 200LL),
      a2);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_CLEAREVENT_Stop,
        v15,
        1u,
        &v38);
  }
  return v8;
}
