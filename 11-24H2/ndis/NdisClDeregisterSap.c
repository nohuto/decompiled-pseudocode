/*
 * XREFs of NdisClDeregisterSap @ 0x14006A2E0
 * Callers:
 *     <none>
 * Callees:
 *     NdisCmDeregisterSapComplete @ 0x140005470 (NdisCmDeregisterSapComplete.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisClDeregisterSap(NDIS_HANDLE NdisSapHandle)
{
  KIRQL v2; // al
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rax
  NDIS_STATUS result; // eax

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisSapHandle + 5);
  v3 = *((_DWORD *)NdisSapHandle + 8);
  *((_DWORD *)NdisSapHandle + 8) = v3 | 0x80000000;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisSapHandle + 5, v2);
  if ( v3 < 0 )
    return -1073741823;
  v4 = *((_QWORD *)NdisSapHandle + 2);
  if ( *(_DWORD *)(v4 + 392) >= 6u )
    v5 = *(_QWORD *)(v4 + 32);
  else
    v5 = *(_QWORD *)(v4 + 24);
  result = (*(__int64 (__fastcall **)(_QWORD))(v5 + 48))(*(_QWORD *)NdisSapHandle);
  if ( result != 259 )
  {
    NdisCmDeregisterSapComplete(result, NdisSapHandle);
    return 259;
  }
  return result;
}
