/*
 * XREFs of PopPowerRequestCallbackDisplayRequired @ 0x14099B3A0
 * Callers:
 *     <none>
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x14099B564 (PoEnergyContextUpdateComponentPower.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x14099D3C4 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmIsEnabled @ 0x1409A2438 (TtmIsEnabled.c)
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopPowerRequestCallbackDisplayRequired(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int128 v9; // [rsp+30h] [rbp-30h]
  int *v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+48h] [rbp-18h]
  int *v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+80h] [rbp+20h] BYREF
  int v14; // [rsp+90h] [rbp+30h] BYREF

  v13 = 0;
  v5 = *(_QWORD *)(a1 + 136);
  DWORD1(v8) = 0;
  PoEnergyContextUpdateComponentPower(v5, 12LL);
  if ( (unsigned __int8)TtmIsEnabled() )
  {
    LOBYTE(v6) = a3;
    return TtmNotifySessionDisplayRequiredChange(*(unsigned int *)(a1 + 16), *(unsigned int *)(a1 + 36), v6);
  }
  else
  {
    v9 = 0LL;
    LODWORD(v9) = 2;
    v14 = a3 != 0 ? 1 : -1;
    BYTE4(v9) = 0;
    v8 = 0LL;
    DWORD2(v9) = 4;
    v10 = &v14;
    v11 = 4LL;
    v12 = &v13;
    return PopInvokeWin32Callout(5LL, &v8, 1LL);
  }
}
