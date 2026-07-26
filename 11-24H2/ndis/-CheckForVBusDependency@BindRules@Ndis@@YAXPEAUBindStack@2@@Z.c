/*
 * XREFs of ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x140156BB0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140157050 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140166CD0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x140058010 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 */

void __fastcall Ndis::BindRules::CheckForVBusDependency(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r15
  unsigned __int64 i; // rdi
  __int64 v5; // rbp
  _QWORD **v6; // rsi
  _DWORD *v7; // rbx
  __int64 v8; // rax
  int v9; // edx
  bool v10; // cf
  unsigned __int16 *v11; // rdx
  int v12; // r8d
  char v13[8]; // [rsp+30h] [rbp-38h]

  v2 = *((unsigned int *)this + 1);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 1) )
      __fastfail(5u);
    v5 = qword_14011D080;
    v6 = (_QWORD **)(*((_QWORD *)this + 1) + 8 * i);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v5 + 16, 0LL);
    v7 = *v6;
    v8 = *(_QWORD *)((*v6)[10] + 40LL);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 64) & 0x10000000) == 0 || LOBYTE(WPP_MAIN_CB.DeviceQueue.Lock) )
      {
        v12 = v7[8];
        v7[8] = v12 & 0xFFDFFFFF;
        if ( (v12 != 0) != ((v12 & 0xFFDFFFFF) != 0) || !*(_QWORD *)v7 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v13 = v12 & 0xFFDFFFFF;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v12,
              *(_QWORD *)v13);
          }
          v10 = (unsigned __int8)byte_14011CBA3 < 4u;
          *(_BYTE *)(*(_QWORD *)v7 + 5224LL) = 1;
          if ( !v10 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              **v6,
              0x1Cu,
              0x13u,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              *(unsigned __int16 **)((*v6)[10] + 24LL),
              **v6);
        }
      }
      else
      {
        v9 = v7[8];
        v7[8] = v9 | 0x200000;
        if ( !v9 || !*(_QWORD *)v7 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v13 = v9 | 0x200000;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v9,
              *(_QWORD *)v13);
          }
          v10 = (unsigned __int8)byte_14011CBA3 < 4u;
          *(_BYTE *)(*(_QWORD *)v7 + 5224LL) = 1;
          if ( !v10 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v11 = *(unsigned __int16 **)((*v6)[10] + 24LL);
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v11,
              0x1Cu,
              0x14u,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v11,
              **v6);
          }
        }
      }
    }
    ExReleasePushLockEx(v5 + 16, 0LL);
    KeLeaveCriticalRegion();
  }
}
