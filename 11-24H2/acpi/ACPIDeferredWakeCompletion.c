/*
 * XREFs of ACPIDeferredWakeCompletion @ 0x14004AB10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalDecrementIrpReferenceCount @ 0x14001B414 (ACPIInternalDecrementIrpReferenceCount.c)
 *     WPP_RECORDER_SF_qqDqss @ 0x14005E680 (WPP_RECORDER_SF_qqDqss.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

LONG __fastcall ACPIDeferredWakeCompletion(__int64 a1, __int64 a2, int a3)
{
  void *v5; // r9
  __int64 v6; // rdx
  void (__fastcall *v7)(_QWORD, __int64); // rax

  if ( a3 < 0 )
  {
    v5 = &unk_1400C3BB3;
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( (v6 & 0x200000000000LL) != 0 && (v6 & 0x400000000000LL) != 0 )
        v5 = *(void **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqDqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        a3,
        (_DWORD)v5);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 1120), 0xFFFFFFFFFFFFCFFFuLL);
  }
  v7 = *(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 16LL);
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v7(*(_QWORD *)(a1 + 768), a2);
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
