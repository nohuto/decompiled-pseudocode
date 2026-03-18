/*
 * XREFs of ??0CHolographicDisplay@@IEAA@PEAVCComposition@@@Z @ 0x1802D10D4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CHolographicDisplay *__fastcall CHolographicDisplay::CHolographicDisplay(
        CHolographicDisplay *this,
        struct CComposition *a2)
{
  CHolographicDisplay *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CHolographicDisplay::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CHolographicDisplay::`vftable'{for `IHolographicDisplayInfo'};
  *((_DWORD *)this + 24) = 0;
  *(_OWORD *)((char *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *((_BYTE *)this + 132) = 0;
  InitializeSRWLock((PSRWLOCK)this + 17);
  *((_DWORD *)this + 24) = _InterlockedIncrement(&CHolographicDisplay::s_displayIdCounter);
  result = this;
  *((_QWORD *)this + 11) = *(_QWORD *)(*((_QWORD *)this + 3) + 664LL);
  return result;
}
