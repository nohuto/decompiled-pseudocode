/*
 * XREFs of ?ndisOidPrePMHaltOnSuspend@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140083C70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140049980 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePMHaltOnSuspend(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdi
  __int64 v3; // rdi
  KIRQL v5; // al

  v1 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v2 = *((_QWORD *)a1 + 3);
    if ( v2 )
    {
      v1 = *(_QWORD *)(v2 + 16);
    }
    else
    {
      v3 = *((_QWORD *)a1 + 1);
      if ( v3 )
      {
        v1 = *(_QWORD *)(v3 + 32);
      }
      else
      {
        v1 = *((_QWORD *)a1 + 2);
        if ( v1 )
          v1 = *(_QWORD *)(v1 + 32);
      }
    }
  }
  if ( (*(_DWORD *)(v1 + 120) & 0x80u) == 0 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
    *(_DWORD *)(v1 + 4420) |= 0x10u;
    *(_QWORD *)(v1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v5);
    *(_DWORD *)(v1 + 124) &= 0xFFFFFF9F;
    *(_DWORD *)(v1 + 3864) |= 0x10u;
    ndisUpdateAndIndicatePMCapabilities((struct _NDIS_MINIPORT_BLOCK *)v1);
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  return 1;
}
