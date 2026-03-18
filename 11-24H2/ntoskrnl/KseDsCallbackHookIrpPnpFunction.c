/*
 * XREFs of KseDsCallbackHookIrpPnpFunction @ 0x1405CAC20
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventPnpIrp @ 0x1405CB8E0 (KsepDsEventPnpIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KseDsCallbackHookIrpPnpFunction(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v7; // ebp
  __int64 (__fastcall *v8)(); // r8
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx

  v4 = *(_QWORD *)(a2 + 184);
  v7 = *(unsigned __int8 *)(v4 + 1);
  if ( !*(_BYTE *)(v4 + 1) )
  {
    v8 = KseDsCompletionHookForStartDevice;
LABEL_5:
    guard_dispatch_icall_no_overrides(a1, a2, v8, 0LL);
    goto LABEL_6;
  }
  if ( v7 == 4 )
  {
    v8 = KseDsCompletionHookForStopDevice;
    goto LABEL_5;
  }
LABEL_6:
  guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2, a3, a4);
  v11 = guard_dispatch_icall_no_overrides(a1, a2, v9, v10);
  KsepDsEventPnpIrp(*(_QWORD *)(a1 + 8), a1, a2, v7, v11);
  return v11;
}
