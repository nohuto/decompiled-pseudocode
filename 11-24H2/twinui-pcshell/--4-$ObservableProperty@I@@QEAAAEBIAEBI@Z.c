/*
 * XREFs of ??4?$ObservableProperty@I@@QEAAAEBIAEBI@Z @ 0x1804B3E88
 * Callers:
 *     ?VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804B44E0 (-VirtualDesktopDestroyed@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z @ 0x1804B46FC (-_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ObservableProperty<unsigned int>::operator=(__int64 a1, _DWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi

  *(_DWORD *)a1 = *a2;
  v3 = *(_QWORD **)(a1 + 8);
  v4 = &v3[*(_QWORD *)(a1 + 16)];
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 24LL))(*v3);
    ++v3;
  }
  return a1;
}
