/*
 * XREFs of ??0CComposition@@IEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1801F4850
 * Callers:
 *     ??0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1802633E4 (--0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800DE74C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800EE954 (--0CMmcssTask@@QEAA@XZ.c)
 *     ??0?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x18019D290 (--0-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUni.c)
 *     ??0CRenderPerf@@QEAA@XZ @ 0x1801F4D54 (--0CRenderPerf@@QEAA@XZ.c)
 */

CComposition *__fastcall CComposition::CComposition(CComposition *this, struct CTransport *a2, struct CConnection *a3)
{
  LARGE_INTEGER v6; // rax
  _QWORD *v7; // rax
  CComposition *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CComposition::`vftable';
  CRenderPerf::CRenderPerf((CComposition *)((char *)this + 16));
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = -1;
  *((_DWORD *)this + 63) = 0;
  *((_OWORD *)this + 16) = 0LL;
  *((_OWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  CScheduler::s_vBlankWaitTimeoutMonitorOffMs = CCommonRegistryData::vBlankWaitTimeoutMonitorOffMs;
  v6 = g_qpcFrequency;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = (char *)this + 344;
  *((_QWORD *)this + 41) = (char *)this + 344;
  *((_QWORD *)this + 42) = (char *)this + 360;
  CScheduler::s_maxVBlankTimeQPC.QuadPart = 80 * v6.QuadPart / 1000;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 9);
  *((_QWORD *)this + 50) = (char *)this + 424;
  *((_QWORD *)this + 51) = (char *)this + 424;
  *((_QWORD *)this + 52) = (char *)this + 552;
  *((_QWORD *)this + 69) = (char *)this + 576;
  *((_QWORD *)this + 70) = (char *)this + 576;
  *((_QWORD *)this + 71) = (char *)this + 608;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  CMmcssTask::CMmcssTask((CComposition *)((char *)this + 736));
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_DWORD *)this + 216) = 0;
  *((_DWORD *)this + 218) = 1;
  *((_QWORD *)this + 111) = 1LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_DWORD *)this + 232) = 0;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_DWORD *)this + 240) = 0;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_DWORD *)this + 248) = 0;
  *((_DWORD *)this + 1289) = -1;
  *((_DWORD *)this + 1288) = -1;
  *((_DWORD *)this + 253) = -1;
  *((_DWORD *)this + 252) = -1;
  *((_QWORD *)this + 643) = g_qpcFrequency.QuadPart / 60;
  *((_BYTE *)this + 5664) = 0;
  *((_QWORD *)this + 709) = a2;
  *((_QWORD *)this + 710) = a3;
  *((_QWORD *)this + 711) = 0LL;
  *((_QWORD *)this + 712) = 0LL;
  *((_QWORD *)this + 713) = 0LL;
  *((_DWORD *)this + 1428) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 143);
  *((_QWORD *)this + 720) = 0LL;
  *((_QWORD *)this + 721) = 0LL;
  *((_QWORD *)this + 722) = 0LL;
  *((_QWORD *)this + 723) = 0LL;
  *((_QWORD *)this + 724) = (char *)this + 5816;
  *((_QWORD *)this + 725) = (char *)this + 5816;
  *((_QWORD *)this + 726) = (char *)this + 5880;
  *((_QWORD *)this + 735) = 0LL;
  *((_QWORD *)this + 736) = 0LL;
  *((_QWORD *)this + 737) = 0LL;
  *((_DWORD *)this + 1476) = 0;
  *((_QWORD *)this + 739) = (char *)this + 5944;
  *((_QWORD *)this + 740) = (char *)this + 5944;
  *((_DWORD *)this + 1482) = 1;
  *(_QWORD *)((char *)this + 5932) = 1LL;
  *((_QWORD *)this + 744) = 0LL;
  *((_QWORD *)this + 745) = 0LL;
  *((_QWORD *)this + 746) = 0LL;
  *((_QWORD *)this + 747) = (char *)this + 6008;
  *((_QWORD *)this + 748) = (char *)this + 6008;
  *((_DWORD *)this + 1498) = 16;
  *(_QWORD *)((char *)this + 5996) = 16LL;
  TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>((_QWORD *)this + 767);
  *((_QWORD *)this + 770) = 0LL;
  *((_QWORD *)this + 771) = 0LL;
  *((_QWORD *)this + 772) = 0LL;
  *((_QWORD *)this + 773) = 0LL;
  *((_QWORD *)this + 774) = 0LL;
  *((_DWORD *)this + 1550) = 0;
  *((_QWORD *)this + 776) = 0LL;
  *((_QWORD *)this + 777) = 0LL;
  v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v7 = v7;
  v7[1] = v7;
  *((_QWORD *)this + 776) = v7;
  *((_QWORD *)this + 778) = 0LL;
  *((_QWORD *)this + 779) = 0LL;
  *((_QWORD *)this + 780) = 0LL;
  *((_QWORD *)this + 781) = 7LL;
  *((_QWORD *)this + 782) = 8LL;
  *((_DWORD *)this + 1550) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    (_QWORD *)this + 778,
    0x10uLL,
    *((_QWORD *)this + 776));
  *((_QWORD *)this + 785) = 0LL;
  *((_QWORD *)this + 784) = 0LL;
  *((_QWORD *)this + 786) = 0LL;
  *((_DWORD *)this + 1595) = 0;
  *((_QWORD *)this + 800) = 0LL;
  *((_QWORD *)this + 801) = 0LL;
  *((_BYTE *)this + 6416) = 0;
  *((_QWORD *)this + 803) = 0LL;
  *((_QWORD *)this + 804) = 0LL;
  *((_QWORD *)this + 805) = 0LL;
  *((_QWORD *)this + 806) = 0LL;
  *((_DWORD *)this + 1614) = 0;
  *(_QWORD *)((char *)this + 6460) = 1LL;
  *((_DWORD *)this + 1617) = 0;
  *((_WORD *)this + 3236) = 0;
  *((_BYTE *)this + 6474) = 0;
  *((_DWORD *)this + 1619) = 37120;
  *((_QWORD *)this + 810) = 37120LL;
  *((_QWORD *)this + 811) = 0LL;
  *((_QWORD *)this + 812) = 0LL;
  *((_QWORD *)this + 813) = 0LL;
  *((_QWORD *)this + 814) = 0LL;
  *((_QWORD *)this + 815) = 0LL;
  CComposition::s_compositionThreadId = GetCurrentThreadId();
  CMILRefCountImpl::AddReference((CComposition *)((char *)this + 8));
  result = this;
  g_pFrameId = (unsigned __int64 *)((char *)this + 888);
  return result;
}
