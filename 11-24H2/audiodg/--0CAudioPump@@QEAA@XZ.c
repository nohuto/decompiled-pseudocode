/*
 * XREFs of ??0CAudioPump@@QEAA@XZ @ 0x1400576D4
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004194C (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x140021144 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=17
CAudioPump *__fastcall CAudioPump::CAudioPump(CAudioPump *this)
{
  *((_DWORD *)this + 4) = 0;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 64) = 0;
  *(_QWORD *)this = &CAudioPump::`vftable'{for `IAudioPump'};
  *((_QWORD *)this + 1) = &CAudioPump::`vftable'{for `IAudioPumpLogging'};
  *((_DWORD *)this + 18) = 0;
  *((_BYTE *)this + 76) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 128), 0, 0);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 168), 0, 0);
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_BYTE *)this + 272) = 0;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_WORD *)this + 162) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 2;
  *(_QWORD *)((char *)this + 340) = 40LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_DWORD *)this + 100) = 0;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 10000000LL;
  *((_QWORD *)this + 56) = &LinearFitT<256>::`vftable';
  *((_QWORD *)this + 60) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  LinearFitT<256>::Reset((__int64)this + 448);
  *((_QWORD *)this + 581) = 0LL;
  *((_QWORD *)this + 582) = 0LL;
  *((_QWORD *)this + 583) = 0LL;
  *((_QWORD *)this + 584) = 0LL;
  *((_WORD *)this + 2340) = 0;
  *((_BYTE *)this + 4682) = 0;
  *((_QWORD *)this + 586) = 0LL;
  *((_QWORD *)this + 587) = 0LL;
  *((GUID *)this + 294) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 590) = 0LL;
  *((_QWORD *)this + 591) = 0LL;
  *((_QWORD *)this + 592) = 0LL;
  *((_QWORD *)this + 593) = 0LL;
  *((_BYTE *)this + 4752) = 0;
  *((_DWORD *)this + 1189) = 0;
  *((_BYTE *)this + 4760) = 0;
  *((_QWORD *)this + 596) = 0LL;
  return this;
}
