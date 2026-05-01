/*
 * XREFs of ?Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ @ 0x1805637DC
 * Callers:
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z @ 0x18055DE10 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopGestureContext::Uninitialize(VirtualDesktopGestureContext *this)
{
  char *v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rsi

  v1 = (char *)this + 72;
  v2 = *((_QWORD *)this + 9);
  v3 = v2 + 8LL * *((_QWORD *)this + 10);
  while ( v2 != v3 )
  {
    DestroyWindow(*(HWND *)(*(_QWORD *)v2 + 8LL));
    v2 += 8LL;
  }
  CTSimpleArray<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>>::RemoveAll((__int64)v1);
}
