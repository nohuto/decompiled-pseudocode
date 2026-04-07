/*
 * XREFs of ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N@Z @ 0x18003846C
 * Callers:
 *     ??$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z @ 0x18002113C (--$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfac.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x180036D24 (--$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetP.c)
 *     ??$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x18004D4D4 (--$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryP.c)
 *     ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x1800ADD94 (--$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimation.c)
 *     ??$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800ADECC (--$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureC.c)
 *     ??$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCHolographicInteropTextureProxy@@@Z @ 0x1800AE00C (--$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVC.c)
 *     ??$CreateProxyFromSharedHandle@VCRemoteAppRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemoteAppRenderTargetProxy@@@Z @ 0x1800AE14C (--$CreateProxyFromSharedHandle@VCRemoteAppRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemo.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CResourceProxy::InitializeFromSharedHandle(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v5; // r11
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // rax
  CBaseObject *v12; // rbx
  int v13; // eax
  int v14; // edi
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0;
  v5 = a4;
  LOBYTE(a4) = a5;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, unsigned int *))(*(_QWORD *)a3 + 104LL))(
         a3,
         v5,
         a2,
         a4,
         &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u, 0LL);
  }
  else
  {
    v10 = v16;
    v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            32LL);
    v12 = (CBaseObject *)v11;
    if ( v11 )
    {
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_DWORD *)(v11 + 8) = 1;
      *(_QWORD *)v11 = &CResource::`vftable';
      *(_QWORD *)(v11 + 16) = a3;
      *(_DWORD *)(v11 + 24) = v10;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 80LL))(a3, v10);
      v14 = v13;
      if ( v13 >= 0 )
      {
        *(_QWORD *)(a1 + 16) = v12;
        v9 = 0;
        goto LABEL_5;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x60u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x81u, 0LL);
      CBaseObject::Release(v12);
      v9 = v14;
    }
    else
    {
      v9 = -2147024882;
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x7Fu, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xB7u, 0LL);
  }
LABEL_5:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 112LL))(a3);
  return v9;
}
