/*
 * XREFs of ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140163F00
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401638C0 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014E9CC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForDriverLoaded(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // rbp
  unsigned __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  struct NDIS_BIND_FILTER_LINK **v7; // r14
  int v8; // edx
  __int64 v9; // rbp
  unsigned __int64 j; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 **v13; // r14
  int v14; // edx
  int v15; // r8d
  bool v16; // cf
  __int64 v17; // rcx
  unsigned __int16 *v18; // rdx
  unsigned __int16 v19; // r9
  int v20; // r8d
  int v21; // edx
  int v22; // edx
  char v23[8]; // [rsp+30h] [rbp-188h]
  struct _UNICODE_STRING v24[10]; // [rsp+40h] [rbp-178h] BYREF
  struct _UNICODE_STRING v25[10]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_38:
      __fastfail(5u);
    v5 = *((_QWORD *)this + 3);
    v6 = *(_QWORD *)(v5 + 8 * i);
    v7 = (struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i);
    if ( **(_BYTE **)(v6 + 80) )
    {
      v20 = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v6 + 32) = v20 & 0xFFFFFFFD;
      if ( (v20 != 0) != ((v20 & 0xFFFFFFFD) != 0) || !*(_QWORD *)v6 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v23 = v20 & 0xFFFFFFFD;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v20,
            *(_QWORD *)v23);
        }
        *(_BYTE *)(*(_QWORD *)v6 + 5224LL) = 1;
        memset(v24, 0, sizeof(v24));
        if ( (unsigned __int8)byte_140126C63 >= 4u )
        {
          ndisGetBindLinkNameForTracing(*v7, v24);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v21,
              0x1Cu,
              0xFu,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v24[0].Buffer,
              *(_QWORD *)&v24[0].Length);
        }
      }
    }
    else
    {
      v8 = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v6 + 32) = v8 | 2;
      if ( !v8 || !*(_QWORD *)v6 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v23 = v8 | 2;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v8,
            *(_QWORD *)v23);
        }
        *(_BYTE *)(*(_QWORD *)v6 + 5224LL) = 1;
        memset(v25, 0, sizeof(v25));
        if ( (unsigned __int8)byte_140126C63 >= 4u )
        {
          ndisGetBindLinkNameForTracing(*v7, v25);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v22,
              0x1Cu,
              0x10u,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v25[0].Buffer,
              *(_QWORD *)&v25[0].Length);
        }
      }
    }
  }
  v9 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v9; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_38;
    v11 = *((_QWORD *)this + 1);
    v12 = *(_QWORD *)(v11 + 8 * j);
    v13 = (__int64 **)(v11 + 8 * j);
    if ( **(_BYTE **)(v12 + 80) )
    {
      v15 = *(_DWORD *)(v12 + 32);
      *(_DWORD *)(v12 + 32) = v15 & 0xFFFFFFFD;
      if ( (v15 != 0) != ((v15 & 0xFFFFFFFD) != 0) || !*(_QWORD *)v12 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v23 = v15 & 0xFFFFFFFD;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v15,
            *(_QWORD *)v23);
        }
        v16 = (unsigned __int8)byte_140126C63 < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5224LL) = 1;
        if ( !v16 )
        {
          v17 = **v13;
          v18 = *(unsigned __int16 **)((*v13)[10] + 24);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v19 = 17;
LABEL_46:
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
    else
    {
      v14 = *(_DWORD *)(v12 + 32);
      *(_DWORD *)(v12 + 32) = v14 | 2;
      if ( !v14 || !*(_QWORD *)v12 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v23 = v14 | 2;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v14,
            *(_QWORD *)v23);
        }
        v16 = (unsigned __int8)byte_140126C63 < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5224LL) = 1;
        if ( !v16 )
        {
          v17 = **v13;
          v18 = *(unsigned __int16 **)((*v13)[10] + 24);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v19 = 18;
            goto LABEL_46;
          }
        }
      }
    }
  }
}
