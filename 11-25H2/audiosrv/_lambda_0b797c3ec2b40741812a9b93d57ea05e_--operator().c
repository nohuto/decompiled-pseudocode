/*
 * XREFs of _lambda_0b797c3ec2b40741812a9b93d57ea05e_::operator() @ 0x1800833AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___::Run @ 0x1800A5690 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___--Run.c)
 * Callees:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180013568 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x180054130 (-CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ.c)
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x180081980 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800A5154 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x1801488E4 (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 */

void __fastcall lambda_0b797c3ec2b40741812a9b93d57ea05e_::operator()(__int64 a1)
{
  AtmosCheck *v2; // rcx
  bool *v3; // rdx
  int v4; // eax
  AtmosCheck *v5; // rax
  const WCHAR *v6; // r8
  char v7; // cl
  int *v8; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  AtmosCheck *v10; // rcx
  int v11; // eax
  _BYTE *v12; // rax
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  AtmosCheck::RefreshPlatformLicenses(*(AtmosCheck **)a1);
  v2 = *(AtmosCheck **)a1;
  v3 = *(bool **)(a1 + 24);
  if ( *(_BYTE *)(*(_QWORD *)a1 + 217LL) )
  {
    **(_DWORD **)(a1 + 16) = AtmosCheck::PerformLicenseCheckForAllEndpoints(v2, v3);
    if ( !*(_BYTE *)(*(_QWORD *)a1 + 99LL) && AtmosCheck::CheckInstalledAppServicesAvailable(*(AtmosCheck **)a1) )
      *(_BYTE *)(*(_QWORD *)a1 + 99LL) = 1;
  }
  else
  {
    v4 = AtmosCheck::PerformLicenseCheckInternalLegacy(v2, v3);
    **(_DWORD **)(a1 + 16) = v4;
    if ( v4 >= 0 )
    {
      v5 = *(AtmosCheck **)a1;
      v6 = L"AudioSrvLicenseResult";
      pcbData = 4;
      v7 = *((_BYTE *)v5 + 100);
      pvData = 0;
      if ( !v7 )
        v6 = L"AudioDGLicenseResult";
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\AtmosLicenseDebug",
        v6,
        0x10u,
        0LL,
        &pvData,
        &pcbData);
      if ( pvData < 0 )
      {
        v8 = *(int **)(a1 + 8);
        *v8 = pvData;
        v8[1] = pvData;
        v8[2] = pvData;
        v8[3] = pvData;
      }
      v9 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a1 + 56LL);
      EnterCriticalSection(v9);
      v10 = *(AtmosCheck **)a1;
      v11 = *(_DWORD *)(*(_QWORD *)a1 + 184LL);
      if ( (v11 == 8 || v11 == 5) && !*((_BYTE *)v10 + 99) )
      {
        v12 = *(_BYTE **)(a1 + 24);
        *((_BYTE *)v10 + 99) = 1;
        *v12 = 1;
      }
      if ( v9 )
        LeaveCriticalSection(v9);
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)a1 + 100LL) || **(_BYTE **)(a1 + 24) )
    AtmosCheck::UpdateLicenseRefreshTimer(*(AtmosCheck **)a1);
}
