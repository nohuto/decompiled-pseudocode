/*
 * XREFs of ?CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140162EC0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401638C0 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014E9CC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckMissingModifyingFilter(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r15
  BOOL v3; // esi
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  struct NDIS_BIND_FILTER_LINK **v8; // r14
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  int v12; // edx
  char v13[8]; // [rsp+30h] [rbp-188h]
  struct _UNICODE_STRING v14[10]; // [rsp+40h] [rbp-178h] BYREF
  struct _UNICODE_STRING v15[10]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = 0;
  v4 = 0LL;
  while ( v4 != v2 )
  {
    if ( v4 >= *((unsigned int *)this + 5) )
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_QWORD *)(v6 + 8 * v4);
    v8 = (struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v4);
    if ( *(_DWORD *)(v7 + 52) || *(_DWORD *)(v7 + 28) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 80) + 40LL) & 2) != 0 )
      {
        if ( v3 )
        {
          v9 = *(_DWORD *)(v7 + 32);
          *(_DWORD *)(v7 + 32) = v9 | 0x80;
          if ( !v9 || !*(_QWORD *)v7 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              *(_DWORD *)v13 = v9 | 0x80;
              WPP_RECORDER_SF_Ld(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0x1Cu,
                0xEu,
                (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
                v9,
                *(_QWORD *)v13);
            }
            *(_BYTE *)(*(_QWORD *)v7 + 5224LL) = 1;
            memset(v15, 0, sizeof(v15));
            if ( (unsigned __int8)byte_140126C63 >= 4u )
            {
              ndisGetBindLinkNameForTracing(*v8, v15);
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v12,
                  0x1Cu,
                  0x1Cu,
                  (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                  v15[0].Buffer,
                  *(_QWORD *)&v15[0].Length);
            }
          }
        }
        else
        {
          v10 = *(_DWORD *)(v7 + 32);
          *(_DWORD *)(v7 + 32) = v10 & 0xFFFFFF7F;
          if ( (v10 != 0) != ((v10 & 0xFFFFFF7F) != 0) || !*(_QWORD *)v7 )
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            {
              *(_DWORD *)v13 = v10 & 0xFFFFFF7F;
              WPP_RECORDER_SF_Ld(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                5u,
                0x1Cu,
                0xEu,
                (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
                v10,
                *(_QWORD *)v13);
            }
            *(_BYTE *)(*(_QWORD *)v7 + 5224LL) = 1;
            memset(v14, 0, sizeof(v14));
            if ( (unsigned __int8)byte_140126C63 >= 4u )
            {
              ndisGetBindLinkNameForTracing(*v8, v14);
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Zq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v11,
                  0x1Cu,
                  0x1Bu,
                  (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                  v14[0].Buffer,
                  *(_QWORD *)&v14[0].Length);
            }
          }
        }
        goto LABEL_6;
      }
      v3 = *(_DWORD *)(v7 + 32) != 0;
      ++v4;
    }
    else
    {
LABEL_6:
      ++v4;
    }
  }
}
