/*
 * XREFs of ??0CSynchronousSuperWetInk@@QEAA@PEAVCComposition@@@Z @ 0x1802B08F4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     ??0CSuperWetSource@@IEAA@PEAVCComposition@@@Z @ 0x180253C6C (--0CSuperWetSource@@IEAA@PEAVCComposition@@@Z.c)
 */

CSynchronousSuperWetInk *__fastcall CSynchronousSuperWetInk::CSynchronousSuperWetInk(
        CSynchronousSuperWetInk *this,
        struct CComposition *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  CSuperWetSource::CSuperWetSource(this, a2);
  *((_BYTE *)this + 168) = 0;
  *(_QWORD *)this = &CSynchronousSuperWetInk::`vftable';
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *((_QWORD *)this + 28) = v3;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0x_EventWriteTransfer(v4, &EVTDESC_SYNCHRONOUSSUPERWETINK_CREATED, (__int64)this);
  return this;
}
