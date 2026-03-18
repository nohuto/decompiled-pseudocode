/*
 * XREFs of ?UpdateMuxProperties@DISPLAY_MUX_PAIRING@@AEAAJW4MUX_GPU_CHILD@@_N@Z @ 0x14008880C
 * Callers:
 *     ?CheckForNewMuxPairing@DISPLAY_MUX_PAIRING@@AEAAJXZ @ 0x140083540 (-CheckForNewMuxPairing@DISPLAY_MUX_PAIRING@@AEAAJXZ.c)
 *     ?DrtToggleMuxPosition@DISPLAY_MUX_PAIRING@@QEAAJXZ @ 0x140084614 (-DrtToggleMuxPosition@DISPLAY_MUX_PAIRING@@QEAAJXZ.c)
 *     ?SwitchMux@DISPLAY_MUX_PAIRING@@QEAAJU_LUID@@I@Z @ 0x1400884C0 (-SwitchMux@DISPLAY_MUX_PAIRING@@QEAAJU_LUID@@I@Z.c)
 *     ?UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ @ 0x140088764 (-UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ.c)
 * Callees:
 *     ?SetDeviceProperties@DISPLAY_MUX_DEVICE@@QEAAJPEBUDXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP@@@Z @ 0x140087B60 (-SetDeviceProperties@DISPLAY_MUX_DEVICE@@QEAAJPEBUDXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DISPLAY_MUX_PAIRING::UpdateMuxProperties(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // [rsp+28h] [rbp-29h] BYREF
  int v11; // [rsp+30h] [rbp-21h]
  __int64 v12; // [rsp+38h] [rbp-19h] BYREF
  int v13; // [rsp+40h] [rbp-11h]
  _QWORD v14[10]; // [rsp+48h] [rbp-9h] BYREF

  if ( a2 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 && (v8 = *(_QWORD *)(a1 + 24)) != 0 )
    {
      v10 = *(_QWORD *)(v7 + 16);
      v11 = *(_DWORD *)(v7 + 356);
      v12 = *(_QWORD *)(v8 + 16);
      v13 = *(_DWORD *)(v8 + 356);
      memset(v14, 0, 0x48uLL);
      v14[6] = 0x100000003LL;
      v9 = &v10;
      if ( a2 != 1 )
        v9 = &v12;
      v14[7] = v9;
      LODWORD(v14[8]) = 12;
      if ( !a3 )
      {
        v14[0] = 0x100000000LL;
        v14[1] = &v10;
        v14[4] = &v12;
        LODWORD(v14[2]) = 12;
        v14[3] = 0x100000001LL;
        LODWORD(v14[5]) = 12;
      }
      return DISPLAY_MUX_DEVICE::SetDeviceProperties(
               *(DISPLAY_MUX_DEVICE **)(a1 + 8),
               (const struct DXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP *)v14);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      result = 3221225534LL;
      WdLogGlobalForLineNumber = 2018;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 2011;
  }
  return result;
}
