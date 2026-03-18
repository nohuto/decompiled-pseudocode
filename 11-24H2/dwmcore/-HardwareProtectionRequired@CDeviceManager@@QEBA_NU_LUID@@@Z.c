/*
 * XREFs of ?HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z @ 0x1801C27E0
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1802357C0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180235DA0 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceManager::HardwareProtectionRequired(CDeviceManager *this, struct _LUID a2)
{
  unsigned __int8 v2; // di
  DWORD LowPart; // ebx
  __int64 i; // rcx
  LONG HighPart; // [rsp+3Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v2 = 0;
  LowPart = a2.LowPart;
  EnterCriticalSection(&CriticalSection);
  for ( i = qword_1803FAAE8; i != (_QWORD)xmmword_1803FAAF0; i += 16LL )
  {
    if ( __PAIR64__(HighPart, LowPart) == *(_QWORD *)(*(_QWORD *)i + 936LL) )
    {
      if ( !*(_BYTE *)(*(_QWORD *)i + 452LL) && !byte_1803FAB00 && *(_DWORD *)(*(_QWORD *)i + 448LL) )
        v2 = 1;
      break;
    }
  }
  LeaveCriticalSection(&CriticalSection);
  return v2;
}
