/*
 * XREFs of ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x14015E730
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x140160850 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140074B10 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x14015E370 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x14015E9A0 (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 */

char __fastcall Ndis::BindRegistry::UpdateProtocols(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rax
  Ndis::BindState *v12; // rcx
  _QWORD **v13; // r12
  void *m_AdditionalContext; // rdx
  unsigned __int16 *v15; // rdx
  unsigned __int16 *v16; // rdx
  unsigned __int64 i; // rax
  Ndis::BindState **v18; // rbx
  unsigned __int16 *v19; // rdx

  if ( !Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
          (unsigned int *)a2,
          *(unsigned int *)(a3 + 4)) )
    return 0;
  v8 = 0LL;
  v9 = 0LL;
  while ( v9 < *(unsigned int *)(a3 + 4) )
  {
    v10 = *(_QWORD *)(a3 + 8) + 8 * v9;
    if ( v8 < *(unsigned int *)(a2 + 4) )
    {
      v11 = *(_QWORD *)(a2 + 8);
      v12 = *(Ndis::BindState **)(v11 + 8 * v8);
      v13 = (_QWORD **)(v11 + 8 * v8);
      m_AdditionalContext = v12[1].m_AdditionalContext;
      if ( m_AdditionalContext == *(void **)(*(_QWORD *)v10 + 80LL) )
      {
        if ( Ndis::BindState::SetSource(v12, AddBindSource, Registry)
          && (unsigned __int8)byte_14011CBA3 >= 4u
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = *(unsigned __int16 **)((*v13)[10] + 24LL);
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v15,
            0x1Cu,
            0xBu,
            (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
            v15,
            **v13);
        }
        ++v9;
      }
      else if ( (unsigned __int64)m_AdditionalContext >= *(_QWORD *)(*(_QWORD *)v10 + 80LL) )
      {
        if ( !(unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(a1, a2, v8) )
          return 0;
        ++v9;
      }
      else if ( (a4 & 1) == 0
             && Ndis::BindState::SetSource(v12, RemoveBindSource, Registry)
             && (unsigned __int8)byte_14011CBA3 >= 4u
             && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = *(unsigned __int16 **)((*v13)[10] + 24LL);
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v16,
          0x1Cu,
          0xCu,
          (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
          v16,
          **v13);
      }
      ++v8;
    }
    else
    {
      if ( !(unsigned __int8)Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(a1, a2, v8) )
        return 0;
      ++v9;
      ++v8;
    }
  }
  if ( (a4 & 1) == 0 )
  {
    for ( i = *(unsigned int *)(a2 + 4); v8 < i; ++v8 )
    {
      if ( v8 >= i )
        __fastfail(5u);
      v18 = (Ndis::BindState **)(*(_QWORD *)(a2 + 8) + 8 * v8);
      if ( Ndis::BindState::SetSource(*v18, RemoveBindSource, Registry)
        && (unsigned __int8)byte_14011CBA3 >= 4u
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = (unsigned __int16 *)*((_QWORD *)(*v18)[1].m_AdditionalContext + 3);
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v19,
          0x1Cu,
          0xDu,
          (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
          v19,
          (*v18)->Miniport);
      }
      i = *(unsigned int *)(a2 + 4);
    }
  }
  return 1;
}
