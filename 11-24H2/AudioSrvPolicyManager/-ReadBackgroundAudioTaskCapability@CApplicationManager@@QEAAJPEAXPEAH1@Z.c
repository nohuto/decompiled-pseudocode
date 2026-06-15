/*
 * XREFs of ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x180038A58
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008660 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManager::ReadBackgroundAudioTaskCapability(
        CApplicationManager *this,
        void *a2,
        int *a3,
        int *a4)
{
  HRESULT v7; // ebx
  int v8; // esi
  LPVOID ppv; // [rsp+50h] [rbp+8h] BYREF

  ppv = this;
  *a3 = 0;
  *a4 = 0;
  v7 = CoInitializeEx(0LL, 0);
  if ( v7 >= 0 )
  {
    ppv = 0LL;
    v7 = CoCreateInstance(&CLSID_BackgroundTaskCapability, 0LL, 1u, &GUID_d54e68c2_54cd_48b3_ad9a_3f4a4503ba80, &ppv);
    if ( v7 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(LPVOID, void *, __int64, int *))(*(_QWORD *)ppv + 48LL))(ppv, a2, 1LL, a3);
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      if ( *a3 )
        *a4 = 1;
      if ( v8 < 0
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids, v8);
        CoUninitialize();
        return (unsigned int)v7;
      }
    }
    CoUninitialize();
    if ( v7 >= 0 )
      return (unsigned int)v7;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids, v7);
  }
  AudPolicyLogError("CApplicationManager::ReadBackgroundAudioTaskCapability", 1159, v7);
  return (unsigned int)v7;
}
