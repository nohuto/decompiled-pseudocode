/*
 * XREFs of ?IsTargetPartOfMux@DISPLAY_MUX_PAIRING@@QEBAJU_LUID@@IPEAE1@Z @ 0x14008545C
 * Callers:
 *     ?CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z @ 0x140083BA4 (-CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z.c)
 *     ?IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z @ 0x140085410 (-IsTargetPartOfMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGpuChild@DISPLAY_MUX_PAIRING@@AEBA?AW4MUX_GPU_CHILD@@U_LUID@@I@Z @ 0x140084B3C (-GetGpuChild@DISPLAY_MUX_PAIRING@@AEBA-AW4MUX_GPU_CHILD@@U_LUID@@I@Z.c)
 *     ?IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ @ 0x1400853B4 (-IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ.c)
 */

__int64 __fastcall DISPLAY_MUX_PAIRING::IsTargetPartOfMux(
        DISPLAY_MUX_PAIRING *this,
        struct _LUID a2,
        __int64 a3,
        bool *a4,
        bool *a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r8d
  __int64 result; // rax
  int GpuChild; // edi
  __int64 v11; // r11
  int v12; // ebx

  if ( DISPLAY_MUX_PAIRING::IsOperational(this) )
  {
    GpuChild = DISPLAY_MUX_PAIRING::GetGpuChild(v7, v6, v8);
    if ( GpuChild )
    {
      v12 = *(_DWORD *)(*(_QWORD *)(v11 + 8) + 72LL);
      if ( !v12 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1833;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"CurrentMuxPosition != MUX_GPU_CHILD::NONE",
          1833LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( a4 )
        *a4 = GpuChild == v12;
      if ( a5 )
        *a5 = GpuChild != v12;
      return 0LL;
    }
    else
    {
      WdLogSingleEntry0(2LL);
      result = 3221225524LL;
      WdLogGlobalForLineNumber = 1827;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225534LL;
    WdLogGlobalForLineNumber = 1819;
  }
  return result;
}
