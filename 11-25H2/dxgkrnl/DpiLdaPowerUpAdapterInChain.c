/*
 * XREFs of DpiLdaPowerUpAdapterInChain @ 0x14018517C
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1403C4AF0 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x14002A258 (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     DpiFdoSetAdapterPowerState @ 0x14040AB28 (DpiFdoSetAdapterPowerState.c)
 */

__int64 __fastcall DpiLdaPowerUpAdapterInChain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // r14d
  __int64 v7; // rdi
  unsigned int i; // edx

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(int *)(v2 + 24);
  v6 = *(_DWORD *)(v2 + 32);
  if ( v4 && *(_DWORD *)(v4 + 16) == 1953656900 && *(_DWORD *)(v4 + 20) == 3 )
  {
    v3 = DpiFdoSetAdapterPowerState(*(PDEVICE_OBJECT *)(v4 + 24), (POWER_STATE)v5, *(_DWORD *)(v2 + 32));
    if ( v3 < 0 )
    {
      WdLogSingleEntry1(3LL, v5);
      WdLogGlobalForLineNumber = 558;
      return (unsigned int)v3;
    }
    v7 = *(_QWORD *)(v4 + 2832);
    if ( !v7 )
    {
      WdLogSingleEntry1(3LL, 0LL);
      WdLogGlobalForLineNumber = 568;
      return (unsigned int)v3;
    }
    v4 = *(_QWORD *)(v7 + 64);
  }
  if ( *(_BYTE *)(v4 + 496) == 1 )
  {
    WdLogSingleEntry1(4LL, 0LL);
    WdLogGlobalForLineNumber = 586;
  }
  else
  {
    for ( i = 1; i < *(_DWORD *)(v4 + 2840); ++i )
    {
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 2832) + 8LL * i) + 64LL) + 284LL) != 1 )
      {
        WdLogSingleEntry1(4LL, 0LL);
        WdLogGlobalForLineNumber = 605;
        return (unsigned int)v3;
      }
    }
    v3 = DpiFdoSetAdapterPowerState(*(PDEVICE_OBJECT *)(v4 + 24), (POWER_STATE)v5, v6);
    if ( v3 < 0 )
    {
      WdLogSingleEntry1(3LL, v5);
      WdLogGlobalForLineNumber = 620;
    }
    if ( *(_BYTE *)(v4 + 484) )
      DpiSetDevicePowerTransitionStateAtPassiveLevel(v4, 0, 1);
  }
  return (unsigned int)v3;
}
