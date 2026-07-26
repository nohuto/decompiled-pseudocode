/*
 * XREFs of ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x140158F70
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140157050 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140166CD0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF__guid_D @ 0x1400C64FC (WPP_RECORDER_SF__guid_D_ea_1400C64FC.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143D04 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1401593A0 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot(
        Ndis::BindRules *this,
        struct Ndis::BindStack *a2)
{
  __int64 v2; // r12
  unsigned __int64 v3; // r14
  enum BINDING_ENABLED_OR_DISABLED v4; // esi
  unsigned __int64 v5; // rbp
  char v6; // r13
  __int64 v8; // rax
  Ndis::BindState *v9; // rcx
  struct NDIS_BIND_FILTER_LINK **v10; // rbx
  int v11; // edx
  unsigned __int16 v12; // r9
  __int64 v13; // rdi
  struct NDIS_BIND_FILTER_LINK *v14; // r8
  __int64 v15; // rbx
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rdx
  int v17; // edx
  __int64 v18; // rdi
  Ndis::BindState **v19; // rbx
  Ndis::BindState *v20; // rcx
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx
  unsigned __int16 *v22; // rdx
  unsigned __int16 v23; // r9
  int v24; // [rsp+20h] [rbp-F8h]
  struct _UNICODE_STRING v25[10]; // [rsp+40h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = 0LL;
  v4 = BindingEnabled;
  v5 = 0LL;
  v6 = (char)a2;
  while ( v5 != v2 )
  {
    if ( v5 >= *((unsigned int *)this + 5) )
LABEL_51:
      __fastfail(5u);
    v8 = *((_QWORD *)this + 3);
    v9 = *(Ndis::BindState **)(v8 + 8 * v5);
    v10 = (struct NDIS_BIND_FILTER_LINK **)(v8 + 8 * v5);
    if ( v9->m_bindContext.m_numElements || v9->m_bindSources )
    {
      if ( v6 )
      {
        if ( v4 )
        {
          if ( Ndis::BindState::SetBinding(v9, v4, Reason_MissingOptionalFilter) )
          {
            memset(v25, 0, sizeof(v25));
            if ( (unsigned __int8)byte_14011CBA3 >= 4u )
            {
              ndisGetBindLinkNameForTracing(*v10, v25);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v12 = 42;
LABEL_16:
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v11,
                  0x1Cu,
                  v12,
                  (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                  v25[0].Buffer,
                  *(_QWORD *)&v25[0].Length);
              }
            }
          }
        }
        else if ( Ndis::BindState::SetBinding(v9, BindingEnabled, Reason_MissingOptionalFilter) )
        {
          memset(v25, 0, sizeof(v25));
          if ( (unsigned __int8)byte_14011CBA3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v10, v25);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v12 = 41;
              goto LABEL_16;
            }
          }
        }
        v13 = qword_14011D080 + 16;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v13, 0LL);
        v14 = *v10;
        v15 = v13;
        p = v14->BindDriver._p;
        if ( (p->_t.FilterBindFlags & 0x11) == 1 && !p->_t.RunningDriver )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
              WPP_RECORDER_SF__guid_D(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                (__int64)&p->_t.Guid,
                (__int64)v14,
                0x2Cu,
                v24,
                (__int64)&p->_t.Guid);
          }
          v4 = BindingDisabled;
        }
      }
      else
      {
        if ( v4 == BindingEnabled && Ndis::BindState::SetBinding(v9, BindingEnabled, Reason_MissingOptionalFilter) )
        {
          memset(v25, 0, sizeof(v25));
          if ( (unsigned __int8)byte_14011CBA3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v10, v25);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v17,
                0x1Cu,
                0x2Bu,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                v25[0].Buffer,
                *(_QWORD *)&v25[0].Length);
          }
        }
        v15 = qword_14011D080 + 16;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v15, 0LL);
      }
      ExReleasePushLockEx(v15, 0LL);
      KeLeaveCriticalRegion();
    }
    ++v5;
  }
  v18 = *((unsigned int *)this + 1);
  while ( v3 != v18 )
  {
    if ( v3 >= *((unsigned int *)this + 1) )
      goto LABEL_51;
    v19 = (Ndis::BindState **)(*((_QWORD *)this + 1) + 8 * v3);
    if ( v6 )
    {
      v20 = *v19;
      if ( v4 )
      {
        if ( Ndis::BindState::SetBinding(v20, v4, Reason_MissingOptionalFilter) && (unsigned __int8)byte_14011CBA3 >= 4u )
        {
          Miniport = (*v19)->Miniport;
          v22 = (unsigned __int16 *)*((_QWORD *)(*v19)[1].m_AdditionalContext + 3);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v23 = 46;
            goto LABEL_49;
          }
        }
      }
      else if ( Ndis::BindState::SetBinding(v20, BindingEnabled, Reason_MissingOptionalFilter)
             && (unsigned __int8)byte_14011CBA3 >= 4u )
      {
        Miniport = (*v19)->Miniport;
        v22 = (unsigned __int16 *)*((_QWORD *)(*v19)[1].m_AdditionalContext + 3);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = 45;
LABEL_49:
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v22,
            0x1Cu,
            v23,
            (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
            v22,
            Miniport);
        }
      }
    }
    else if ( v4 == BindingEnabled
           && Ndis::BindState::SetBinding(*v19, BindingEnabled, Reason_MissingOptionalFilter)
           && (unsigned __int8)byte_14011CBA3 >= 4u )
    {
      Miniport = (*v19)->Miniport;
      v22 = (unsigned __int16 *)*((_QWORD *)(*v19)[1].m_AdditionalContext + 3);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 47;
        goto LABEL_49;
      }
    }
    ++v3;
  }
}
