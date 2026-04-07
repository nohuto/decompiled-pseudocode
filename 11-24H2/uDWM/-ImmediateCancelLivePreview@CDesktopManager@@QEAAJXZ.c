/*
 * XREFs of ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800BA5E0
 * Callers:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x180045818 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180092EB0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180094F30 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDesktopManager::ImmediateCancelLivePreview(CDesktopManager *this)
{
  signed int v2; // ebx
  _DWORD *v3; // rax
  void *v4; // rdi
  signed int LastError; // eax

  v2 = 0;
  v3 = DefaultHeap::Alloc(0x20uLL);
  v4 = v3;
  if ( v3 )
  {
    *v3 = 0;
    v3[1] = 0;
    *((_QWORD *)v3 + 1) = 0LL;
    v3[7] = 0;
    v3[4] = 1;
    v3[6] = 1;
    SetLastError(0);
    if ( PostThreadMessageW(*((_DWORD *)this + 282), 0x405u, (WPARAM)v4, 0LL) )
    {
      v4 = 0LL;
    }
    else
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      if ( v2 >= 0 )
        v2 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xAEAu, 0LL);
    }
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xADCu, 0LL);
  }
  DefaultHeap::Free(v4);
  return (unsigned int)v2;
}
