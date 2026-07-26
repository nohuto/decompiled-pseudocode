/*
 * XREFs of ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140163080
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401638C0 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     WPP_RECORDER_SF__guid_D @ 0x1400CD598 (WPP_RECORDER_SF__guid_D_ea_1400CD598.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014E9CC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckMissingMandatoryFilter(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  int v3; // r15d
  unsigned __int64 i; // rbx
  __int64 v6; // rax
  _DWORD *v7; // rdi
  struct NDIS_BIND_FILTER_LINK **v8; // rsi
  __int64 v9; // r14
  unsigned __int64 j; // rbx
  __int64 v11; // rax
  _DWORD *v12; // rdi
  __int64 **v13; // rsi
  int v14; // edx
  int v15; // r8d
  bool v16; // cf
  __int64 v17; // rcx
  unsigned __int16 *v18; // rdx
  unsigned __int16 v19; // r9
  int v20; // edx
  struct NDIS_BIND_FILTER_LINK *v21; // r8
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rdx
  int v23; // r8d
  int v24; // edx
  int v25; // edx
  int v26; // [rsp+20h] [rbp-198h]
  char v27[8]; // [rsp+30h] [rbp-188h]
  struct _UNICODE_STRING v28[10]; // [rsp+40h] [rbp-178h] BYREF
  struct _UNICODE_STRING v29[10]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = 0;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_48:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    v8 = (struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i);
    if ( v7[13] || v7[7] )
    {
      if ( v3 )
      {
        v20 = v7[8];
        v7[8] = v20 | 0x20;
        if ( !v20 || !*(_QWORD *)v7 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v27 = v20 | 0x20;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v20,
              *(_QWORD *)v27);
          }
          *(_BYTE *)(*(_QWORD *)v7 + 5224LL) = 1;
          memset(v29, 0, sizeof(v29));
          if ( (unsigned __int8)byte_140126C63 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v8, v29);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v25,
                0x1Cu,
                0x1Eu,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                v29[0].Buffer,
                *(_QWORD *)&v29[0].Length);
          }
        }
      }
      else
      {
        v23 = v7[8];
        v7[8] = v23 & 0xFFFFFFDF;
        if ( (v23 != 0) != ((v23 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v7 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v27 = v23 & 0xFFFFFFDF;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v23,
              *(_QWORD *)v27);
          }
          *(_BYTE *)(*(_QWORD *)v7 + 5224LL) = 1;
          memset(v28, 0, sizeof(v28));
          if ( (unsigned __int8)byte_140126C63 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v8, v28);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v24,
                0x1Cu,
                0x1Du,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                v28[0].Buffer,
                *(_QWORD *)&v28[0].Length);
          }
        }
      }
      v21 = *v8;
      p = (*v8)->BindDriver._p;
      if ( (p->_t.FilterBindFlags & 1) == 0
        && v21->BindState.m_bindSources
        && v21->BindState.m_unbindReasons
        && !v21->BindState.AllowBindDespiteMandatory )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF__guid_D(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (__int64)&p->_t.Guid,
              (__int64)v21,
              0x1Fu,
              v26,
              (__int64)&p->_t.Guid);
        }
        v3 = 1;
      }
    }
  }
  v9 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v9; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_48;
    v11 = *((_QWORD *)this + 1);
    v12 = *(_DWORD **)(v11 + 8 * j);
    v13 = (__int64 **)(v11 + 8 * j);
    if ( v3 )
    {
      v14 = v12[8];
      v12[8] = v14 | 0x20;
      if ( !v14 || !*(_QWORD *)v12 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v27 = v14 | 0x20;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v14,
            *(_QWORD *)v27);
        }
        v16 = (unsigned __int8)byte_140126C63 < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5224LL) = 1;
        if ( !v16 )
        {
          v17 = **v13;
          v18 = *(unsigned __int16 **)((*v13)[10] + 24);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v19 = 33;
            goto LABEL_56;
          }
        }
      }
    }
    else
    {
      v15 = v12[8];
      v12[8] = v15 & 0xFFFFFFDF;
      if ( (v15 != 0) != ((v15 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v12 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v27 = v15 & 0xFFFFFFDF;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v15,
            *(_QWORD *)v27);
        }
        v16 = (unsigned __int8)byte_140126C63 < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5224LL) = 1;
        if ( !v16 )
        {
          v17 = **v13;
          v18 = *(unsigned __int16 **)((*v13)[10] + 24);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v19 = 32;
LABEL_56:
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v18,
              0x1Cu,
              v19,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v18,
              v17);
            continue;
          }
        }
      }
    }
  }
}
