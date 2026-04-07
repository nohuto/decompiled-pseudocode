/*
 * XREFs of ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x1800C4BDC
 * Callers:
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800E4A44 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x1800C3D9C (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800C4CEC (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::OnRepresentationTypeUpdated(CImmersiveWindowIconic *this, int a2)
{
  int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rdx
  void *v7; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  LOBYTE(v7) = *((_BYTE *)this + 328);
  v3 = CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
         *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 30),
         this,
         a2,
         (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 81),
         v7,
         (enum IconicRepresentationType *)&v9,
         0LL);
  if ( v3 < 0 )
  {
    v5 = 227LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\immersivewindowiconic.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  LOBYTE(v4) = 1;
  v3 = CImmersiveWindowIconic::SetRepresentationType(this, v9, v4);
  if ( v3 < 0 )
  {
    v5 = 228LL;
    goto LABEL_3;
  }
  return 0LL;
}
