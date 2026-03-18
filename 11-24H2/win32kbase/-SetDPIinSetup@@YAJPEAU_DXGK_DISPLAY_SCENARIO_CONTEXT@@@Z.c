/*
 * XREFs of ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015A320
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ?PreAllocateForPrimaryMonitorChange@@YAHXZ @ 0x14000B480 (-PreAllocateForPrimaryMonitorChange@@YAHXZ.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x140010CF0 (DrvGetCurrentDpiInfoFromHDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140060DA0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140060DC8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     GreUpdateSharedDevCaps @ 0x14011F320 (GreUpdateSharedDevCaps.c)
 *     DrvSetDisplayConfig @ 0x140137640 (DrvSetDisplayConfig.c)
 *     GreReinitializeStockFonts @ 0x14014BB30 (GreReinitializeStockFonts.c)
 *     GetDpiSetting @ 0x140153714 (GetDpiSetting.c)
 *     _SetDPIinSetup_::_2_::CleanupUnicodeString::_CleanupUnicodeString @ 0x14019F2D0 (_SetDPIinSetup_--_2_--CleanupUnicodeString--_CleanupUnicodeString.c)
 *     GreReinitializeDpiSetting @ 0x1401CCB40 (GreReinitializeDpiSetting.c)
 *     SetDpiSetting @ 0x14023B788 (SetDpiSetting.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall SetDPIinSetup(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1)
{
  unsigned int v1; // edi
  char v3; // si
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  int updated; // ebx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int (*v14)(void); // rax
  int (*v15)(void); // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int (*v19)(void); // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int (__fastcall *v22)(__int64, bool); // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct _MDEV *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rcx
  bool v39; // r14
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-80h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+A0h] [rbp-70h] BYREF
  UNICODE_STRING String2; // [rsp+A8h] [rbp-68h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v47; // [rsp+F8h] [rbp-18h]
  int v48; // [rsp+100h] [rbp-10h]
  __int64 v49; // [rsp+108h] [rbp-8h]
  __int64 v50; // [rsp+110h] [rbp+0h]
  int v51; // [rsp+118h] [rbp+8h]
  __int64 v52; // [rsp+120h] [rbp+10h]
  int v53; // [rsp+128h] [rbp+18h]
  _BYTE v54[16]; // [rsp+130h] [rbp+20h] BYREF
  _DWORD v55[32]; // [rsp+140h] [rbp+30h] BYREF
  char v56; // [rsp+1D8h] [rbp+C8h] BYREF
  int v57; // [rsp+1E0h] [rbp+D0h] BYREF
  struct _MDEV *v58; // [rsp+1E8h] [rbp+D8h] BYREF

  v1 = 0;
  QueryTable.Flags = 292;
  v57 = 0;
  QueryTable.Name = L"ImageState";
  v58 = 0LL;
  QueryTable.EntryContext = &DestinationString;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultType = 16777217;
  QueryTable.DefaultData = 0LL;
  DestinationString = 0LL;
  QueryTable.DefaultLength = 0;
  String2 = 0LL;
  v47 = 0LL;
  v48 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0;
  v52 = 0LL;
  v53 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  p_DestinationString = &DestinationString;
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\State",
         &QueryTable,
         0LL,
         0LL) < 0 )
  {
    RtlDeleteRegistryValue(
      0,
      L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
      L"Overrode");
    if ( DestinationString.Buffer )
      RtlFreeUnicodeString(&DestinationString);
    return 0LL;
  }
  else
  {
    RtlInitUnicodeString(&String2, L"IMAGE_STATE_SPECIALIZE_RESEAL_TO_OOBE");
    v3 = 1;
    if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
    {
      RtlInitUnicodeString(&String2, L"IMAGE_STATE_COMPLETE");
      if ( !RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
        RtlDeleteRegistryValue(
          0,
          L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
          L"Overrode");
      goto LABEL_5;
    }
    QueryTable.Flags |= 0x80u;
    QueryTable.Name = L"Upgrade";
    QueryTable.EntryContext = &v57;
    if ( RtlQueryRegistryValues(0, L"\\Registry\\Machine\\SYSTEM\\Setup", &QueryTable, 0LL, 0LL) >= 0 )
      goto LABEL_5;
    QueryTable.Name = L"Overrode";
    if ( RtlQueryRegistryValues(
           0,
           L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
           &QueryTable,
           0LL,
           0LL) >= 0 )
      goto LABEL_5;
    memset(v55, 0, 0x60uLL);
    UserSessionState = W32GetUserSessionState(v5);
    if ( (int)DrvGetCurrentDpiInfoFromHDev(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 104LL) + 80LL),
                (__int64)v55) < 0 )
      goto LABEL_5;
    if ( !(unsigned int)PreAllocateForPrimaryMonitorChange() )
    {
      v1 = -1073741823;
LABEL_5:
      SetDPIinSetup_::_2_::CleanupUnicodeString::_CleanupUnicodeString(&p_DestinationString);
      return v1;
    }
    updated = 0;
    v8 = (unsigned int)(96 * v55[2] + 50);
    v9 = (unsigned int)v8 / 0x64;
    *(_DWORD *)(W32GetUserSessionState(v8) + 68668) = 1;
    v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v10) + 48);
    v14 = *(int (**)(void))(v13 + 3104);
    if ( v14 && v14() >= 0 )
      GetDpiSetting(1LL, (__int64)&v57);
    if ( v57 != v9 )
    {
      v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 48) + 3136LL);
      if ( v15 )
      {
        if ( v15() >= 0 && (int)SetDpiSetting(v16, v9) >= 0 )
        {
          v19 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48) + 3120LL);
          if ( v19 )
          {
            if ( v19() >= 0 )
            {
              v22 = *(int (__fastcall **)(__int64, bool))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v21, v20) + 48)
                                                        + 3128LL);
              if ( v22 )
              {
                if ( v22(1LL, v9 > 0x78) >= 0 )
                {
                  v56 = 0;
                  GreReinitializeDpiSetting();
                  v24 = W32GetUserSessionState(v23);
                  if ( (int)DrvSetDisplayConfig(
                              0,
                              0LL,
                              0x88Fu,
                              0,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              *(struct _MDEV **)(*(_QWORD *)(v24 + 57008) + 16LL),
                              &v58,
                              0LL,
                              0LL,
                              &v56,
                              0LL,
                              0LL,
                              (__int64)a1,
                              0LL) >= 0 )
                  {
                    if ( !v56 )
                    {
                      GreReinitializeStockFonts(v9, 1LL);
                      v25 = *(_QWORD *)v58;
                      v27 = *(_QWORD *)(W32GetUserSessionState(v26) + 57008);
                      *(_QWORD *)(v27 + 48) = v25;
                      v28 = v58;
                      v29 = *(_QWORD *)(W32GetUserSessionState(v27) + 57008);
                      *(_QWORD *)(v29 + 16) = v28;
                      v30 = W32GetUserSessionState(v29);
                      GreUpdateSharedDevCaps(*(_QWORD *)(*(_QWORD *)(v30 + 57008) + 48LL));
                      v32 = *(_QWORD *)(W32GetUserSessionState(v31) + 19928);
                      *(_WORD *)(v32 + 6998) = v9;
                      v33 = *(_QWORD *)(W32GetUserSessionState(v32) + 19928);
                      ++*(_WORD *)(v33 + 7014);
                      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33);
                      v36 = CurrentProcessWin32Process;
                      if ( CurrentProcessWin32Process )
                      {
                        v35 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
                        v36 = v35 & CurrentProcessWin32Process;
                      }
                      *(_WORD *)(v36 + 272) = *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v35) + 19928) + 6998LL);
                    }
                    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v54);
                    updated = zzzUpdateUserScreen(v37);
                    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v54);
                    gbSetDPIinSetupChangedDisplaySettings = 1;
                    if ( updated < 0 )
                    {
                      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
                        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
                      {
                        v3 = 0;
                      }
                      v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                      if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        v40 = W32GetUserSessionState(v38);
                        LOBYTE(v41) = v39;
                        LOBYTE(v42) = v3;
                        WPP_RECORDER_AND_TRACE_SF_d(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v42,
                          v41,
                          *(_QWORD *)(v40 + 69400),
                          2,
                          14,
                          23,
                          (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids,
                          updated);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    SetDPIinSetup_::_2_::CleanupUnicodeString::_CleanupUnicodeString(&p_DestinationString);
    return (unsigned int)updated;
  }
}
