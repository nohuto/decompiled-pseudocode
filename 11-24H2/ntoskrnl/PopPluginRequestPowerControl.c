/*
 * XREFs of PopPluginRequestPowerControl @ 0x1404A513C
 * Callers:
 *     PoFxPowerControl @ 0x1403A58C0 (PoFxPowerControl.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginRequestPowerControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  _QWORD v10[6]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]
  __int64 v12; // [rsp+58h] [rbp-10h]

  v7 = *(_QWORD *)(a1 + 72);
  v8 = -1073741822;
  v12 = 0LL;
  v11 = 0LL;
  v10[0] = v7;
  v10[4] = a5;
  v10[1] = a2;
  v10[5] = a6;
  v10[2] = a3;
  v10[3] = a4;
  if ( (unsigned __int8)guard_dispatch_icall_no_overrides(14LL, v10) == 1 )
  {
    if ( a7 )
      *a7 = v11;
    return (unsigned int)v12;
  }
  return v8;
}
