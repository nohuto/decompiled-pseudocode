/*
 * XREFs of ?ReadBackgroundAudioPlaybackCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18003AF3C
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800082D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 */

__int64 __fastcall CApplicationManager::ReadBackgroundAudioPlaybackCapability(
        CApplicationManager *this,
        void *a2,
        int *a3,
        int *a4)
{
  signed int v6; // eax
  bool v7; // sf
  CApplicationManager *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  *a3 = 0;
  *a4 = 0;
  LOBYTE(v9) = 0;
  v6 = CapabilityCheck(a2, L"backgroundMediaPlayback", &v9);
  v7 = v6 < 0;
  if ( v6 > 0 )
  {
    v6 = (unsigned __int16)v6 | 0x80070000;
    v7 = v6 < 0;
  }
  if ( v7
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_7ac9f868b6f432f4e1ddc0ca024d1633_Traceguids, v6);
  }
  if ( (_BYTE)v9 )
  {
    *a3 = 1;
    *a4 = 0;
  }
  return 0LL;
}
