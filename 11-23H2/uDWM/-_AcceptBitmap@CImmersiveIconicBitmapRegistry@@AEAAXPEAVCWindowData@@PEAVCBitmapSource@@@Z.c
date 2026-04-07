/*
 * XREFs of ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800C4194
 * Callers:
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x1800C3940 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 * Callees:
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800ACC7C (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?RemoveAt@?$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z @ 0x1800B1F38 (-RemoveAt@-$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z.c)
 *     ?OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ @ 0x1800C1FE0 (-OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800C3900 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800C4060 (-SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSour.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x1800C42AC (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800E4A44 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::_AcceptBitmap(
        CImmersiveIconicBitmapRegistry *this,
        HWND *a2,
        struct CBitmapSource *a3)
{
  unsigned int v5; // ecx
  __int64 v7; // rdx
  __int64 v8; // rbx
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax
  __int64 v10; // rcx
  __int64 i; // rbx
  __int64 j; // rbx
  HWND v13; // rax

  v5 = *((_DWORD *)this + 10);
  if ( v5 > *((_DWORD *)this + 2) )
  {
    v7 = 0LL;
    if ( v5 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v7);
        if ( !*(_BYTE *)(v8 + 40) && !*(_DWORD *)(v8 + 44) )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v5 )
          goto LABEL_8;
      }
      DynArray<CTouchVisual *,0>::RemoveAt((__int64 *)this + 2, v7);
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'((CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v8);
    }
  }
LABEL_8:
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(this, a2[5]);
  if ( IconicResourceNoRef )
  {
    *((_BYTE *)IconicResourceNoRef + 40) = 0;
    v10 = *((unsigned int *)this + 2);
    if ( *((_DWORD *)this + 10) <= (unsigned int)v10 )
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::SetBitmapResource(IconicResourceNoRef, a3);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 148); i = (unsigned int)(i + 1) )
    {
      v10 = *(_QWORD *)(*((_QWORD *)a2[71] + i) + 88LL);
      if ( v10 )
        CThumbnailVisual::OnRepresentationTypeUpdated((CThumbnailVisual *)v10);
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 18); j = (unsigned int)(j + 1) )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * j);
      v13 = *(HWND *)(v10 + 304);
      if ( v13 )
        v13 = (HWND)*((_QWORD *)v13 + 5);
      if ( a2[5] == v13 )
        CIconicAnimatedVisual::OnRepresentationTypeUpdated((CIconicAnimatedVisual *)v10);
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(v10, (__int64)&UdwmManageIconicThumbnail_Info, 0LL, a2[5]);
}
