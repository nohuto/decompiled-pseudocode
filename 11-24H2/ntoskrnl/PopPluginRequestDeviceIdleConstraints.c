/*
 * XREFs of PopPluginRequestDeviceIdleConstraints @ 0x1404C8890
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1404BD99C (PopPepInitializeVetoMasks.c)
 * Callees:
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x1405D5050 (PopDiagTraceFxDeviceIdleConstraints.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginRequestDeviceIdleConstraints(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // r9
  unsigned int v5; // esi
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+34h] [rbp-14h]

  v12 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = a3;
  if ( v4 == PopFxProcessorPlugin )
  {
    if ( v4 )
    {
      v8 = *(_QWORD *)(a1 + 72);
      v10[1] = a2;
      v10[0] = v8;
      v11 = a3;
      v3 = guard_dispatch_icall_no_overrides(26LL, v10, a3, v4);
      if ( v3 )
        PopDiagTraceFxDeviceIdleConstraints(a1, a2, v5);
    }
  }
  return v3;
}
