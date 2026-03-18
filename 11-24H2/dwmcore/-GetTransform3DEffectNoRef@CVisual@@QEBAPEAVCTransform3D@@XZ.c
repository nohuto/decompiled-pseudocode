/*
 * XREFs of ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x1800AE5D0
 * Callers:
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800392E8 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800AE6F0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C0020 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370F0 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CTransform3D *__fastcall CVisual::GetTransform3DEffectNoRef(CVisual *this)
{
  _DWORD *v1; // rax
  __int64 v3; // rcx
  _BYTE *v4; // r8
  unsigned int i; // edx
  _QWORD **v6; // rbx
  _QWORD *v7; // rbx
  __int64 (__fastcall *v8)(); // rax
  __int64 (__fastcall *v9)(); // rax

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v1 & 0x800000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  for ( i = 0; i < (unsigned int)v3; ++v4 )
  {
    if ( *v4 == 9 )
      break;
    ++i;
  }
  if ( i >= (unsigned int)v3 )
    v6 = 0LL;
  else
    v6 = (_QWORD **)((char *)v1 + 8LL * i - (((_BYTE)v3 + 15) & 7) + v3 + 15);
  v7 = *v6;
  v8 = *(__int64 (__fastcall **)())(*v7 + 64LL);
  if ( v8 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType )
  {
    if ( CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType((__int64)v7, 175) )
      return (struct CTransform3D *)v7;
  }
  else if ( ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v8)(v7, 175LL) )
  {
    return (struct CTransform3D *)v7;
  }
  v9 = *(__int64 (__fastcall **)())(*v7 + 64LL);
  if ( v9 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType
    || ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v9)(v7, 58LL) )
  {
    return (struct CTransform3D *)v7[11];
  }
  else
  {
    return 0LL;
  }
}
