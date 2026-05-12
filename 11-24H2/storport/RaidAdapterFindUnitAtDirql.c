/*
 * XREFs of RaidAdapterFindUnitAtDirql @ 0x140017930
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x140018080 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x140018740 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetUnit @ 0x140019940 (RaidBusEnumeratorGetUnit.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     StorPortSetDeviceQueueDepth @ 0x140027440 (StorPortSetDeviceQueueDepth.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall RaidAdapterFindUnitAtDirql(__int64 a1, int a2)
{
  __int64 (__fastcall *v2)(_QWORD *); // r14
  __int64 (__fastcall *v3)(__int64, unsigned __int64); // r15
  unsigned __int64 v4; // rbp
  _QWORD **v5; // rsi
  __int64 v6; // rdi
  _QWORD *i; // rbx
  __int64 v8; // rax
  int v9; // eax

  v2 = *(__int64 (__fastcall **)(_QWORD *))(a1 + 192);
  v3 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(a1 + 200);
  v4 = BYTE2(a2) | (unsigned __int64)((((unsigned __int8)a2 << 8) | (unsigned int)BYTE1(a2)) << 8);
  v5 = (_QWORD **)(*(_QWORD *)(a1 + 184)
                 + 16LL * ((*(unsigned int (__fastcall **)(unsigned __int64))(a1 + 208))(v4) % *(_DWORD *)(a1 + 172)));
  v6 = 0LL;
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v8 = v2(i);
    v9 = v3(v8, v4);
    if ( !v9 )
      return i - 10;
    if ( v9 < 0 )
      return (_QWORD *)v6;
  }
  return (_QWORD *)v6;
}
