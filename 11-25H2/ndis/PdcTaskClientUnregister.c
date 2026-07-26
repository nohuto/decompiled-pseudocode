/*
 * XREFs of PdcTaskClientUnregister @ 0x140159494
 * Callers:
 *     ?ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140176300 (-ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     PdcAcquireRwLockExclusive @ 0x140159540 (PdcAcquireRwLockExclusive.c)
 *     PdcReleaseRwLockExclusive @ 0x1401595A4 (PdcReleaseRwLockExclusive.c)
 *     PdcpPortReleaseResources @ 0x14015973C (PdcpPortReleaseResources.c)
 */

__int64 __fastcall PdcTaskClientUnregister(_QWORD *P)
{
  unsigned int v1; // ebp
  struct _EX_RUNDOWN_REF *v3; // rdi

  v1 = 0;
  if ( P && *(_DWORD *)P == 1667458128 )
  {
    PdcAcquireRwLockExclusive(P + 1);
    v3 = (struct _EX_RUNDOWN_REF *)P[5];
    ExWaitForRundownProtectionRelease(v3 + 1);
    ExRundownCompleted(v3 + 1);
    PdcpPortReleaseResources(v3);
    P[5] = 0LL;
    *(_DWORD *)P = 0;
    PdcReleaseRwLockExclusive(P + 1);
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v1;
}
