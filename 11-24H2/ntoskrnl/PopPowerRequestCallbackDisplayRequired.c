/*
 * XREFs of PopPowerRequestCallbackDisplayRequired @ 0x140903ED0
 * Callers:
 *     <none>
 * Callees:
 *     TtmNotifySessionDisplayRequiredChange @ 0x140903D68 (TtmNotifySessionDisplayRequiredChange.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1409048E0 (PoEnergyContextUpdateComponentPower.c)
 *     TtmIsEnabled @ 0x1409BBDE8 (TtmIsEnabled.c)
 *     PopInvokeWin32Callout @ 0x1409BE358 (PopInvokeWin32Callout.c)
 */

void __fastcall PopPowerRequestCallbackDisplayRequired(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-40h] BYREF
  __int128 v7; // [rsp+30h] [rbp-30h]
  int *v8; // [rsp+40h] [rbp-20h]
  __int64 v9; // [rsp+48h] [rbp-18h]
  int *v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+80h] [rbp+20h] BYREF
  int v12; // [rsp+90h] [rbp+30h] BYREF

  v11 = 0;
  v5 = *(_QWORD *)(a1 + 136);
  DWORD1(v6) = 0;
  PoEnergyContextUpdateComponentPower(v5, 12LL);
  if ( (unsigned __int8)TtmIsEnabled() )
  {
    TtmNotifySessionDisplayRequiredChange(*(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 36), a3);
  }
  else
  {
    v7 = 0LL;
    LODWORD(v7) = 2;
    v12 = a3 != 0 ? 1 : -1;
    BYTE4(v7) = 0;
    v6 = 0LL;
    DWORD2(v7) = 4;
    v8 = &v12;
    v9 = 4LL;
    v10 = &v11;
    PopInvokeWin32Callout(5LL, &v6, 1LL);
  }
}
