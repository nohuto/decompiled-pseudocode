/*
 * XREFs of AlpcpGetEffectiveTokenMessage @ 0x14089FDF0
 * Callers:
 *     AlpcpQueryTokenModifiedIdMessage @ 0x14073F710 (AlpcpQueryTokenModifiedIdMessage.c)
 *     AlpcpQuerySidMessage @ 0x140891FAC (AlpcpQuerySidMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1403E3A30 (SepReconcileTrustSidWithProcessProtection.c)
 *     PsIsHostSilo @ 0x1404329D0 (PsIsHostSilo.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x140AB70C8 (SepUpdateSiloInClientSecurity.c)
 */

__int64 __fastcall AlpcpGetEffectiveTokenMessage(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, _BYTE *a5)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ecx
  __int64 v10; // rbx
  char v11; // bp
  PEPROCESS *v12; // r14
  struct _KTHREAD *CurrentThread; // rax
  PEPROCESS Process; // r13
  PSID *v15; // r15
  int v16; // r13d
  int ClientSecurity; // ebx
  __int64 v19; // rax
  char *v20; // r15
  char v21; // bp
  signed __int64 *v22; // rcx
  unsigned __int64 CurrentServerSilo; // rbx
  char v24[4]; // [rsp+60h] [rbp-58h] BYREF
  int v25; // [rsp+64h] [rbp-54h]
  PSID SourceSid; // [rsp+68h] [rbp-50h] BYREF
  PEPROCESS v27; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *v28; // [rsp+78h] [rbp-40h]
  unsigned __int8 v29; // [rsp+C8h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a2 + 40) & 0x80u) != 0 )
    return 3221227267LL;
  v7 = *(_QWORD *)(a2 + 136);
  if ( v7 )
  {
    if ( *(int *)(v7 + 36) < 1 )
      return 3221225506LL;
    v19 = *(_QWORD *)(v7 + 48);
    goto LABEL_21;
  }
  v8 = *(_QWORD *)(a2 + 24);
  if ( (*(_DWORD *)(a1 + 416) & 6) != 2 )
    return 3221225506LL;
  if ( !v8 )
    return 3221225506LL;
  v9 = *(_DWORD *)(v8 + 416);
  if ( (v9 & 6) != 4 )
    return 3221225506LL;
  if ( (v9 & 0x400) == 0 )
  {
    v19 = *(_QWORD *)(v8 + 80);
    if ( !v19 )
      return 3221225506LL;
LABEL_21:
    *a3 = v19;
    *a5 = 0;
    return 0LL;
  }
  v10 = *(_QWORD *)(a2 + 32);
  if ( !v10 )
    return 3221225506LL;
  v11 = 0;
  v12 = (PEPROCESS *)(v10 + 544);
  v25 = 0;
  v29 = 0;
  v24[0] = 0;
  SourceSid = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)v10 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *v12;
  if ( (*(_DWORD *)(v10 + 1440) & 8) == 0 )
    goto LABEL_11;
  v27 = *v12;
  v28 = KeGetCurrentThread();
  --v28->KernelApcDisable;
  v20 = (char *)KeAbPreAcquire(v10 + 1424, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 1424), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v10 + 1424), 0, v20, v10 + 1424);
  if ( v20 )
    v20[10] = 1;
  if ( (*(_DWORD *)(v10 + 1440) & 8) != 0 )
  {
    v15 = (PSID *)(*(_QWORD *)(v10 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObjectWithTag(v15, 0x63436553u);
    v21 = *(_BYTE *)(v10 + 1336);
    v25 = *(_DWORD *)(v10 + 1336) & 3;
    v11 = (v21 & 4) != 0;
    v29 = BYTE2(v27[3].ActiveGroupsMask.Masks[1]);
  }
  else
  {
    v15 = 0LL;
  }
  v22 = (signed __int64 *)(v10 + 1424);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 1424), 0LL, 17LL) != 17 )
  {
    ExfReleasePushLockShared(v22);
    v22 = (signed __int64 *)(v10 + 1424);
  }
  KeAbPostRelease((ULONG_PTR)v22);
  KeLeaveCriticalRegionThread();
  if ( v15 )
  {
    v16 = 2;
  }
  else
  {
LABEL_11:
    v15 = (PSID *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x63436553u);
    v29 = BYTE2(Process[3].ActiveGroupsMask.Masks[1]);
    v11 = 0;
    v16 = 1;
  }
  SepReconcileTrustSidWithProcessProtection(v15[138], &v29, v24, &SourceSid);
  ClientSecurity = SepCreateClientSecurityEx((int)v15, (int)v8 + 260, 0, v16, v11, v25, 1, v10, v24[0], SourceSid, a4);
  if ( ClientSecurity < 0 || !*(_BYTE *)(a4 + 8) )
  {
    ObfDereferenceObjectWithTag(v15, 0x63436553u);
LABEL_34:
    if ( ClientSecurity < 0 )
      return (unsigned int)ClientSecurity;
    goto LABEL_15;
  }
  if ( *v12 == PsInitialSystemProcess )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo(CurrentServerSilo) )
    {
      ClientSecurity = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
      if ( ClientSecurity < 0 )
      {
        ObfDereferenceObjectWithTag(v15, 0x63436553u);
        return (unsigned int)ClientSecurity;
      }
      goto LABEL_34;
    }
  }
LABEL_15:
  *a3 = *(_QWORD *)(a4 + 16);
  *a5 = 1;
  return 0LL;
}
