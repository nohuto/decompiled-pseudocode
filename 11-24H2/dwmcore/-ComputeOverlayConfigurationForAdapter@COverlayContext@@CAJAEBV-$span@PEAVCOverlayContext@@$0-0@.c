/*
 * XREFs of ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18005F0C0
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180102130 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009304 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18005F2E0 (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18005F5C0 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18005FD04 (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ @ 0x18005FF10 (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x180060060 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18006080C (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180232AB8 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfigurationForAdapter(_QWORD *a1)
{
  COverlayContext **v1; // rbx
  unsigned int v3; // esi
  COverlayContext **v4; // rdi
  __int64 v5; // rax
  __int64 v7; // rax
  char v8; // bp
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  COverlayContext **v11; // rbx
  COverlayContext **j; // rdi
  COverlayContext **v13; // rbx
  COverlayContext **v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx
  char i; // al
  _QWORD v18[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE *v19; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE *v20; // [rsp+48h] [rbp-B0h]
  __int64 *v21; // [rsp+50h] [rbp-A8h]
  _BYTE v22[128]; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-20h] BYREF

  v1 = (COverlayContext **)a1[1];
  v3 = 0;
  v4 = &v1[*a1];
  while ( v1 != v4 )
  {
    if ( COverlayContext::HaveOverlayCandidatesChanged(*v1) )
    {
      v8 = 0;
      v19 = v22;
      v16 = 0;
      v20 = v22;
      v21 = &v23;
      for ( i = COverlayContext::InitCheckCandidatesList(a1, &v19);
            i && v16 <= 8;
            i = COverlayContext::TrimCheckCandidatesList(a1, &v19) )
      {
        v7 = (v20 - v19) >> 3;
        v18[0] = v7;
        if ( v7 == -1 || (v18[1] = v19) == 0LL && v7 )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        if ( (unsigned __int8)COverlayContext::CheckMultiPlaneOverlaySupport(a1, v18) )
        {
          v8 = 1;
          break;
        }
        ++v16;
      }
      v9 = (_QWORD *)a1[1];
      v10 = &v9[*a1];
      if ( v9 != v10 )
      {
        if ( v8 )
        {
          do
            COverlayContext::PushCandidates(*v9++, &v19);
          while ( v9 != v10 );
        }
        else
        {
          do
            COverlayContext::PushCandidates(*v9++, 0LL);
          while ( v9 != v10 );
        }
      }
      v11 = (COverlayContext **)a1[1];
      for ( j = &v11[*a1]; v11 != j; ++v11 )
        COverlayContext::ReleaseObsoletePlaneAssignments(*v11);
      v13 = (COverlayContext **)a1[1];
      v14 = &v13[*a1];
      while ( v13 != v14 )
      {
        v15 = COverlayContext::TransferCandidatesToPlaneAssignments(*v13);
        v3 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xA6Bu, 0LL);
          break;
        }
        ++v13;
      }
      v5 = (v20 - v19) >> 3;
      if ( v5 )
        v20 -= 8 * v5;
      detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v19);
      return v3;
    }
    ++v1;
  }
  return v3;
}
