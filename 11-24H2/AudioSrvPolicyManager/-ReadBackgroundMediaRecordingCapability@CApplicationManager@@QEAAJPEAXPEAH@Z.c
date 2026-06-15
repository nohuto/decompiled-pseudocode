/*
 * XREFs of ?ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x180038BD4
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 */

__int64 __fastcall CApplicationManager::ReadBackgroundMediaRecordingCapability(
        CApplicationManager *this,
        void *a2,
        int *a3)
{
  signed int v4; // eax
  bool v5; // sf
  CApplicationManager *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  *a3 = 0;
  LOBYTE(v7) = 0;
  v4 = CapabilityCheck(a2, L"backgroundMediaRecording", &v7);
  v5 = v4 < 0;
  if ( v4 > 0 )
  {
    v4 = (unsigned __int16)v4 | 0x80070000;
    v5 = v4 < 0;
  }
  if ( v5
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids, v4);
  }
  if ( (_BYTE)v7 )
    *a3 = 1;
  return 0LL;
}
