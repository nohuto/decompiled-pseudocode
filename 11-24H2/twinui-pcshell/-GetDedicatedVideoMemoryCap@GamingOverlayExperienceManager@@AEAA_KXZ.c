/*
 * XREFs of ?GetDedicatedVideoMemoryCap@GamingOverlayExperienceManager@@AEAA_KXZ @ 0x18034F6A8
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803572D4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?SetupDiDestroyDeviceInfoList@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180347E04 (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-SetupDiDestroyDeviceInfoList@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetDedicatedVideoMemoryCap(GamingOverlayExperienceManager *this)
{
  __int64 v1; // rsi
  unsigned int i; // r14d
  char *ClassDevsW; // rbx
  signed int j; // edi
  void *ppFactory; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v7; // [rsp+30h] [rbp-D8h] BYREF
  void *DeviceInfoData[6]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v9[272]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+178h] [rbp+70h]
  __int64 v11; // [rsp+180h] [rbp+78h]

  v1 = 0LL;
  ppFactory = 0LL;
  memset(&DeviceInfoData[1], 0, 32);
  if ( CreateDXGIFactory1(&GUID_770aae78_f26f_4dba_a829_253c83d1b387, &ppFactory) >= 0 )
  {
    v7 = 0LL;
    for ( i = 0;
          (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, i, &v7) != -2005270526;
          ++i )
    {
      memset_0(v9, 0, 0x138uLL);
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 80LL))(v7, v9);
      memset(&DeviceInfoData[1], 0, 32);
      ClassDevsW = (char *)SetupDiGetClassDevsW(&ClassGuid, 0LL, 0LL, 0xAu);
      DeviceInfoData[0] = ClassDevsW;
      if ( (unsigned __int64)(ClassDevsW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LODWORD(DeviceInfoData[1]) = 32;
        for ( j = 0;
              SetupDiEnumDeviceInfo(ClassDevsW, j, (PSP_DEVINFO_DATA)&DeviceInfoData[1])
           || GetLastError() != 259 && j <= 1000;
              ++j )
        {
          ;
        }
      }
      v1 += v10 + v11;
      wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int SetupDiDestroyDeviceInfoList(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int SetupDiDestroyDeviceInfoList(void *)>>(DeviceInfoData);
    }
  }
  return v1;
}
