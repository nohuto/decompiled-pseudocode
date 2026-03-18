/*
 * XREFs of ??0CComposition@@IEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x18023C03C
 * Callers:
 *     ??0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x18026F434 (--0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIUnknown@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800F6FB8 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x18022F980 (--0CMmcssTask@@QEAA@XZ.c)
 */

CComposition *__fastcall CComposition::CComposition(CComposition *this, struct CTransport *a2, struct CConnection *a3)
{
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // kr20_8
  _QWORD *v8; // rax
  CComposition *result; // rax

  *(_QWORD *)this = &CComposition::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = (char *)this + 48;
  *((_QWORD *)this + 4) = (char *)this + 48;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 5) = (char *)this + 64;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
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
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 50) = (char *)this + 424;
  *((_QWORD *)this + 51) = (char *)this + 424;
  *((_QWORD *)this + 52) = (char *)this + 552;
  *((_QWORD *)this + 69) = (char *)this + 576;
  *((_QWORD *)this + 70) = (char *)this + 576;
  *((_QWORD *)this + 71) = (char *)this + 608;
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
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_DWORD *)this + 232) = 0;
  *((_DWORD *)this + 218) = 1;
  *((_QWORD *)this + 111) = 1LL;
  *((_QWORD *)this + 112) = 0LL;
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
  v7 = g_qpcFrequency;
  *((_BYTE *)this + 5664) = 0;
  *((_QWORD *)this + 709) = a2;
  *((_QWORD *)this + 710) = a3;
  *((_QWORD *)this + 711) = 0LL;
  *((_QWORD *)this + 712) = 0LL;
  *((_QWORD *)this + 643) = v7.QuadPart / 60;
  *((_QWORD *)this + 713) = 0LL;
  *((_DWORD *)this + 1428) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 143);
  *((_QWORD *)this + 720) = 0LL;
  *((_QWORD *)this + 724) = (char *)this + 5816;
  *((_QWORD *)this + 725) = (char *)this + 5816;
  *((_QWORD *)this + 726) = (char *)this + 5880;
  *((_QWORD *)this + 739) = (char *)this + 5944;
  *((_QWORD *)this + 740) = (char *)this + 5944;
  *((_QWORD *)this + 747) = (char *)this + 6008;
  *((_QWORD *)this + 748) = (char *)this + 6008;
  *((_QWORD *)this + 721) = 0LL;
  *((_QWORD *)this + 722) = 0LL;
  *((_QWORD *)this + 723) = 0LL;
  *((_QWORD *)this + 735) = 0LL;
  *((_QWORD *)this + 736) = 0LL;
  *((_QWORD *)this + 737) = 0LL;
  *((_DWORD *)this + 1476) = 0;
  *((_DWORD *)this + 1482) = 1;
  *(_QWORD *)((char *)this + 5932) = 1LL;
  *((_QWORD *)this + 744) = 0LL;
  *((_QWORD *)this + 745) = 0LL;
  *((_QWORD *)this + 746) = 0LL;
  *((_DWORD *)this + 1498) = 16;
  *(_QWORD *)((char *)this + 5996) = 16LL;
  *((_QWORD *)this + 767) = 0LL;
  *((_QWORD *)this + 768) = 0LL;
  *((_QWORD *)this + 769) = 0LL;
  *((_QWORD *)this + 770) = 0LL;
  *((_QWORD *)this + 771) = 0LL;
  *((_QWORD *)this + 772) = 0LL;
  *((_QWORD *)this + 773) = 0LL;
  *((_QWORD *)this + 774) = 0LL;
  *((_QWORD *)this + 775) = 0LL;
  *((_QWORD *)this + 776) = 0LL;
  *((_QWORD *)this + 777) = 0LL;
  *((_DWORD *)this + 1556) = 0;
  *((_QWORD *)this + 779) = 0LL;
  *((_QWORD *)this + 780) = 0LL;
  v8 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v8 = v8;
  v8[1] = v8;
  *((_QWORD *)this + 779) = v8;
  *((_QWORD *)this + 781) = 0LL;
  *((_QWORD *)this + 782) = 0LL;
  *((_QWORD *)this + 783) = 0LL;
  *((_QWORD *)this + 784) = 7LL;
  *((_QWORD *)this + 785) = 8LL;
  *((_DWORD *)this + 1556) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<IUnknown *>>,std::_Iterator_base0>>>::_Assign_grow(
    (_QWORD *)this + 781,
    0x10uLL,
    *((_QWORD *)this + 779));
  *((_QWORD *)this + 788) = 0LL;
  *((_QWORD *)this + 787) = 0LL;
  *((_QWORD *)this + 789) = 0LL;
  *((_DWORD *)this + 1601) = 0;
  *((_QWORD *)this + 803) = 0LL;
  *((_QWORD *)this + 804) = 0LL;
  *((_DWORD *)this + 1625) = 37120;
  *((_QWORD *)this + 813) = 37120LL;
  *((_BYTE *)this + 6440) = 0;
  *((_QWORD *)this + 806) = 0LL;
  *((_QWORD *)this + 807) = 0LL;
  *((_QWORD *)this + 808) = 0LL;
  *((_QWORD *)this + 809) = 0LL;
  *((_DWORD *)this + 1620) = 0;
  *(_QWORD *)((char *)this + 6484) = 1LL;
  *((_DWORD *)this + 1623) = 0;
  *((_WORD *)this + 3248) = 0;
  *((_QWORD *)this + 814) = 0LL;
  *((_QWORD *)this + 815) = 0LL;
  *((_QWORD *)this + 816) = 0LL;
  *((_QWORD *)this + 817) = 0LL;
  *((_QWORD *)this + 818) = 0LL;
  CComposition::s_compositionThreadId = GetCurrentThreadId();
  CMILRefCountImpl::AddReference((CComposition *)((char *)this + 8));
  result = this;
  g_pFrameId = (unsigned __int64 *)((char *)this + 888);
  return result;
}
