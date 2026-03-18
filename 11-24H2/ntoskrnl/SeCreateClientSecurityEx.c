/*
 * XREFs of SeCreateClientSecurityEx @ 0x1408974A0
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x140896970 (NtAlpcImpersonateClientOfPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1403597C0 (SepReconcileTrustSidWithProcessProtection.c)
 *     PsIsHostSilo @ 0x14043E2E0 (PsIsHostSilo.c)
 *     SepCreateClientSecurityEx @ 0x140897AC0 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x140ABC0A8 (SepUpdateSiloInClientSecurity.c)
 */

__int64 __fastcall SeCreateClientSecurityEx(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  int v4; // r12d
  char v5; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // r14
  __int64 *v11; // rsi
  int v12; // r15d
  __int64 result; // rax
  unsigned int v14; // edi
  signed __int64 *v15; // r15
  _QWORD *v16; // rsi
  unsigned __int64 CurrentServerSilo; // rbx
  unsigned int v18; // ebx
  char v19[8]; // [rsp+60h] [rbp-68h] BYREF
  PSID SourceSid; // [rsp+68h] [rbp-60h] BYREF
  __int64 v21; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *v22; // [rsp+78h] [rbp-50h]
  unsigned __int8 v23; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+10h]

  v24 = a2;
  v4 = 0;
  v23 = 0;
  v5 = 0;
  v19[0] = 0;
  SourceSid = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1440) & 8) == 0 )
    goto LABEL_4;
  v15 = (signed __int64 *)(a1 + 1424);
  v21 = *(_QWORD *)(a1 + 544);
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  v16 = KeAbPreAcquire(a1 + 1424, 0LL);
  if ( _InterlockedCompareExchange64(v15, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v15, 0, v16, (__int64)v15);
  if ( v16 )
    *((_BYTE *)v16 + 10) = 1;
  if ( (*(_DWORD *)(a1 + 1440) & 8) != 0 )
  {
    v11 = (__int64 *)(*(_QWORD *)(a1 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObjectWithTag(v11, 0x63436553u);
    v4 = *(_DWORD *)(a1 + 1336) & 3;
    v5 = (*(_BYTE *)(a1 + 1336) & 4) != 0;
    v23 = *(_BYTE *)(v21 + 1530);
  }
  else
  {
    v11 = 0LL;
  }
  if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  KeLeaveCriticalRegionThread();
  if ( v11 )
  {
    v12 = 2;
  }
  else
  {
LABEL_4:
    v11 = (__int64 *)PsReferencePrimaryTokenWithTag(Process, 0x63436553u);
    v23 = *(_BYTE *)(Process + 1530);
    v5 = 0;
    v12 = 1;
  }
  SepReconcileTrustSidWithProcessProtection(v11[138], &v23, v19, &SourceSid);
  result = SepCreateClientSecurityEx((int)v11, v24, a3, v12, v5, v4, 1, a1, v19[0], SourceSid, a4);
  v14 = result;
  if ( (int)result < 0 || !*(_BYTE *)(a4 + 8) )
  {
    ObfDereferenceObjectWithTag(v11, 0x63436553u);
    return v14;
  }
  if ( *(PEPROCESS *)(a1 + 544) != PsInitialSystemProcess )
    return result;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
    return v14;
  result = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
  v18 = result;
  if ( (int)result < 0 )
  {
    ObfDereferenceObjectWithTag(v11, 0x63436553u);
    return v18;
  }
  return result;
}
