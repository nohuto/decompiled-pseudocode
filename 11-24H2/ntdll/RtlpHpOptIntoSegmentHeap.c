/*
 * XREFs of RtlpHpOptIntoSegmentHeap @ 0x180009E48
 * Callers:
 *     RtlInitializeHeapManager @ 0x180114300 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x180008FD0 (RtlQueryPackageClaims.c)
 *     RtlpHpFindImageNameInList @ 0x1800094E4 (RtlpHpFindImageNameInList.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800099A0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlGetSuiteMask @ 0x18000BBA0 (RtlGetSuiteMask.c)
 *     _wcsnicmp @ 0x180120FE0 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpOptIntoSegmentHeap(unsigned __int16 *a1, unsigned int *a2)
{
  struct _PEB *v4; // rsi
  _BYTE *pShimData; // rax
  unsigned int v6; // ebx
  _PS_PKG_CLAIM PkgClaim; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v9[24]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR String1[16]; // [rsp+110h] [rbp+10h] BYREF

  if ( (RtlpLowFragHeapGlobalFlags & 8) != 0 )
    return 0LL;
  if ( (RtlpLowFragHeapGlobalFlags & 0x10) == 0 )
  {
    v4 = NtCurrentPeb();
    *a2 = 0;
    PkgClaim = 0LL;
    v9[0] = L"svchost.exe";
    v9[1] = L"runtimebroker.exe";
    v9[2] = L"csrss.exe";
    v9[3] = L"smss.exe";
    v9[4] = L"services.exe";
    v9[5] = L"lsass.exe";
    v9[6] = L"wininit.exe";
    v9[7] = L"msmpeng.exe";
    v9[8] = L"nissrv.exe";
    v9[9] = L"dwm.exe";
    v9[10] = L"rdpinit.exe";
    v9[11] = L"searchindexer.exe";
    v9[12] = L"smartscreen.exe";
    v9[13] = L"sihost.exe";
    v9[14] = L"systemsettingsbroker.exe";
    v9[15] = L"settingsynchost.exe";
    v9[16] = L"securityhealthservice.exe";
    v9[17] = L"audiodg.exe";
    v9[18] = L"telemetryhost.exe";
    v9[19] = L"rdpshell.exe";
    v9[20] = L"winlogon.exe";
    v9[21] = L"containersettingsworker.exe";
    v9[22] = L"vmcomputeagent.exe";
    v9[23] = L"rdpclip.exe";
    pShimData = v4->pShimData;
    if ( pShimData && (pShimData[4530] & 4) != 0 )
    {
      if ( (pShimData[4522] & 0x40) != 0 )
      {
        v6 = 1;
        *a2 = 1;
        return v6;
      }
      return 0;
    }
    if ( (RtlGetSuiteMask() & 0x10000) == 0 )
    {
      if ( RtlQueryActivationContextApplicationSettings(
             0,
             0LL,
             (PWSTR)L"http://schemas.microsoft.com/SMI/2020/WindowsSettings",
             (PWSTR)L"heapType",
             String1,
             0xFuLL,
             0LL) >= 0
        && !wcsnicmp(String1, L"SegmentHeap", 0xFuLL) )
      {
        v6 = 1;
        *a2 = 1;
        return v6;
      }
      if ( (v4->BitField & 0x10) != 0 )
      {
        v6 = 1;
        if ( RtlQueryPackageClaims((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0LL, 0LL, 0LL, 0LL, 0LL, &PkgClaim, 0LL) < 0
          || (PkgClaim.Flags & 0x88000) == 0 )
        {
          return v6;
        }
        return 0;
      }
      if ( !v4->ProcessParameters->HeapPartitionName.Buffer
        && (!a1 || !(unsigned int)RtlpHpFindImageNameInList(a1, (__int64)v9)) )
      {
        return 0;
      }
    }
    return 1;
  }
  *a2 = ((unsigned int)RtlpLowFragHeapGlobalFlags >> 5) & 1;
  return 1LL;
}
