/*
 * XREFs of ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140164200
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

void __fastcall Ndis::BindRules::UnbindOnAttach(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r15
  int v3; // r14d
  unsigned __int64 i; // rbx
  __int64 v6; // rax
  _DWORD *v7; // rdi
  struct NDIS_BIND_FILTER_LINK **v8; // rsi
  __int64 v9; // r15
  unsigned __int64 j; // rdi
  __int64 v11; // rax
  _DWORD *v12; // rbx
  __int64 **v13; // rsi
  int v14; // r8d
  bool v15; // cf
  __int64 v16; // rcx
  unsigned __int16 *v17; // rdx
  unsigned __int16 v18; // r9
  int v19; // r8d
  struct NDIS_BIND_FILTER_LINK *v20; // r8
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rdx
  int v22; // edx
  int v23; // edx
  int v24; // [rsp+20h] [rbp-198h]
  char v25[8]; // [rsp+30h] [rbp-188h]
  struct _UNICODE_STRING v26[10]; // [rsp+40h] [rbp-178h] BYREF
  struct _UNICODE_STRING v27[10]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = 0;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_54:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    v8 = (struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i);
    if ( v7[13] || v7[7] )
    {
      v19 = v7[8];
      if ( v3 )
      {
        v7[8] = v19 | 0x200;
        if ( v19 == 0 || !*(_QWORD *)v7 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v25 = v19 | 0x200;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v19,
              *(_QWORD *)v25);
          }
          *(_BYTE *)(*(_QWORD *)v7 + 5224LL) = 1;
          memset(v27, 0, sizeof(v27));
          if ( (unsigned __int8)byte_140126C63 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v8, v27);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v23,
                0x1Cu,
                0x31u,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                v27[0].Buffer,
                *(_QWORD *)&v27[0].Length);
          }
        }
      }
      else
      {
        v7[8] = v19 & 0xFFFFFDFF;
        if ( (v19 != 0) != ((v19 & 0xFFFFFDFF) != 0) || !*(_QWORD *)v7 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v25 = v19 & 0xFFFFFDFF;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v19,
              *(_QWORD *)v25);
          }
          *(_BYTE *)(*(_QWORD *)v7 + 5224LL) = 1;
          memset(v26, 0, sizeof(v26));
          if ( (unsigned __int8)byte_140126C63 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v8, v26);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v22,
                0x1Cu,
                0x30u,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                v26[0].Buffer,
                *(_QWORD *)&v26[0].Length);
          }
        }
      }
      v20 = *v8;
      p = (*v8)->BindDriver._p;
      if ( (p->_t.FilterBindFlags & 4) != 0
        && !v20->BindState.m_unbindReasons
        && !v20->BindState.PretendBindingActive
        && !v20->BindState.m_bindContext.m_numElements )
      {
        v3 = 1;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF__guid_D(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (__int64)&p->_t.Guid,
              (__int64)v20,
              0x32u,
              v24,
              (__int64)&p->_t.Guid);
        }
      }
    }
  }
  v9 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v9; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_54;
    v11 = *((_QWORD *)this + 1);
    v12 = *(_DWORD **)(v11 + 8 * j);
    v13 = (__int64 **)(v11 + 8 * j);
    v14 = v12[8];
    if ( v3 )
    {
      v12[8] = v14 | 0x200;
      if ( v14 == 0 || !*(_QWORD *)v12 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v25 = v14 | 0x200;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v14,
            *(_QWORD *)v25);
        }
        v15 = (unsigned __int8)byte_140126C63 < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5224LL) = 1;
        if ( !v15 )
        {
          v16 = **v13;
          v17 = *(unsigned __int16 **)((*v13)[10] + 24);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v18 = 52;
            goto LABEL_55;
          }
        }
      }
    }
    else
    {
      v12[8] = v14 & 0xFFFFFDFF;
      if ( (v14 != 0) != ((v14 & 0xFFFFFDFF) != 0) || !*(_QWORD *)v12 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v25 = v14 & 0xFFFFFDFF;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v14,
            *(_QWORD *)v25);
        }
        v15 = (unsigned __int8)byte_140126C63 < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5224LL) = 1;
        if ( !v15 )
        {
          v16 = **v13;
          v17 = *(unsigned __int16 **)((*v13)[10] + 24);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v18 = 51;
LABEL_55:
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v17,
              0x1Cu,
              v18,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v17,
              v16);
            continue;
          }
        }
      }
    }
  }
}
