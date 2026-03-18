/*
 * XREFs of ?ProcessBindData@CVirtualMonitorCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA@@@Z @ 0x180282FA4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x18015A23C (-ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z @ 0x180282D80 (-CreateTextures@CVirtualMonitorCaptureRenderTarget@@IEAAJI@Z.c)
 *     ?Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z @ 0x1802D5FCC (-Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualMonitorCaptureRenderTarget::ProcessBindData(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIRTUALMONITORCAPTURERENDERTARGET_BINDDATA *a3)
{
  int v5; // ebx
  unsigned int v6; // eax
  enum DXGI_FORMAT v7; // r9d
  void *v8; // r8
  unsigned int v9; // edx
  int Textures; // eax
  void *v12; // [rsp+20h] [rbp-28h]
  struct CHolographicFrameProcessor *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  *((_QWORD *)this + 398) = *((_QWORD *)a3 + 1);
  v5 = 0;
  *((_BYTE *)this + 3192) = *((_BYTE *)a3 + 32);
  *((_DWORD *)this + 799) = *((_DWORD *)a3 + 12) - *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 800) = *((_DWORD *)a3 + 13) - *((_DWORD *)a3 + 11);
  *((_DWORD *)this + 801) = *((_DWORD *)a3 + 6) - *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 802) = *((_DWORD *)a3 + 7) - *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 803) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 804) = *((_DWORD *)a3 + 5);
  (*(void (__fastcall **)(CVirtualMonitorCaptureRenderTarget *))(*(_QWORD *)this + 232LL))(this);
  if ( *((_BYTE *)this + 3192) )
  {
    if ( !*((_QWORD *)this + 403) )
    {
      *((_QWORD *)this + 403) = 0LL;
      v6 = *((_DWORD *)this + 802);
      v7 = *((_DWORD *)this + 801);
      v8 = (void *)*((_QWORD *)this + 377);
      v9 = *((_DWORD *)this + 796);
      v13 = 0LL;
      LODWORD(v12) = v7;
      v5 = CHolographicFrameProcessor::Create(*((struct CComposition **)this + 3), v9, v8, v7, v12, v6, &v13);
      *((_QWORD *)this + 403) = v13;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x32u, 0LL);
        goto LABEL_10;
      }
    }
  }
  if ( *((_BYTE *)this + 3192) )
  {
    Textures = CVirtualMonitorCaptureRenderTarget::CreateTextures(this, *((_DWORD *)a3 + 9));
    v5 = Textures;
    if ( Textures < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Textures, 0x37u, 0LL);
LABEL_10:
      CCaptureRenderTarget::ReleaseRenderingResources(this);
    }
  }
  return (unsigned int)v5;
}
