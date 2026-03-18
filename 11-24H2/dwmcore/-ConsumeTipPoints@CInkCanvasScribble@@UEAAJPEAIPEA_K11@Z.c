/*
 * XREFs of ?ConsumeTipPoints@CInkCanvasScribble@@UEAAJPEAIPEA_K11@Z @ 0x180299170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x18005CC10 (McTemplateU0x_EventWriteTransfer.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x18017E4B0 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801A6D58 (McTemplateU0xx_EventWriteTransfer.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18021509C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?PopAll@CSharedCircularQueue@@QEBAXV?$span@E$0?0@gsl@@IPEAI1@Z @ 0x180299A10 (-PopAll@CSharedCircularQueue@@QEBAXV-$span@E$0-0@gsl@@IPEAI1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInkCanvasScribble::ConsumeTipPoints(
        CInkCanvasScribble *this,
        unsigned int *a2,
        unsigned __int64 *a3,
        LARGE_INTEGER *a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r10
  unsigned int v7; // r12d
  unsigned int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rdi
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // r15
  unsigned int i; // esi
  __int64 v15; // r13
  int v16; // eax
  unsigned int v17; // edi
  unsigned int v19; // [rsp+30h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v22; // [rsp+50h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]
  unsigned int v25; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int *v26; // [rsp+C8h] [rbp+50h]
  unsigned __int64 *v27; // [rsp+D0h] [rbp+58h]
  LARGE_INTEGER *v28; // [rsp+D8h] [rbp+60h]

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v5 = *((_QWORD *)this + 7);
  v23 = 0LL;
  v22 = 0LL;
  v7 = *(_DWORD *)(v5 + 8);
  v8 = *(_DWORD *)(v5 + 12) * v7;
  if ( v8 )
    std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((__int64)&v22, v8);
  v9 = v22;
  v25 = 0;
  v19 = 0;
  v10 = *((_QWORD *)this + 7);
  v11 = *((_DWORD *)this + 6);
  gsl::details::extent_type<-1>::extent_type<-1>(v21, DWORD2(v22) - (int)v22);
  if ( v21[0] == -1LL || !v9 && v21[0] )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  v21[1] = v9;
  CSharedCircularQueue::PopAll(v10, (unsigned int)v21, v11, (unsigned int)&v25, (__int64)&v19);
  v13 = 0LL;
  for ( i = 0; i < v25; ++i )
  {
    v15 = v9 + v7 * (v25 - i - 1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0x_EventWriteTransfer(v12, &EVTDESC_DELEGATEDINKCANVAS_CORRELATIONID, *(_QWORD *)(v15 + 24));
    if ( *(_QWORD *)(v15 + 24) > *((_QWORD *)this + 8) )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 2) + 32LL))(
              *((_QWORD *)this + 2),
              v15,
              v7,
              a5,
              v27);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x113,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
          (const char *)(unsigned int)v16);
        std::vector<unsigned char>::_Tidy((__int64)&v22);
        return v17;
      }
      ++v13;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xx_EventWriteTransfer(v12, &EVTDESC_DELEGATEDINKCANVAS_CONSUMETIPPOINTS, *((_QWORD *)this + 8), v13);
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  *v28 = PerformanceCount;
  *v26 = v19;
  std::vector<unsigned char>::_Tidy((__int64)&v22);
  return 0LL;
}
