/*
 * XREFs of ?_RequestBitmap@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800C6504
 * Callers:
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x1800C63A4 (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 * Callees:
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180097FD4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x1800C5E0C (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::_RequestBitmap(
        __int64 a1,
        _QWORD *a2,
        int a3,
        enum DEVICE_SCALE_FACTOR a4)
{
  unsigned __int16 ImmersiveIconContainerSize; // ax
  HWND v7; // rcx

  *((_BYTE *)a2 + 40) = 1;
  ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(a4, a3);
  v7 = *(HWND *)(a1 + 80);
  if ( v7 )
    PostMessageW(v7, 0x323u, *a2, ImmersiveIconContainerSize | (unsigned __int64)(ImmersiveIconContainerSize << 16));
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer((__int64)v7, (__int64)&UdwmManageIconicThumbnail_Info, 3LL, *a2);
  return 0LL;
}
