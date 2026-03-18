/*
 * XREFs of ?HardwareProtectionRequired@CDeviceManager@@QEBA_NU_LUID@@@Z @ 0x1801D4FC0
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x18023EE50 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18023F450 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
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
  for ( i = qword_180406B38; i != (_QWORD)xmmword_180406B40; i += 16LL )
  {
    if ( __PAIR64__(HighPart, LowPart) == *(_QWORD *)(*(_QWORD *)i + 936LL) )
    {
      if ( !*(_BYTE *)(*(_QWORD *)i + 452LL) && !byte_180406B50 && *(_DWORD *)(*(_QWORD *)i + 448LL) )
        v2 = 1;
      break;
    }
  }
  LeaveCriticalSection(&CriticalSection);
  return v2;
}
