/*
 * XREFs of ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x18002DA20
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18002CA40 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18002C578 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002DC40 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x18002E84C (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x18002EBA0 (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801EEEDC (McTemplateU0xq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::TransferCandidatesToPlaneAssignments(COverlayContext *this)
{
  char *v1; // r15
  __int64 *v3; // rdi
  __int64 v5; // r13
  const struct CMonitorTransform *MonitorTransform; // rax
  __int64 v7; // r8
  const struct CMonitorTransform *v8; // r12
  __int64 v9; // rdx
  unsigned int i; // ebp
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v16[8]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v17[16]; // [rsp+30h] [rbp-48h] BYREF

  v1 = (char *)this + 12936;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 12936);
  v3 = (__int64 *)((char *)this + 88);
  if ( *((_QWORD *)this + 12) == *((_QWORD *)this + 11) )
    return 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 280LL))(*(_QWORD *)this);
  MonitorTransform = COverlayContext::GetMonitorTransform(this);
  v7 = *((_QWORD *)this + 12);
  v8 = MonitorTransform;
  v9 = *v3;
  for ( i = 0; i < -1030792151 * (unsigned int)((v7 - *((_QWORD *)this + 11)) >> 4); v9 = *v3 )
  {
    v11 = 400LL * i;
    v12 = v11 + v9;
    if ( !*(_BYTE *)(v11 + v9 + 368) )
    {
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v12 + 16) + 264LL))(
             *(_QWORD *)(v12 + 16),
             *(_QWORD *)(v12 + 24),
             v5) < 0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
          McTemplateU0xq_EventWriteTransfer(
            *(unsigned int *)(*(_QWORD *)(v12 + 16) + 40LL),
            &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
            *(unsigned int *)(*(_QWORD *)(v12 + 16) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 40LL)) << 32),
            10LL);
        v15 = v11 + *v3;
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
          (char *)this + 88,
          v16,
          &v15);
        goto LABEL_6;
      }
      if ( !*(_BYTE *)(v12 + 366) )
      {
        COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v12, (__int64)v17, (__int64)v8 + 120);
        (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)this + 296LL))(*(_QWORD *)this, v17);
      }
      v14 = *(_QWORD *)(v12 + 16);
      LOBYTE(v13) = 1;
      *(_WORD *)(v12 + 368) = 257;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 488LL))(v14, 2LL, v13);
    }
    ++i;
LABEL_6:
    v7 = *((_QWORD *)this + 12);
  }
  if ( v7 != v9 )
    detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
      v1,
      (char *)this + 88);
  if ( *((_BYTE *)this + 19472) && !*((_BYTE *)this + 19592) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
  return 0LL;
}
