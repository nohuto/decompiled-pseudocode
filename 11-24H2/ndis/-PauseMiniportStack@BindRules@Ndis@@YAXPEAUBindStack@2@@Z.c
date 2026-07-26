/*
 * XREFs of ?PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140156360
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140157050 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140166CD0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x140058010 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143D04 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::PauseMiniportStack(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rbx
  BOOL v5; // r15d
  __int64 v6; // rax
  _DWORD *v7; // rdi
  struct NDIS_BIND_FILTER_LINK **v8; // rsi
  int v9; // r8d
  unsigned int v10; // edx
  __int64 v11; // rsi
  unsigned __int64 i; // rbx
  __int64 v13; // rax
  _DWORD *v14; // rdi
  _QWORD **v15; // r14
  int v16; // r8d
  unsigned int v17; // edx
  bool v18; // cf
  unsigned __int16 *v19; // rdx
  int v20; // edx
  char v21[8]; // [rsp+30h] [rbp-E8h]
  struct _UNICODE_STRING v22[10]; // [rsp+40h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = 0LL;
  v5 = *((_DWORD *)this + 17) == 0;
  while ( v3 != v2 )
  {
    if ( v3 >= *((unsigned int *)this + 5) )
LABEL_35:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * v3);
    v8 = (struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v3);
    if ( v7[13] )
    {
      v9 = v7[9];
      if ( v5 )
        v10 = v9 & 0xFFFFFFEF;
      else
        v10 = v9 | 0x10;
      v7[9] = v10;
      if ( (v9 != 0) != (v10 != 0) || !*(_QWORD *)v7 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v21 = v10;
          WPP_RECORDER_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xFu,
            (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
            v9,
            *(_QWORD *)v21);
        }
        *(_BYTE *)(*(_QWORD *)v7 + 5224LL) = 1;
        memset(v22, 0, sizeof(v22));
        if ( (unsigned __int8)byte_14011CBA3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(*v8, v22);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v20,
              0x1Cu,
              0x42u,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v22[0].Buffer,
              *(_QWORD *)&v22[0].Length);
        }
      }
      v5 = (*v8)->BindState.m_pauseReasons == 0;
    }
    ++v3;
  }
  v11 = *((unsigned int *)this + 1);
  for ( i = 0LL; i != v11; ++i )
  {
    if ( i >= *((unsigned int *)this + 1) )
      goto LABEL_35;
    v13 = *((_QWORD *)this + 1);
    v14 = *(_DWORD **)(v13 + 8 * i);
    v15 = (_QWORD **)(v13 + 8 * i);
    v16 = v14[9];
    if ( v5 )
      v17 = v16 & 0xFFFFFFEF;
    else
      v17 = v16 | 0x10;
    v14[9] = v17;
    if ( (v16 != 0) != (v17 != 0) || !*(_QWORD *)v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v21 = v17;
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          v16,
          *(_QWORD *)v21);
      }
      v18 = (unsigned __int8)byte_14011CBA3 < 4u;
      *(_BYTE *)(*(_QWORD *)v14 + 5224LL) = 1;
      if ( !v18 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = *(unsigned __int16 **)((*v15)[10] + 24LL);
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v19,
          0x1Cu,
          0x43u,
          (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
          v19,
          **v15);
      }
    }
  }
}
