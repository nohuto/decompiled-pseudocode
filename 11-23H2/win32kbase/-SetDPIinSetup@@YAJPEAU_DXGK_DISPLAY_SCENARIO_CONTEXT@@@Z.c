/*
 * XREFs of ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD994
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C00AE3AC (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0012948 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     DrvSetDisplayConfig @ 0x1C0014230 (DrvSetDisplayConfig.c)
 *     GreUpdateSharedDevCaps @ 0x1C00197AC (GreUpdateSharedDevCaps.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C005E15C (DrvGetCurrentDpiInfoFromHDev.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0060D08 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     GreReinitializeStockFonts @ 0x1C00C27B0 (GreReinitializeStockFonts.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 */

__int64 __fastcall SetDPIinSetup(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1)
{
  char v2; // bl
  int updated; // edi
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // [rsp+40h] [rbp-C0h]
  struct _MDEV *v15; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v19; // [rsp+E8h] [rbp-18h]
  int v20; // [rsp+F0h] [rbp-10h]
  __int64 v21; // [rsp+F8h] [rbp-8h]
  __int64 v22; // [rsp+100h] [rbp+0h]
  int v23; // [rsp+108h] [rbp+8h]
  __int64 v24; // [rsp+110h] [rbp+10h]
  int v25; // [rsp+118h] [rbp+18h]
  _DWORD v26[32]; // [rsp+120h] [rbp+20h] BYREF
  bool v27; // [rsp+1B8h] [rbp+B8h] BYREF
  char v28; // [rsp+1C0h] [rbp+C0h] BYREF
  int v29; // [rsp+1C8h] [rbp+C8h] BYREF

  QueryTable.Flags = 292;
  v29 = 0;
  QueryTable.Name = L"ImageState";
  v15 = 0LL;
  QueryTable.EntryContext = &DestinationString;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultType = 16777217;
  QueryTable.DefaultData = 0LL;
  DestinationString = 0LL;
  QueryTable.DefaultLength = 0;
  String2 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v24 = 0LL;
  v25 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\State",
         &QueryTable,
         0LL,
         0LL) < 0 )
    goto LABEL_4;
  RtlInitUnicodeString(&String2, L"IMAGE_STATE_SPECIALIZE_RESEAL_TO_OOBE");
  v2 = 1;
  if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
  {
    RtlInitUnicodeString(&String2, L"IMAGE_STATE_COMPLETE");
    if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
      return 0LL;
LABEL_4:
    RtlDeleteRegistryValue(
      0,
      L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
      L"Overrode");
    return 0LL;
  }
  QueryTable.Flags |= 0x80u;
  QueryTable.Name = L"Upgrade";
  QueryTable.EntryContext = &v29;
  if ( RtlQueryRegistryValues(0, L"\\Registry\\Machine\\SYSTEM\\Setup", &QueryTable, 0LL, 0LL) >= 0 )
    return 0LL;
  QueryTable.Name = L"Overrode";
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
         &QueryTable,
         0LL,
         0LL) >= 0 )
    return 0LL;
  memset(v26, 0, 0x60uLL);
  if ( (int)DrvGetCurrentDpiInfoFromHDev(*(_QWORD *)(*((_QWORD *)gpDispInfo + 12) + 80LL), (__int64)v26) < 0 )
    return 0LL;
  updated = 0;
  gbSetupDPIInitialized = 1;
  v5 = (96 * v26[2] + 50) / 0x64u;
  if ( qword_1C0295CB8 && (int)qword_1C0295CB8() >= 0 && qword_1C0295CC0 )
    qword_1C0295CC0(1LL, &v29);
  if ( v29 != v5 )
  {
    if ( qword_1C0295CD8 )
    {
      if ( (int)qword_1C0295CD8() >= 0 )
      {
        if ( qword_1C0295CE0 )
        {
          if ( (int)qword_1C0295CE0(1LL, v5) >= 0 )
          {
            if ( qword_1C0295CC8 )
            {
              if ( (int)qword_1C0295CC8() >= 0 )
              {
                if ( qword_1C0295CD0 )
                {
                  if ( (int)qword_1C0295CD0(1LL, v5 > 0x78) >= 0 )
                  {
                    v27 = 0;
                    v7 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
                    *(_DWORD *)(v7 + 1280) = 0;
                    *(_DWORD *)(v7 + 1288) = 0;
                    if ( (int)DrvSetDisplayConfig(
                                0,
                                0LL,
                                0x88Fu,
                                0,
                                0LL,
                                0,
                                0LL,
                                0LL,
                                *((struct _MDEV **)gpDispInfo + 2),
                                &v15,
                                0LL,
                                0LL,
                                &v27,
                                0LL,
                                (__int64)a1,
                                0LL) >= 0 )
                    {
                      if ( !v27 )
                      {
                        GreReinitializeStockFonts(v5, 1);
                        *((_QWORD *)gpDispInfo + 5) = *(_QWORD *)v15;
                        *((_QWORD *)gpDispInfo + 2) = v15;
                        GreUpdateSharedDevCaps(*((_QWORD *)gpDispInfo + 5));
                        *((_WORD *)gpsi + 3499) = v5;
                        ++*((_WORD *)gpsi + 3507);
                        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
                        v10 = CurrentProcessWin32Process;
                        if ( CurrentProcessWin32Process )
                          v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
                        *(_WORD *)(v10 + 284) = *((_WORD *)gpsi + 3499);
                      }
                      if ( !CreateCachedMonitor() )
                      {
                        updated = -1073741823;
                        gbSetDPIinSetupChangedDisplaySettings = 1;
                        goto LABEL_30;
                      }
                      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v28, v11, v12, v13);
                      updated = zzzUpdateUserScreen();
                      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v28);
                      gbSetDPIinSetupChangedDisplaySettings = 1;
                      if ( updated < 0 )
                      {
LABEL_30:
                        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
                          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
                        {
                          v2 = 0;
                        }
                        if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          LODWORD(v14) = updated;
                          WPP_RECORDER_AND_TRACE_SF_d(
                            (__int64)WPP_GLOBAL_Control->AttachedDevice,
                            v2,
                            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
                            2u,
                            0xEu,
                            0x16u,
                            (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids,
                            v14);
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
    }
  }
  return (unsigned int)updated;
}
