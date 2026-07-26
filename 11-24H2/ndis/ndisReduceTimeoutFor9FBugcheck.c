/*
 * XREFs of ndisReduceTimeoutFor9FBugcheck @ 0x140153240
 * Callers:
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140152C80 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1401530F0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 * Callees:
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 */

char __fastcall ndisReduceTimeoutFor9FBugcheck(__int64 a1, unsigned int *a2)
{
  __int64 v3; // r8
  _DEVICE_OBJECT *v4; // rcx
  ULONG v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  ULONG SecondsRemaining; // [rsp+30h] [rbp+8h] BYREF

  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)(a1 + 120)) & 0x100) != 0 )
    return 0;
  v4 = *(_DEVICE_OBJECT **)(v3 + 3832);
  SecondsRemaining = 0;
  if ( !PoQueryWatchdogTime(v4, &SecondsRemaining) )
    return 0;
  v5 = SecondsRemaining;
  if ( SecondsRemaining < 3 )
    v5 = 3;
  v6 = 1000 * v5;
  v7 = 3000;
  v8 = v6 - 3000;
  if ( v8 >= 0xBB8 )
    v7 = v8;
  if ( v7 < *a2 )
    *a2 = v7;
  return 1;
}
