/*
 * XREFs of ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ @ 0x18009AFDC
 * Callers:
 *     ?WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001D074 (-WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800C624C (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     <none>
 */

HWND __fastcall CIconicAnimatedVisual::GetWindow(CIconicAnimatedVisual *this)
{
  __int64 v1; // rdx
  HWND result; // rax

  v1 = *((_QWORD *)this + 32);
  result = 0LL;
  if ( v1 )
    return *(HWND *)(v1 + 40);
  return result;
}
