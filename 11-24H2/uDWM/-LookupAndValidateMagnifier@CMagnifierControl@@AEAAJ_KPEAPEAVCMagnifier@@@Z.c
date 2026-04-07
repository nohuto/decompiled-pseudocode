/*
 * XREFs of ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x18006B640
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18006AD70 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18006B50C (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x18006B6A0 (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 */

__int64 __fastcall CMagnifierControl::LookupAndValidateMagnifier(
        CMagnifierControl *this,
        __int64 a2,
        struct CMagnifier **a3)
{
  __int64 Element; // rax
  unsigned int v5; // ebx

  Element = CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement((char *)this + 56);
  if ( Element )
  {
    *a3 = *(struct CMagnifier **)(Element + 8);
    return 0;
  }
  else
  {
    v5 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180105630, 1LL, -2147023728, 0x1FFu, 0LL);
  }
  return v5;
}
