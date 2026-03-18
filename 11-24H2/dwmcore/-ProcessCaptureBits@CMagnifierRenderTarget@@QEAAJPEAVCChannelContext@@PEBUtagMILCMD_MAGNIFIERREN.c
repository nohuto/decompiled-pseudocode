/*
 * XREFs of ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x18018BB38
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180110290 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x18018B2C8 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x18018BC84 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x18018BCDC (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCMagnifierRenderTarget@@PEA.c)
 *     ??2MagnifierCaptureBitsResponse@@SAPEAX_K@Z @ 0x18018BD60 (--2MagnifierCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     McTemplateU0xxddffff_EventWriteTransfer @ 0x180284048 (McTemplateU0xxddffff_EventWriteTransfer.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCaptureBits(
        CMagnifierRenderTarget *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *a3)
{
  int updated; // eax
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebx
  MagnifierCaptureBitsResponse *v9; // rax
  MagnifierCaptureBitsResponse *v11; // rax
  CDrawListCache *v12; // rsi
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  struct WICRect v16; // [rsp+50h] [rbp-18h] BYREF

  v16.X = 0;
  v16.Y = 0;
  v16.Width = *((_DWORD *)a3 + 2);
  v16.Height = *((_DWORD *)a3 + 3);
  *((_BYTE *)this + 2992) = 1;
  updated = CMagnifierRenderTarget::ProcessUpdateParams(
              this,
              a2,
              (const struct tagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *)((char *)a3 + 32));
  v8 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x74u, 0LL);
  }
  else
  {
    *((_DWORD *)this + 49) = ((*((_DWORD *)a3 + 6) & 1) == 0) + 1;
    v9 = (MagnifierCaptureBitsResponse *)MagnifierCaptureBitsResponse::operator new(v7);
    if ( v9
      && (v11 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
                  v9,
                  *((struct CGlobalSurfaceManager **)g_pComposition + 78),
                  this,
                  a2,
                  &v16,
                  *((_QWORD *)a3 + 2)),
          (v12 = v11) != 0LL) )
    {
      *((_DWORD *)v11 + 4) = 0;
      v13 = CResponseItem::QueueResponse(v11);
      v8 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x8Fu, 0LL);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0xxddffff_EventWriteTransfer(
          v15,
          v14,
          *((_QWORD *)this + 340),
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          *((_DWORD *)a3 + 9),
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 5)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 6)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 7)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 8)).m128_i8[0]);
      }
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v12);
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x86u, 0LL);
    }
  }
  return v8;
}
