/*
 * XREFs of IopCompletePageWrite @ 0x140370E60
 * Callers:
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 * Callees:
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     MiFlushComplete @ 0x140370EF0 (MiFlushComplete.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopCompletePageWrite(__int64 a1)
{
  __int64 v1; // rcx
  __int64 (__fastcall *v2)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r9

  v1 = a1 - 120;
  if ( *(_BYTE *)(v1 + 65) || (*(_DWORD *)(v1 + 48) & 0xC0000000) != 0xC0000000 )
  {
    *(_OWORD *)*(_QWORD *)(v1 + 72) = *(_OWORD *)(v1 + 48);
    v2 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v1 + 88);
    v3 = *(_QWORD *)(v1 + 96);
    v4 = *(_QWORD *)(v1 + 72);
    IoFreeIrp((PIRP)v1);
    if ( v2 == MiFlushComplete )
      MiFlushComplete(v3, v4, 0LL);
    else
      guard_dispatch_icall_no_overrides(v3, v4, 0LL, v5);
  }
  else
  {
    IoFreeIrp((PIRP)v1);
  }
}
