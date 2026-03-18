/*
 * XREFs of PopPluginRequestComponentIdleConstraints @ 0x1405CDCC8
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1404BF148 (PopPepInitializeVetoMasks.c)
 * Callees:
 *     PopDiagTraceFxComponentIdleConstraints @ 0x1405D0428 (PopDiagTraceFxComponentIdleConstraints.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginRequestComponentIdleConstraints(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  char v4; // bl
  __int64 v6; // r10
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+38h] [rbp-10h]

  HIDWORD(v12) = 0;
  v4 = 0;
  HIDWORD(v14) = 0;
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 == PopFxProcessorPlugin )
  {
    if ( v6 )
    {
      LODWORD(v12) = a2;
      v11 = *(_QWORD *)(a1 + 72);
      LODWORD(v14) = a4;
      v4 = guard_dispatch_icall_no_overrides(27LL);
      if ( v4 )
        PopDiagTraceFxComponentIdleConstraints(a1, a2, a3, a4, v11, v12, a3, v14);
    }
  }
  return v4;
}
