/*
 * XREFs of ??0CAudioProcessor@@QEAA@XZ @ 0x14003D26C
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003D13C (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x14003D380 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x14003D3B4 (--0-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits.c)
 *     ??0?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ @ 0x14003D40C (--0-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
CAudioProcessor *__fastcall CAudioProcessor::CAudioProcessor(CAudioProcessor *this)
{
  *((_DWORD *)this + 6) = 0;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *(_QWORD *)this = &CAudioProcessor::`vftable'{for `IAudioProcessor'};
  *((_QWORD *)this + 1) = &CAudioProcessor::`vftable'{for `IAudioProcessRT'};
  *((_QWORD *)this + 2) = &CAudioProcessor::`vftable'{for `IAudioLogging'};
  *((_DWORD *)this + 20) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioProcessor *)((char *)this + 88));
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 10;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 10;
  CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>((char *)this + 224);
  CRealTimeSafeStruct<CProcessingData,1>::CRealTimeSafeStruct<CProcessingData,1>((char *)this + 384);
  *((_QWORD *)this + 96) = 0LL;
  *((_DWORD *)this + 194) = 0;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_BYTE *)this + 800) = 0;
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  return this;
}
