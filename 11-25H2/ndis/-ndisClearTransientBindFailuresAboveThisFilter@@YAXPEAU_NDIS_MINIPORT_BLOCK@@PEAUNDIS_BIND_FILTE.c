/*
 * XREFs of ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015EDE0
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015E430 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015EFE0 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014E9CC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisClearTransientBindFailuresAboveThisFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2)
{
  __int64 m_numElements; // r14
  char v3; // bp
  unsigned __int64 v4; // rbx
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v7; // rsi
  NDIS_BIND_FILTER_LINK *value; // r15
  unsigned int m_unbindReasons; // r8d
  __int64 v10; // rbp
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // rax
  NDIS_BIND_PROTOCOL_LINK *v13; // rsi
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v14; // r14
  unsigned int v15; // r8d
  int v16; // edx
  bool v17; // cf
  unsigned __int16 *p_Length; // rdx
  char v19[8]; // [rsp+30h] [rbp-E8h]
  struct _UNICODE_STRING v20[10]; // [rsp+40h] [rbp-D8h] BYREF

  m_numElements = a1->Bindings.Filters.m_numElements;
  v3 = 0;
  v4 = 0LL;
  while ( v4 != m_numElements )
  {
    if ( v4 >= a1->Bindings.Filters.m_numElements )
LABEL_23:
      __fastfail(5u);
    v7 = &a1->Bindings.Filters._p[v4];
    if ( v3 )
    {
      value = v7->__ptr_.__value_;
      m_unbindReasons = v7->__ptr_.__value_->BindState.m_unbindReasons;
      v7->__ptr_.__value_->BindState.m_unbindReasons = m_unbindReasons & 0xFFFBFFE3;
      if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFBFFE3) != 0) || !value->BindState.Miniport )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v19 = m_unbindReasons & 0xFFFBFFE3;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            m_unbindReasons,
            *(_QWORD *)v19);
        }
        value->BindState.Miniport->BindEngine.m_isDirty = 1;
        memset(v20, 0, sizeof(v20));
        if ( (unsigned __int8)byte_140126C63 >= 4u )
        {
          ndisGetBindLinkNameForTracing(v7->__ptr_.__value_, v20);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v16,
              0x1Cu,
              0x16u,
              (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
              v20[0].Buffer,
              *(_QWORD *)&v20[0].Length);
        }
      }
LABEL_9:
      ++v4;
    }
    else
    {
      if ( v7->__ptr_.__value_ != a2 )
        goto LABEL_9;
      v3 = 1;
      ++v4;
    }
  }
  v10 = a1->Bindings.Protocols.m_numElements;
  for ( i = 0LL; i != v10; ++i )
  {
    if ( i >= a1->Bindings.Protocols.m_numElements )
      goto LABEL_23;
    p = a1->Bindings.Protocols._p;
    v13 = p[i].__ptr_.__value_;
    v14 = &p[i];
    v15 = v13->BindState.m_unbindReasons;
    v13->BindState.m_unbindReasons = v15 & 0xFFFBFFE3;
    if ( (v15 != 0) != ((v15 & 0xFFFBFFE3) != 0) || !v13->BindState.Miniport )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v19 = v15 & 0xFFFBFFE3;
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xEu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          v15,
          *(_QWORD *)v19);
      }
      v17 = (unsigned __int8)byte_140126C63 < 4u;
      v13->BindState.Miniport->BindEngine.m_isDirty = 1;
      if ( !v17 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        p_Length = &v14->__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_->Length;
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)p_Length,
          0x1Cu,
          0x17u,
          (struct _GUID *)&WPP_b6f031e119d53d3b975f13e0c06480b9_Traceguids,
          p_Length,
          v14->__ptr_.__value_->BindState.Miniport);
      }
    }
  }
}
