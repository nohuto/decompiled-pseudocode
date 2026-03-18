/*
 * XREFs of PiCollapseRebalanceRequests @ 0x1405A9590
 * Callers:
 *     PnpProcessRebalance @ 0x1405A97C8 (PnpProcessRebalance.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 */

bool __fastcall PiCollapseRebalanceRequests(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  KIRQL v4; // r8
  __int64 **v5; // rsi
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *i; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PnpEnumerationRequestList;
  v4 = v2;
  v5 = *(__int64 ***)(a1 + 8);
  while ( (__int64 *)v3 != &PnpEnumerationRequestList )
  {
    v6 = *(_QWORD *)v3;
    if ( *(_BYTE *)(v3 + 28) )
      break;
    if ( *(_DWORD *)(v3 + 24) == 6 && (*(_DWORD *)(v3 + 40) & 1) != 0 )
    {
      if ( *(_QWORD *)(v6 + 8) != v3
        || (v7 = *(__int64 **)(v3 + 8), *v7 != v3)
        || (*v7 = v6, *(_QWORD *)(v6 + 8) = v7, v8 = *(__int64 **)(a1 + 8), *v8 != a1) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v3 = a1;
      *(_QWORD *)(v3 + 8) = v8;
      *v8 = v3;
      *(_QWORD *)(a1 + 8) = v3;
    }
    v3 = v6;
  }
  KeReleaseSpinLock(&PnpSpinLock, v4);
  for ( i = *v5; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    ObfDereferenceObjectWithTag((PVOID)i[2], 0x746C6644u);
    i[2] = 0LL;
  }
  return v5 != *(__int64 ***)(a1 + 8);
}
