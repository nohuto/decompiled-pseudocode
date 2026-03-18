/*
 * XREFs of NtUserEnsureDpiServerInfoForDpi @ 0x140294870
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x14027A000 (Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline.c)
 *     GetDpiServerInfoForDpi @ 0x1402F18D4 (GetDpiServerInfoForDpi.c)
 *     IsDpiValidPlateau @ 0x1402F19FC (IsDpiValidPlateau.c)
 */

__int64 __fastcall NtUserEnsureDpiServerInfoForDpi(unsigned __int16 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v1 = a1;
  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  v6[0] = 0;
  v7 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v6, v3);
  if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline()
    && (unsigned __int8)IsDpiValidPlateau(v1) )
  {
    LOBYTE(v2) = GetDpiServerInfoForDpi((unsigned __int16)v1) != 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v6);
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
