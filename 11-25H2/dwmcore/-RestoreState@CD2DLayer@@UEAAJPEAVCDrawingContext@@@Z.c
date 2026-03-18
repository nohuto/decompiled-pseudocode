/*
 * XREFs of ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180086430
 * Callers:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180085F60 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180086190 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 * Callees:
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180086A40 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DLayer::RestoreState(CD2DLayer *this, struct CDrawingContext *a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // r8
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Start,
      a3,
      1LL,
      v9);
  v4 = *((_QWORD *)a2 + 5);
  CD2DContext::FlushDrawList((CD2DContext *)(v4 + 16));
  v5 = *(_DWORD *)(v4 + 368);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 344) + 8LL * (unsigned int)(v5 - 1));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v6 + 16) + 200LL) + 328LL))(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 200LL));
  CD2DTarget::ApplyCurrentClip((CD2DTarget *)v6);
  --*(_DWORD *)(v6 + 48);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Stop,
      v7,
      1LL,
      v9);
  return 0LL;
}
