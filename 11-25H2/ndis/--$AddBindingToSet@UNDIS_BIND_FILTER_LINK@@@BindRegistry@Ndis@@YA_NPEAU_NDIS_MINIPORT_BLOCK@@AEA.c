/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x14016ACD0
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x14016A5C0 (Ndis--BindRegistry--UpdateFiltersInner.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     ??0?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAA@$$QEAV01@@Z @ 0x14007C700 (--0-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@w.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014E9CC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x14016AE00 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x14016AEA0 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x14016B210 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x14016B2C0 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x14016B4F0 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@.c)
 *     ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x140173BE0 (-moveElements@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned __int64 a3,
        struct NDIS_BIND_FILTER_LINK **a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  NDIS_BIND_LINK_BASE *v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  char v13; // di
  int v15; // edx
  PVOID P[2]; // [rsp+40h] [rbp-E8h] BYREF
  struct _UNICODE_STRING v17[10]; // [rsp+50h] [rbp-D8h] BYREF

  (*a4)->BindState.Miniport = a1;
  if ( Ndis::BindState::SetSource(&(*a4)->BindState, AddBindSource, Registry) )
  {
    memset(v17, 0, sizeof(v17));
    if ( (unsigned __int8)byte_140126C63 >= 4u )
    {
      ndisGetBindLinkNameForTracing(*a4, v17);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          0x1Cu,
          0xAu,
          (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
          v17[0].Buffer,
          *(_QWORD *)&v17[0].Length);
    }
  }
  NDIS_BIND_LINK_BASE::LinkToDriver(&(*a4)->NDIS_BIND_LINK_BASE, &(*a4)->BindDriver._p->_t.NDIS_BIND_DRIVER_BASE);
  v10 = (NDIS_BIND_LINK_BASE *)*a4;
  *a4 = 0LL;
  v11 = *(unsigned int *)(a2 + 4);
  P[0] = v10;
  if ( a3 > v11 )
  {
    v13 = 0;
  }
  else if ( (unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::grow(
                               a2,
                               (unsigned int)(v11 + 1)) )
  {
    v12 = *(unsigned int *)(a2 + 4);
    if ( a3 < v12 )
      Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::moveElements(
        a2,
        (unsigned int)a3,
        (unsigned int)(a3 + 1),
        (unsigned int)(v12 - a3));
    wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>(
      (_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * a3),
      (__int64 *)P);
    ++*(_DWORD *)(a2 + 4);
    v13 = 1;
    v10 = (NDIS_BIND_LINK_BASE *)P[0];
  }
  else
  {
    v13 = 0;
  }
  if ( v10 )
  {
    KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v10[1], v8, v9);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v10);
    ExFreePoolWithTag(v10, 0x4C6C4642u);
  }
  if ( !v13 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}
