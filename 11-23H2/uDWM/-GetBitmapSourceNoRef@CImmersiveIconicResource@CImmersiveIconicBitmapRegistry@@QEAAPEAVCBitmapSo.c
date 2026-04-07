/*
 * XREFs of ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x1800C3B28
 * Callers:
 *     ?GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800C3BDC (-GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistr.c)
 *     ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800C4060 (-SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSour.c)
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x1800C42E4 (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800C4770 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800C4A0C (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CBitmapSource *__fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *this,
        int a2)
{
  __int64 v2; // rdi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // rbx

  v2 = 0LL;
  v5 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v6 = *((_QWORD *)this + 1);
      if ( *(_QWORD *)(v6 + 8LL * v5) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v5) + 24LL) > MulDiv(a2, 8, 10) )
        {
          v7 = *((_QWORD *)this + 1);
          if ( *(_DWORD *)(*(_QWORD *)(v7 + 8LL * v5) + 24LL) < MulDiv(a2, 12, 10) )
            break;
        }
      }
      if ( ++v5 >= *((_DWORD *)this + 8) )
        return (struct CBitmapSource *)v2;
    }
    return *(struct CBitmapSource **)(*((_QWORD *)this + 1) + 8LL * v5);
  }
  return (struct CBitmapSource *)v2;
}
