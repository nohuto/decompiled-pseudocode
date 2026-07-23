/*
 * XREFs of SeCreateClientSecurityEx @ 0x1408A64C0
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x140859580 (NtAlpcImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1403614B0 (SepReconcileTrustSidWithProcessProtection.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x14043DF70 (PsIsHostSilo.c)
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409B977C (SepUpdateSiloInClientSecurity.c)
 */

__int64 __fastcall SeCreateClientSecurityEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  char v5; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // r14
  PSID *v10; // rsi
  __int64 result; // rax
  unsigned int v12; // edi
  signed __int64 *v13; // r15
  __int64 *v14; // rsi
  unsigned __int64 CurrentServerSilo; // rbx
  unsigned int v16; // ebx
  char v17[8]; // [rsp+60h] [rbp-68h] BYREF
  PSID SourceSid; // [rsp+68h] [rbp-60h] BYREF
  __int64 v19; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *v20; // [rsp+78h] [rbp-50h]
  unsigned __int8 v21; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+10h]

  v22 = a2;
  v4 = 0;
  v21 = 0;
  v5 = 0;
  v17[0] = 0;
  SourceSid = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1440) & 8) == 0 )
    goto LABEL_4;
  v13 = (signed __int64 *)(a1 + 1424);
  v19 = *(_QWORD *)(a1 + 544);
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  v14 = KeAbPreAcquire(a1 + 1424, 0LL);
  if ( _InterlockedCompareExchange64(v13, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v13, 0, v14, (unsigned __int64)v13);
  if ( v14 )
    *((_BYTE *)v14 + 10) = 1;
  if ( (*(_DWORD *)(a1 + 1440) & 8) != 0 )
  {
    v10 = (PSID *)(*(_QWORD *)(a1 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObjectWithTag(v10, 0x63436553u);
    v4 = *(_DWORD *)(a1 + 1336) & 3;
    v5 = (*(_BYTE *)(a1 + 1336) & 4) != 0;
    v21 = *(_BYTE *)(v19 + 1530);
  }
  else
  {
    v10 = 0LL;
  }
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  KeLeaveCriticalRegionThread((__int64)v20);
  if ( !v10 )
  {
LABEL_4:
    v10 = (PSID *)PsReferencePrimaryTokenWithTag(Process, 0x63436553u);
    v21 = *(_BYTE *)(Process + 1530);
    v5 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(v10[138], &v21, v17, &SourceSid);
  result = SepCreateClientSecurityEx((int)v10, v5, v4, 1, a1, v17[0], SourceSid, a4);
  v12 = result;
  if ( (int)result < 0 || !*(_BYTE *)(a4 + 8) )
  {
    ObfDereferenceObjectWithTag(v10, 0x63436553u);
    return v12;
  }
  if ( *(PEPROCESS *)(a1 + 544) != PsInitialSystemProcess )
    return result;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
    return v12;
  result = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
  v16 = result;
  if ( (int)result < 0 )
  {
    ObfDereferenceObjectWithTag(v10, 0x63436553u);
    return v16;
  }
  return result;
}
