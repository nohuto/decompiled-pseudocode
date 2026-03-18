/*
 * XREFs of ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z @ 0x1801F6030
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180002EC4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x18005CAE0 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1801F6238 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?PopAll@CSharedCircularQueue@@QEBAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x1802A38A0 (-PopAll@CSharedCircularQueue@@QEBAXV-$span@E$0-0@gsl@@IPEAI1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkScribble::ConsumeTipPoints(
        CSuperWetInkScribble *this,
        unsigned int *a2,
        unsigned __int64 *a3,
        LARGE_INTEGER *a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rax
  __int64 v8; // rsi
  unsigned int v9; // r13d
  unsigned int v10; // eax
  unsigned int v11; // edi
  void *v12; // rbx
  __int64 v13; // rdi
  int v14; // ebx
  unsigned int v15; // ebx
  unsigned __int64 *v16; // r15
  int v17; // eax
  unsigned int v18; // esi
  LARGE_INTEGER v19; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 *v22; // [rsp+28h] [rbp-58h]
  unsigned int v23; // [rsp+30h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v27; // [rsp+60h] [rbp-20h] BYREF
  __int64 v28; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v30; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 *v31; // [rsp+D0h] [rbp+50h]
  LARGE_INTEGER *v32; // [rsp+D8h] [rbp+58h]

  v32 = a4;
  v31 = a3;
  v5 = *((_QWORD *)this + 7);
  v28 = 0LL;
  v27 = 0LL;
  v8 = *(_QWORD *)(v5 + 24);
  v9 = *(_DWORD *)(v8 + 8);
  v10 = *(_DWORD *)(v8 + 12) * v9;
  v11 = v10;
  if ( v10 )
  {
    v12 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
    memset_0(v12, 0, v11);
    std::vector<unsigned char>::_Change_array(&v27, v12, v11, v11);
  }
  v13 = v27;
  v14 = *((_DWORD *)this + 6);
  v30 = 0;
  v23 = 0;
  gsl::details::extent_type<-1>::extent_type<-1>(v26, DWORD2(v27) - (int)v27);
  if ( v26[0] == -1LL || !v13 && v26[0] )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v26[1] = v13;
  CSharedCircularQueue::PopAll(v8, (unsigned int)v26, v14, (unsigned int)&v30, (__int64)&v23);
  v15 = 0;
  v16 = a5;
  while ( 1 )
  {
    if ( v15 >= v30 )
    {
      *a2 = v23;
      std::vector<unsigned char>::_Tidy((__int64)&v27);
      return 0LL;
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 2) + 32LL))(
            *((_QWORD *)this + 2),
            v13 + v9 * (v30 - v15 - 1),
            v9,
            v16,
            v31,
            v22);
    v18 = v17;
    if ( v17 < 0 )
      break;
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v19 = PerformanceCount;
    *v32 = PerformanceCount;
    if ( (unsigned int)dword_180404CE0 > 4 && (qword_180404CF0 & 2) != 0 && (qword_180404CF8 & 2) == qword_180404CF8 )
    {
      v21 = *v16;
      v26[0] = v19.QuadPart;
      v22 = &v25;
      v25 = v21;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)&dword_180404CE0,
        (__int64)&unk_1803DB1E3);
    }
    ++v15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7C,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
    (const char *)(unsigned int)v17);
  std::vector<unsigned char>::_Tidy((__int64)&v27);
  return v18;
}
