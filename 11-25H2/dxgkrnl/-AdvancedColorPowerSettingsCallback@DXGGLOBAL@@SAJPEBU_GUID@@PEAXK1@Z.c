/*
 * XREFs of ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x14031FA20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1401CF2A0 (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x14031E4F8 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 *     ?FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14031FC40 (-FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

__int64 __fastcall DXGGLOBAL::AdvancedColorPowerSettingsCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        PVOID Context)
{
  __int64 v6; // rax
  char v7; // bl
  struct DXGGLOBAL *Global; // r14
  int DisplayModeResetNeededDueToHdrPowerPolicy; // esi
  __int64 v10; // rcx
  DXGGLOBAL *v11; // rax
  struct DXGSESSIONDATA *SessionData; // rbp
  _QWORD **v13; // r14
  _QWORD *v14; // rdi
  _QWORD *v15; // rbx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  DXGGLOBAL *v18; // rcx
  _BYTE v20[16]; // [rsp+50h] [rbp-28h] BYREF
  char v21; // [rsp+90h] [rbp+18h] BYREF

  if ( ValueLength < 4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7367;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"ValueLength >= sizeof(DWORD)", 7367LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *Value >= 2u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7368;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(*(DWORD*)pValue == 0) || (*(DWORD*)pValue == 1)",
      7368LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_ADVANCED_COLOR_QUALITY_BIAS.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_ADVANCED_COLOR_QUALITY_BIAS.Data1 )
    v6 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_ADVANCED_COLOR_QUALITY_BIAS.Data4;
  if ( !v6 )
  {
    v7 = *Value != 0;
    if ( v7 != *((_BYTE *)DXGGLOBAL::GetGlobal() + 305124) )
    {
      *((_BYTE *)DXGGLOBAL::GetGlobal() + 305124) = v7;
      v21 = 0;
      Global = DXGGLOBAL::GetGlobal();
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGGLOBAL *)((char *)Global + 672), 0);
      DisplayModeResetNeededDueToHdrPowerPolicy = 0;
      if ( (PEPROCESS)PsGetCurrentProcess(v10) == PsInitialSystemProcess )
      {
        SessionData = 0LL;
      }
      else
      {
        v11 = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(v11);
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      v13 = (_QWORD **)((char *)Global + 768);
      v14 = *v13;
LABEL_13:
      while ( v14 != v13 && v14 && !DisplayModeResetNeededDueToHdrPowerPolicy )
      {
        v15 = v14;
        v14 = (_QWORD *)*v14;
        _m_prefetchw(v15 + 3);
        v16 = v15[3];
        while ( v16 )
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange64(v15 + 3, v16 + 1, v16);
          if ( v17 == v16 )
          {
            if ( v15[390] )
            {
              if ( DxgkpCanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v15) )
                DisplayModeResetNeededDueToHdrPowerPolicy = FindDisplayModeResetNeededDueToHdrPowerPolicy(
                                                              (struct DXGADAPTER *)v15,
                                                              &v21);
            }
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
            goto LABEL_13;
          }
        }
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
      if ( DisplayModeResetNeededDueToHdrPowerPolicy == -2147483622 && v21 )
      {
        DXGGLOBAL::GetGlobal();
        DXGGLOBAL::HdrPowerPolicyChangeCallout(v18);
      }
    }
  }
  return 0LL;
}
