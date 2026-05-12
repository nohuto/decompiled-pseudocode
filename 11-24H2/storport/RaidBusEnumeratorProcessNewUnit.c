/*
 * XREFs of RaidBusEnumeratorProcessNewUnit @ 0x14002FCD8
 * Callers:
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x140056074 (RaidBusEnumeratorProcessModifiedNodes.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     McTemplateK0zqjuuusssz_EtwWriteTransfer @ 0x140023F6C (McTemplateK0zqjuuusssz_EtwWriteTransfer.c)
 *     RaidUnitAssignIdentity @ 0x14002FE48 (RaidUnitAssignIdentity.c)
 *     RaidAdapterInsertUnit @ 0x14002FF2C (RaidAdapterInsertUnit.c)
 *     RaidStartUnit @ 0x1400532A4 (RaidStartUnit.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

char __fastcall RaidBusEnumeratorProcessNewUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  char v6; // al
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  int v9; // eax
  KIRQL v10; // di
  _DWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  const wchar_t *v14; // r8

  v2 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 104) = *(_DWORD *)(a2 + 4);
  v5 = *(_QWORD *)(v2 + 24);
  *(_WORD *)(v2 + 96) = 1;
  *(_DWORD *)(v2 + 100) = 4;
  *(_WORD *)(v2 + 98) = *(_WORD *)(v5 + 56);
  RaidUnitAssignIdentity(v2, a2 + 32);
  v6 = *(_BYTE *)(v2 + 504) & 0xF7;
  *(_DWORD *)(v2 + 56) = 2;
  *(_BYTE *)(v2 + 504) = v6 | 4;
  *(_BYTE *)(v2 + 757) = 1;
  v7 = *(_QWORD *)(v2 + 808);
  do
  {
    if ( (v7 & 3) != 0 )
      break;
    v8 = v7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 808), v7 | 2, v7);
  }
  while ( v8 != v7 );
  if ( *(_QWORD *)(v2 + 32) && RaidIsUnitControlSupported(v2, 31) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v2 + 32) + 24LL));
    *(_DWORD *)(*(_QWORD *)(v2 + 32) + 80LL) |= 0x20u;
    v11 = *(_DWORD **)(v2 + 24);
    if ( *v11 == 1094997074 )
    {
      v12 = (__int64)(v11 + 94);
    }
    else if ( *v11 == 1314275652 )
    {
      v12 = (__int64)(v11 + 42);
    }
    else
    {
      v12 = 0LL;
    }
    RaCallMiniportUnitControl(v12);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v2 + 32) + 24LL), v10);
  }
  if ( *(_QWORD *)(*(_QWORD *)a1 + 4880LL)
    && _bittest64(*(const signed __int64 **)(*(_QWORD *)a1 + 4872LL), *(unsigned __int8 *)(a2 + 4)) )
  {
    *(_DWORD *)(v2 + 1952) |= 1u;
  }
  RaidAdapterInsertUnit(*(_QWORD *)(v2 + 24), v2);
  RaidStartUnit(v2);
  *(_DWORD *)(v2 + 3432) = *(_DWORD *)(*(_QWORD *)(v2 + 24) + 4276LL);
  LOBYTE(v9) = RaidIsUnitControlSupported(v2, 12);
  if ( (_BYTE)v9 )
  {
    v9 = RaCallMiniportUnitControl(*(_QWORD *)(v2 + 24) + 376LL);
    if ( v9 >= 0 )
      LOBYTE(v9) = -1;
  }
  if ( (byte_140171466 & 1) != 0 )
  {
    v13 = *(_QWORD *)(v2 + 24);
    v14 = (const wchar_t *)&unk_140151214;
    if ( *(_QWORD *)(v13 + 5080) )
      v14 = *(const wchar_t **)(v13 + 5080);
    LOBYTE(v9) = McTemplateK0zqjuuusssz_EtwWriteTransfer(
                   v2 + 177,
                   v2 + 168,
                   (__int64)v14,
                   *(const wchar_t **)(v13 + 4720),
                   *(_DWORD *)(v13 + 56),
                   v13 + 5064,
                   *(_BYTE *)(v2 + 104),
                   *(_BYTE *)(v2 + 105),
                   *(_BYTE *)(v2 + 106),
                   (const char *)(v2 + 168),
                   (const char *)(v2 + 177),
                   (const char *)(v2 + 242),
                   v14);
  }
  return v9;
}
