/*
 * XREFs of ?SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z @ 0x18005AD40
 * Callers:
 *     ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x18005AA10 (-OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 *     ?OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInputBuffer@@PEBUGameInputGamepadState@@PEBUGameInputUiNavigationState@@@Z @ 0x180086720 (-OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInp.c)
 *     ?OnIrButton@GameControllerRawInputProvider@@UEAAXI_K0W4GipIrCode@@W4GipIrStatus@@@Z @ 0x1800CE290 (-OnIrButton@GameControllerRawInputProvider@@UEAAXI_K0W4GipIrCode@@W4GipIrStatus@@@Z.c)
 *     ?OnVirtualKey@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x1800CE4F0 (-OnVirtualKey@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GameControllerRawInputProvider::SetTimestampsFromInput(
        GameControllerRawInputProvider *this,
        unsigned __int64 a2,
        struct InputInfo *a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v7; // rdi
  DWORD TickCount; // ecx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  LARGE_INTEGER v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v11.QuadPart = 0LL;
  if ( QueryPerformanceCounter(&v11) && GameControllerRawInputProvider::s_qpcTime )
    v7 = qword_180250DC8
       * (v11.QuadPart % (unsigned __int64)GameControllerRawInputProvider::s_qpcTime)
       / GameControllerRawInputProvider::s_qpcTime
       + qword_180250DC8 * (v11.QuadPart / (unsigned __int64)GameControllerRawInputProvider::s_qpcTime);
  else
    v7 = 1000LL * GetTickCount();
  TickCount = GetTickCount();
  v9 = *((_DWORD *)this + 38);
  v10 = TickCount - (v7 - a2) / 0x3E8;
  if ( v10 >= v9 )
    v9 = v10;
  *((_DWORD *)this + 38) = v9;
  *((_DWORD *)a3 + 2) = v9;
  if ( GameControllerRawInputProvider::s_qpcTime )
    v4 = GameControllerRawInputProvider::s_qpcTime * (a2 % qword_180250DC8) / qword_180250DC8
       + GameControllerRawInputProvider::s_qpcTime * (a2 / qword_180250DC8);
  *((_QWORD *)a3 + 2) = v4;
}
