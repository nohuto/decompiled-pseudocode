/*
 * XREFs of ?GetRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1402799F0
 * Callers:
 *     ?GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1402794F0 (-GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

void **__fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetRawDescriptor(
        __int64 a1,
        void **a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v7; // rax

  v7 = operator new[](*(unsigned int *)(a1 + 12), 0x4D677844u, 256LL, a4);
  *a2 = (void *)v7;
  if ( v7 )
  {
    *a3 = *(_DWORD *)(a1 + 12);
    memmove(*a2, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 12));
  }
  else
  {
    *a3 = 0;
  }
  return a2;
}
