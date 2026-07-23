/*
 * XREFs of AlpcpGetEffectiveTokenMessage @ 0x1408A6770
 * Callers:
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1407357C0 (AlpcpQueryTokenModifiedIdMessage.c)
 *     AlpcpQuerySidMessage @ 0x140A0A58C (AlpcpQuerySidMessage.c)
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
  int ClientSecurity; // ebx
  __int64 v18; // rax
  __int64 *v19; // rcx
  char v20; // bp
  signed __int64 *v21; // rcx
  unsigned __int64 CurrentServerSilo; // rbx
  char v23[4]; // [rsp+60h] [rbp-58h] BYREF
  int v24; // [rsp+64h] [rbp-54h]
  PSID SourceSid; // [rsp+68h] [rbp-50h] BYREF
  __int64 *v26; // [rsp+70h] [rbp-48h]
  PEPROCESS v27; // [rsp+78h] [rbp-40h]
  struct _KTHREAD *v28; // [rsp+80h] [rbp-38h]
  unsigned __int8 v29; // [rsp+C8h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a2 + 40) & 0x80u) != 0 )
    return 3221227267LL;
  v7 = *(_QWORD *)(a2 + 136);
  if ( v7 )
  {
    if ( *(int *)(v7 + 36) < 1 )
      return 3221225506LL;
    v18 = *(_QWORD *)(v7 + 48);
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
    v18 = *(_QWORD *)(v8 + 80);
    if ( !v18 )
      return 3221225506LL;
LABEL_21:
    *a3 = v18;
    *a5 = 0;
    return 0LL;
  }
  v10 = *(_QWORD *)(a2 + 32);
  if ( !v10 )
    return 3221225506LL;
  v11 = 0;
  v12 = (PEPROCESS *)(v10 + 544);
  v24 = 0;
  v29 = 0;
  v23[0] = 0;
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
  v19 = KeAbPreAcquire(v10 + 1424, 0LL);
  v26 = v19;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 1424), 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx((signed __int64 *)(v10 + 1424), 0, v19, v10 + 1424);
    v19 = v26;
  }
  if ( v19 )
    *((_BYTE *)v19 + 10) = 1;
  if ( (*(_DWORD *)(v10 + 1440) & 8) != 0 )
  {
    v15 = (PSID *)(*(_QWORD *)(v10 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObjectWithTag(v15, 0x63436553u);
    v20 = *(_BYTE *)(v10 + 1336);
    v24 = *(_DWORD *)(v10 + 1336) & 3;
    v11 = (v20 & 4) != 0;
    v29 = BYTE2(v27[3].ActiveGroupsMask.Masks[1]);
  }
  else
  {
    v15 = 0LL;
  }
  v21 = (signed __int64 *)(v10 + 1424);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 1424), 0LL, 17LL) != 17 )
  {
    ExfReleasePushLockShared(v21);
    v21 = (signed __int64 *)(v10 + 1424);
  }
  KeAbPostRelease((ULONG_PTR)v21);
  KeLeaveCriticalRegionThread((__int64)v28);
  if ( !v15 )
  {
LABEL_11:
    v15 = (PSID *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x63436553u);
    v29 = BYTE2(Process[3].ActiveGroupsMask.Masks[1]);
    v11 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(v15[138], &v29, v23, &SourceSid);
  ClientSecurity = SepCreateClientSecurityEx((int)v15, v11, v24, 1, v10, v23[0], SourceSid, a4);
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
