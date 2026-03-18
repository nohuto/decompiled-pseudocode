/*
 * XREFs of ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1801449B0
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800D57D0 (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180086A40 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18014466C (-AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_del.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180145C50 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::SubmitRenderCommand(
        CD2DContext *this,
        struct CMegaRectBatchCommand **a2,
        struct CHwLightCollectionBuffer *a3,
        struct ClipPlaneInfoRef *a4)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  unsigned int v11; // ebx
  __int64 v12; // r13
  __int64 v13; // r8
  __int64 i; // r14
  __int64 v15; // r15
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // [rsp+30h] [rbp-88h] BYREF
  int v19; // [rsp+38h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+40h] [rbp-78h] BYREF
  int *v21; // [rsp+50h] [rbp-68h]
  __int64 v22; // [rsp+58h] [rbp-60h]
  int *v23; // [rsp+60h] [rbp-58h]
  __int64 v24; // [rsp+68h] [rbp-50h]

  if ( !*((_BYTE *)this + 437) )
  {
    v12 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v19 = 0;
      v21 = &v18;
      v18 = 16;
      v23 = &v19;
      v22 = 4LL;
      v24 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        (__int64)a3,
        3u,
        &v20);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 384LL))(*((_QWORD *)this + 25));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v18 = 0;
      v21 = &v19;
      v19 = 16;
      v23 = &v18;
      v22 = 4LL;
      v24 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        v13,
        3u,
        &v20);
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 88); v12 = v15 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)this + 41) + 8 * i);
      if ( v12 )
        *(_BYTE *)(v12 + 78) = 0;
      if ( !*(_BYTE *)(v15 + 78) )
      {
        v16 = *(_QWORD *)(v15 + 40);
        v17 = *(_QWORD *)(v15 + 32);
        *(_QWORD *)(v15 + 16) = this;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 26) + 56LL))(
          *((_QWORD *)this + 26),
          v17,
          v16);
        *(_BYTE *)(v15 + 78) = 1;
        CD2DTarget::ApplyCurrentClip((CD2DTarget *)v15);
      }
      i = (unsigned int)(i + 1);
    }
    *((_BYTE *)this + 437) = 1;
  }
  *((_BYTE *)this + 438) = 1;
  v8 = CD2DContext::EnsureDrawListBatch(this, a3, a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x207u, 0LL);
    return v9;
  }
  else
  {
    result = CDrawListEntryBatch::AppendRenderCommand(*((_QWORD *)this + 17), a2);
    v11 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0x20Au, 0LL);
      return v11;
    }
  }
  return result;
}
