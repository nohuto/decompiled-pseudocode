/*
 * XREFs of ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140164FF0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401638C0 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014E9CC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014EAFC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::ReStartTemporaryPause(
        struct _NDIS_MINIPORT_BLOCK *this,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 m_numElements; // rbp
  int v3; // r15d
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // rax
  NDIS_BIND_FILTER_LINK *value; // rdi
  struct NDIS_BIND_FILTER_LINK **p_value; // r14
  unsigned int m_pauseReasons; // r8d
  __int64 v10; // rbp
  unsigned __int64 j; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v12; // rax
  NDIS_BIND_PROTOCOL_LINK *v13; // rdi
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v14; // r14
  unsigned int v15; // r8d
  bool v16; // cf
  unsigned int v17; // r8d
  int v18; // edx
  unsigned __int16 *p_Length; // rdx
  int v20; // edx
  char v21[8]; // [rsp+30h] [rbp-E8h]
  struct _UNICODE_STRING v22[10]; // [rsp+40h] [rbp-D8h] BYREF

  m_numElements = this->Bindings.Filters.m_numElements;
  v3 = 0;
  for ( i = 0LL; i != m_numElements; ++i )
  {
    if ( i >= this->Bindings.Filters.m_numElements )
LABEL_30:
      __fastfail(5u);
    p = this->Bindings.Filters._p;
    value = p[i].__ptr_.__value_;
    p_value = &p[i].__ptr_.__value_;
    if ( value->BindState.m_actualPauseState == DatapathPaused )
    {
      m_pauseReasons = value->BindState.m_pauseReasons;
      value->BindState.m_pauseReasons = m_pauseReasons & 0xFFFFFFDF;
      if ( (m_pauseReasons != 0) != ((m_pauseReasons & 0xFFFFFFDF) != 0) || !value->BindState.Miniport )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v21 = m_pauseReasons & 0xFFFFFFDF;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xFu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            m_pauseReasons,
            *(_QWORD *)v21);
        }
        value->BindState.Miniport->BindEngine.m_isDirty = 1;
        memset(v22, 0, sizeof(v22));
        if ( (unsigned __int8)byte_140126C63 >= 4u )
        {
          ndisGetBindLinkNameForTracing(*p_value, v22);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v18,
              0x1Cu,
              0xCu,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v22[0].Buffer,
              *(_QWORD *)&v22[0].Length);
        }
      }
    }
  }
  v10 = this->Bindings.Protocols.m_numElements;
  for ( j = 0LL; j != v10; ++j )
  {
    if ( j >= this->Bindings.Protocols.m_numElements )
      goto LABEL_30;
    v12 = this->Bindings.Protocols._p;
    v13 = v12[j].__ptr_.__value_;
    v14 = &v12[j];
    if ( v13->BindState.m_actualPauseState == DatapathPaused )
    {
      v15 = v13->BindState.m_pauseReasons;
      v13->BindState.m_pauseReasons = v15 & 0xFFFFFFDF;
      if ( (v15 != 0) != ((v15 & 0xFFFFFFDF) != 0) || !v13->BindState.Miniport )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v21 = v15 & 0xFFFFFFDF;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xFu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v15,
            *(_QWORD *)v21);
        }
        v16 = (unsigned __int8)byte_140126C63 < 4u;
        v13->BindState.Miniport->BindEngine.m_isDirty = 1;
        if ( !v16 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          p_Length = &v14->__ptr_.__value_->BindDriver._p->_t.Name.__ptr_.__value_->Length;
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)p_Length,
            0x1Cu,
            0xDu,
            (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
            p_Length,
            v14->__ptr_.__value_->BindState.Miniport);
        }
      }
    }
  }
  if ( this->Bindings.Miniport.m_actualPauseState == DatapathPaused )
  {
    v17 = this->Bindings.Miniport.m_pauseReasons;
    this->Bindings.Miniport.m_pauseReasons = v17 & 0xFFFFFFDF;
    LOBYTE(v3) = v17 != 0;
    if ( v3 != ((v17 & 0xFFFFFFDF) != 0) || !this->Bindings.Miniport.Miniport )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v21 = v17 & 0xFFFFFFDF;
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          v17,
          *(_QWORD *)v21);
      }
      this->Bindings.Miniport.Miniport->BindEngine.m_isDirty = 1;
      memset(v22, 0, sizeof(v22));
      if ( (unsigned __int8)byte_140126C63 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v22);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v20,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
            v22[0].Buffer,
            *(_QWORD *)&v22[0].Length);
      }
    }
  }
}
