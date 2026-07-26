/*
 * XREFs of Ndis::BindRegistry::RemoveBindingsInSpan @ 0x14016A7C0
 * Callers:
 *     Ndis::BindRegistry::UpdateFiltersInner @ 0x14016A5C0 (Ndis--BindRegistry--UpdateFiltersInner.c)
 * Callees:
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014E9CC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x14016B2C0 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 */

void __fastcall Ndis::BindRegistry::RemoveBindingsInSpan(__int64 *a1, char a2, char a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax
  Ndis::BindState *v8; // rcx
  struct NDIS_BIND_FILTER_LINK **v9; // r14
  int v10; // edx
  struct _UNICODE_STRING v11[10]; // [rsp+40h] [rbp-D8h] BYREF

  if ( (a3 & 1) == 0 )
  {
    v4 = a1[2];
    v5 = a1[1];
    if ( v5 < v4 )
    {
      v6 = *a1;
      do
      {
        if ( v5 >= *(unsigned int *)(v6 + 4) )
          __fastfail(5u);
        v7 = *(_QWORD *)(v6 + 8);
        v8 = *(Ndis::BindState **)(v7 + 8 * v5);
        v9 = (struct NDIS_BIND_FILTER_LINK **)(v7 + 8 * v5);
        if ( ((*((_DWORD *)v8[1].m_AdditionalContext + 10) & 0xC) != 0) == a2
          && Ndis::BindState::SetSource(v8, RemoveBindSource, Registry) )
        {
          memset(v11, 0, sizeof(v11));
          if ( (unsigned __int8)byte_140126C63 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v9, v11);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v10,
                0x1Cu,
                0xEu,
                (struct _GUID *)&WPP_388d5b0555a83352147e712e55d69f1d_Traceguids,
                v11[0].Buffer,
                *(_QWORD *)&v11[0].Length);
          }
        }
        ++v5;
      }
      while ( v5 < v4 );
    }
  }
}
