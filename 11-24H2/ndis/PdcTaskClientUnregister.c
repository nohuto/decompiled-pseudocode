/*
 * XREFs of PdcTaskClientUnregister @ 0x14014E7C4
 * Callers:
 *     ?ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140169440 (-ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     PdcAcquireRwLockExclusive @ 0x14014E870 (PdcAcquireRwLockExclusive.c)
 *     PdcReleaseRwLockExclusive @ 0x14014E8D4 (PdcReleaseRwLockExclusive.c)
 *     PdcpPortReleaseResources @ 0x14014EA6C (PdcpPortReleaseResources.c)
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
