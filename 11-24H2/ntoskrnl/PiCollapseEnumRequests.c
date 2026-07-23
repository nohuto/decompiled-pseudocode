/*
 * XREFs of PiCollapseEnumRequests @ 0x14049DC6C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140A39130 (PiMarkDeviceTreeForReenumeration.c)
 */

bool __fastcall PiCollapseEnumRequests(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  KIRQL v4; // r9
  __int64 **v5; // rsi
  __int64 v6; // rdx
  __int64 *i; // rdi
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 *v11; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PnpEnumerationRequestList;
  v4 = v2;
  v5 = *(__int64 ***)(a1 + 8);
  while ( (__int64 *)v3 != &PnpEnumerationRequestList )
  {
    v9 = *(_QWORD *)v3;
    if ( *(_BYTE *)(v3 + 28) )
      break;
    if ( *(_DWORD *)(v3 + 24) == 9 || *(_DWORD *)(v3 + 24) == 10 || *(_DWORD *)(v3 + 24) == 14 )
    {
      if ( *(_QWORD *)(v9 + 8) != v3
        || (v10 = *(__int64 **)(v3 + 8), *v10 != v3)
        || (*v10 = v9, *(_QWORD *)(v9 + 8) = v10, v11 = *(__int64 **)(a1 + 8), *v11 != a1) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v3 = a1;
      *(_QWORD *)(v3 + 8) = v11;
      *v11 = v3;
      *(_QWORD *)(a1 + 8) = v3;
    }
    v3 = v9;
  }
  KeReleaseSpinLock(&PnpSpinLock, v4);
  for ( i = *v5; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    LOBYTE(v6) = 1;
    PiMarkDeviceTreeForReenumeration(*(_QWORD *)(*(_QWORD *)(i[2] + 312) + 40LL), v6);
    ObfDereferenceObjectWithTag((PVOID)i[2], 0x746C6644u);
    i[2] = 0LL;
  }
  return v5 != *(__int64 ***)(a1 + 8);
}
