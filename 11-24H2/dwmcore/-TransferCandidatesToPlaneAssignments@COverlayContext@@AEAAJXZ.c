/*
 * XREFs of ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x180060060
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18005F0C0 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x180060010 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180060A84 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x1800F101C (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x1800F1194 (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800F1DD0 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801C6A8C (McTemplateU0xq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::TransferCandidatesToPlaneAssignments(COverlayContext *this)
{
  char *v1; // r15
  __int64 *v3; // rdi
  __int64 v4; // r13
  const struct CMonitorTransform *MonitorTransform; // rax
  __int64 v6; // r8
  const struct CMonitorTransform *v7; // r12
  __int64 v8; // rdx
  unsigned int v9; // ebp
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r8
  _BYTE *v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v17[8]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v18[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-48h] BYREF

  v1 = (char *)this + 12680;
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 12680);
  v3 = (__int64 *)((char *)this + 88);
  if ( *((_QWORD *)this + 12) != *((_QWORD *)this + 11) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 280LL))(*(_QWORD *)this);
    MonitorTransform = COverlayContext::GetMonitorTransform(this);
    v6 = *((_QWORD *)this + 12);
    v7 = MonitorTransform;
    v8 = *v3;
    v9 = 0;
    if ( 438261969 * (unsigned int)((v6 - *((_QWORD *)this + 11)) >> 3) )
    {
      while ( 1 )
      {
        v10 = 392LL * v9;
        v11 = v10 + v8;
        if ( !*(_BYTE *)(v10 + v8 + 367) )
          break;
LABEL_11:
        ++v9;
LABEL_12:
        v6 = *((_QWORD *)this + 12);
        v8 = *v3;
        if ( v9 >= 438261969 * (unsigned int)((v6 - *((_QWORD *)this + 11)) >> 3) )
          goto LABEL_13;
      }
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v11 + 16) + 264LL))(
             *(_QWORD *)(v11 + 16),
             *(_QWORD *)(v11 + 24),
             v4) < 0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
          McTemplateU0xq_EventWriteTransfer(
            *(unsigned int *)(*(_QWORD *)(v11 + 16) + 40LL),
            &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
            *(unsigned int *)(*(_QWORD *)(v11 + 16) + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 40LL)) << 32),
            10LL);
        v16 = v10 + *v3;
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
          (char *)this + 88,
          v17,
          &v16);
        goto LABEL_12;
      }
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
      {
        COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v11, v18, (char *)v7 + 120);
        v13 = v18;
      }
      else
      {
        if ( *(_BYTE *)(v11 + 366) )
        {
LABEL_10:
          v14 = *(_QWORD *)(v11 + 16);
          LOBYTE(v12) = 1;
          *(_WORD *)(v11 + 367) = 257;
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 488LL))(v14, 2LL, v12);
          goto LABEL_11;
        }
        COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v11, v19, (char *)v7 + 120);
        v13 = v19;
      }
      (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)this + 296LL))(*(_QWORD *)this, v13);
      goto LABEL_10;
    }
LABEL_13:
    if ( v6 != v8 )
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
        v1,
        (char *)this + 88);
    if ( *((_BYTE *)this + 19088) && !*((_BYTE *)this + 19208) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
  }
  return 0LL;
}
