/*
 * XREFs of ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x140397F80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1401D45D8 (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x140398884 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 *     ?FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403988A4 (-FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
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
  DXGADAPTERLISTLOCK *v20[2]; // [rsp+50h] [rbp-28h] BYREF
  char v21; // [rsp+90h] [rbp+18h] BYREF

  if ( ValueLength < 4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7370;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"ValueLength >= sizeof(DWORD)", 7370LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *Value >= 2u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7371;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(*(DWORD*)pValue == 0) || (*(DWORD*)pValue == 1)",
      7371LL,
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
    if ( v7 != *((_BYTE *)DXGGLOBAL::GetGlobal() + 305204) )
    {
      *((_BYTE *)DXGGLOBAL::GetGlobal() + 305204) = v7;
      v21 = 0;
      Global = DXGGLOBAL::GetGlobal();
      DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK(
        (DXGAUTOADAPTERLISTLOCK *)v20,
        (struct DXGGLOBAL *)((char *)Global + 672));
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
      DXGAUTOADAPTERLISTLOCK::AcquireShared(v20);
      v13 = (_QWORD **)((char *)Global + 800);
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
      DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v20);
      if ( DisplayModeResetNeededDueToHdrPowerPolicy == -2147483622 && v21 )
      {
        DXGGLOBAL::GetGlobal();
        DXGGLOBAL::HdrPowerPolicyChangeCallout(v18);
      }
    }
  }
  return 0LL;
}
