/*
 * XREFs of Ndis::BindRegistry::UpdateFiltersInner @ 0x14015D670
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x14015D670 (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x14015E690 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143D04 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x14015D670 (Ndis--BindRegistry--UpdateFiltersInner.c)
 *     Ndis::BindRegistry::RemoveBindingsInSpan @ 0x14015D870 (Ndis--BindRegistry--RemoveBindingsInSpan.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x14015DD80 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x14015E370 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 */

bool __fastcall Ndis::BindRegistry::UpdateFiltersInner(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r13
  __int64 v11; // r10
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  unsigned __int64 i; // rcx
  __int64 v20; // r11
  __int64 v21; // rax
  Ndis::BindState *v22; // r11
  int v23; // edx
  __int64 v24; // rax
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+50h] [rbp-B0h]
  struct NDIS_BIND_FILTER_LINK **v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-98h]
  unsigned __int64 v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35; // [rsp+88h] [rbp-78h]
  unsigned __int64 v36; // [rsp+90h] [rbp-70h]
  unsigned __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  _QWORD *v39; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+B8h] [rbp-48h]
  __int64 v41; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD *m_AdditionalContext; // [rsp+D0h] [rbp-30h]
  struct _UNICODE_STRING v44[10]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = a2[1];
  v8 = a3[1];
  v9 = a3[2];
  v11 = a1;
  v37 = v7;
  v26 = v8;
  v39 = a4;
  *a4 = 0LL;
  while ( 1 )
  {
    v38 = v7;
    if ( v8 >= v9 )
    {
      v12 = *a2;
      v13 = a2[2];
      v36 = v13;
      v34 = v12;
      v35 = v7;
      Ndis::BindRegistry::RemoveBindingsInSpan(&v34, a5, a6);
      if ( !a5 )
        return 1;
      v34 = *a3;
      v35 = v26;
      v39 = 0LL;
      v36 = v9;
      v31 = v12;
      v32 = v7;
      v33 = v13;
      return (unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                                a1,
                                (unsigned int)&v31,
                                (unsigned int)&v34,
                                (unsigned int)&v39,
                                0,
                                a6) != 0;
    }
    if ( v8 >= *(unsigned int *)(*a3 + 4LL) )
LABEL_19:
      __fastfail(5u);
    v15 = *(_QWORD *)(*a3 + 8LL);
    v16 = *(_QWORD *)(v15 + 8 * v8);
    v17 = v15 + 8 * v8;
    if ( v16 )
    {
      if ( ((*(_DWORD *)(*(_QWORD *)(v16 + 80) + 40LL) & 0xC) != 0) == a5 )
        break;
    }
LABEL_14:
    ++v8;
  }
  v18 = a2[2];
  for ( i = v7; ; ++i )
  {
    v20 = *a2;
    v28 = *a2;
    v40 = i;
    if ( i >= v18 )
    {
      if ( (unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_FILTER_LINK>(v11, v20, v7, v17) )
      {
        ++v7;
        v38 = a2[2] + 1;
        a2[2] = v38;
        ++*v39;
        if ( !a5 )
        {
LABEL_13:
          v11 = a1;
          v26 = v8;
          v37 = v7;
          goto LABEL_14;
        }
        v34 = *a3;
        v35 = v26;
        v31 = v28;
        v32 = v37;
        v42 = 0LL;
        v36 = v8;
        v33 = v7;
        if ( (unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                                a1,
                                (unsigned int)&v31,
                                (unsigned int)&v34,
                                (unsigned int)&v42,
                                0,
                                a6) )
        {
          v7 += v42;
          a2[2] = v38 + v42;
          goto LABEL_13;
        }
      }
      return 0;
    }
    if ( i >= *(unsigned int *)(v20 + 4) )
      goto LABEL_19;
    v21 = *(_QWORD *)(v20 + 8);
    v22 = *(Ndis::BindState **)(v21 + 8 * i);
    v29 = (struct NDIS_BIND_FILTER_LINK **)(v21 + 8 * i);
    m_AdditionalContext = v22[1].m_AdditionalContext;
    if ( ((m_AdditionalContext[10] & 0xC) != 0) == a5
      && *(_DWORD **)(v16 + 80) == m_AdditionalContext
      && *(_DWORD *)(v16 + 88) == v22[1].m_LastErrorCode )
    {
      break;
    }
  }
  if ( Ndis::BindState::SetSource(v22, AddBindSource, Registry) )
  {
    memset(v44, 0, sizeof(v44));
    if ( (unsigned __int8)byte_14011CBA3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(*v29, v44);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v23,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
          v44[0].Buffer,
          *(_QWORD *)&v44[0].Length);
    }
  }
  v24 = *a2;
  v32 = v7;
  v25 = v40;
  v33 = v40;
  v30 = v24;
  v31 = v24;
  Ndis::BindRegistry::RemoveBindingsInSpan(&v31, a5, a6);
  v7 = v25 + 1;
  if ( !a5 )
    goto LABEL_13;
  v31 = *a3;
  v32 = v26;
  v34 = v30;
  v35 = v38;
  v41 = 0LL;
  v33 = v8;
  v36 = v7;
  if ( (unsigned __int8)Ndis::BindRegistry::UpdateFiltersInner(
                          a1,
                          (unsigned int)&v34,
                          (unsigned int)&v31,
                          (unsigned int)&v41,
                          0,
                          a6) )
  {
    v7 += v41;
    a2[2] += v41;
    goto LABEL_13;
  }
  return 0;
}
