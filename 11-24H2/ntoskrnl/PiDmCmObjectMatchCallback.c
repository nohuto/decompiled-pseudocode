/*
 * XREFs of PiDmCmObjectMatchCallback @ 0x1408CD390
 * Callers:
 *     PiDmGetObjectListCallback @ 0x1408CD240 (PiDmGetObjectListCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1408CE4D0 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1408CEA40 (PiPnpRtlEnumeratorFilterCallback.c)
 */

__int64 __fastcall PiDmCmObjectMatchCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 (__fastcall *v3)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  char v8; // al

  v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))a2;
  if ( !*(_QWORD *)a2 )
  {
    *a3 = 1;
    return 0LL;
  }
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(unsigned int *)(a2 + 16);
  v7 = *(_QWORD *)(a1 + 16);
  if ( v3 == PiPnpRtlInterfaceFilterCallback )
  {
    v8 = PiPnpRtlInterfaceFilterCallback(*(_QWORD *)&PiPnpRtlCtx, v7, v6, v5);
LABEL_4:
    *a3 = v8;
    return 0LL;
  }
  if ( v3 != PiPnpRtlEnumeratorFilterCallback )
  {
    v8 = guard_dispatch_icall_no_overrides(*(_QWORD *)&PiPnpRtlCtx, v7);
    goto LABEL_4;
  }
  *a3 = PiPnpRtlEnumeratorFilterCallback(*(_QWORD *)&PiPnpRtlCtx, v7, v6, v5);
  return 0LL;
}
