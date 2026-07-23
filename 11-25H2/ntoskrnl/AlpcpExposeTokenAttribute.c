/*
 * XREFs of AlpcpExposeTokenAttribute @ 0x1408A82D0
 * Callers:
 *     AlpcpExposeAttributes @ 0x1408A7C40 (AlpcpExposeAttributes.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
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

char __fastcall AlpcpExposeTokenAttribute(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int ClientSecurity; // ebx
  PVOID v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // ecx
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PEPROCESS *v13; // r13
  PEPROCESS Process; // rcx
  PSID *v15; // rax
  PVOID v16; // rdi
  char v17; // di
  struct _KTHREAD *v18; // rax
  _BYTE *v19; // rdx
  signed __int64 *v20; // rcx
  unsigned __int64 CurrentServerSilo; // r14
  __int64 v23; // [rsp+38h] [rbp-110h]
  bool v24; // [rsp+60h] [rbp-E8h]
  char v25[7]; // [rsp+61h] [rbp-E7h] BYREF
  PVOID v26; // [rsp+68h] [rbp-E0h]
  int v27; // [rsp+70h] [rbp-D8h]
  PEPROCESS v28; // [rsp+78h] [rbp-D0h]
  PEPROCESS v29; // [rsp+80h] [rbp-C8h]
  PSID SourceSid; // [rsp+88h] [rbp-C0h] BYREF
  struct _KTHREAD *v31; // [rsp+90h] [rbp-B8h]
  __int64 v32[2]; // [rsp+A0h] [rbp-A8h] BYREF
  PVOID Object[2]; // [rsp+B0h] [rbp-98h]
  __int128 v34; // [rsp+C0h] [rbp-88h]
  __int128 v35; // [rsp+D0h] [rbp-78h]
  int v36; // [rsp+E0h] [rbp-68h]
  __int64 v37; // [rsp+F0h] [rbp-58h]
  __int64 v38; // [rsp+F8h] [rbp-50h]
  __int64 v39; // [rsp+100h] [rbp-48h]
  unsigned __int8 v40; // [rsp+158h] [rbp+10h] BYREF

  *(_OWORD *)v32 = 0LL;
  *(_OWORD *)Object = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0;
  ClientSecurity = 0;
  v7 = 0LL;
  LODWORD(v8) = *(_DWORD *)(a2 + 40);
  if ( (v8 & 0x80u) != 0LL )
    return v8;
  v8 = *(_QWORD *)(a2 + 136);
  if ( v8 )
  {
    if ( *(int *)(v8 + 36) < 1 )
      return v8;
    v7 = *(PVOID *)(v8 + 48);
    v17 = 0;
    goto LABEL_18;
  }
  v9 = *(_QWORD *)(a2 + 24);
  LOBYTE(v8) = *(_DWORD *)(a1 + 416) & 6;
  if ( (_BYTE)v8 != 2 )
    return v8;
  if ( !v9 )
    return v8;
  v10 = *(_DWORD *)(v9 + 416);
  LOBYTE(v8) = v10 & 6;
  if ( (v10 & 6) != 4 )
    return v8;
  if ( (v10 & 0x400) == 0 )
  {
    v7 = *(PVOID *)(v9 + 80);
    if ( !v7 )
      return v8;
LABEL_17:
    v17 = 0;
    if ( ClientSecurity < 0 )
      return v8;
    goto LABEL_18;
  }
  v11 = *(_QWORD *)(a2 + 32);
  if ( !v11 )
    return v8;
  v24 = 0;
  v27 = 0;
  v40 = 0;
  v25[0] = 0;
  SourceSid = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = (PEPROCESS *)(v11 + 544);
  if ( (struct _KTHREAD *)v11 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *v13;
  v29 = Process;
  if ( (*(_DWORD *)(v11 + 1440) & 8) != 0 )
  {
    v28 = *v13;
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    v19 = KeAbPreAcquire(v11 + 1424, 0LL);
    v26 = v19;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 1424), 17LL, 0LL) )
    {
      ExfAcquirePushLockSharedEx((signed __int64 *)(v11 + 1424), 0, (__int64 *)v19, v11 + 1424);
      v19 = v26;
    }
    if ( v19 )
      v19[10] = 1;
    if ( (*(_DWORD *)(v11 + 1440) & 8) != 0 )
    {
      v26 = (PVOID)(*(_QWORD *)(v11 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v26, 0x63436553u);
      v27 = *(_DWORD *)(v11 + 1336) & 3;
      v40 = BYTE2(v28[3].ActiveGroupsMask.Masks[1]);
      v24 = (*(_BYTE *)(v11 + 1336) & 4) != 0;
    }
    else
    {
      v26 = 0LL;
    }
    v20 = (signed __int64 *)(v11 + 1424);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 1424), 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v20);
      v20 = (signed __int64 *)(v11 + 1424);
    }
    KeAbPostRelease((ULONG_PTR)v20);
    KeLeaveCriticalRegionThread((__int64)v31);
    v15 = (PSID *)v26;
    if ( v26 )
    {
      LODWORD(v28) = 2;
      LOBYTE(ClientSecurity) = v24;
      goto LABEL_12;
    }
    Process = v29;
  }
  v15 = (PSID *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x63436553u);
  v26 = v15;
  LODWORD(v28) = 1;
  v40 = BYTE2(v29[3].ActiveGroupsMask.Masks[1]);
LABEL_12:
  SepReconcileTrustSidWithProcessProtection(v15[138], &v40, v25, &SourceSid);
  v23 = v11;
  v16 = v26;
  ClientSecurity = SepCreateClientSecurityEx(
                     (__int64)v26,
                     v9 + 260,
                     0,
                     (int)v28,
                     ClientSecurity,
                     v27,
                     1,
                     v23,
                     v25[0],
                     (unsigned __int8 *)SourceSid,
                     (__int64)v32);
  if ( ClientSecurity < 0
    || !LOBYTE(v32[1])
    || (LOBYTE(v8) = (_BYTE)PsInitialSystemProcess, *v13 == PsInitialSystemProcess)
    && (CurrentServerSilo = PsGetCurrentServerSilo(), LOBYTE(v8) = PsIsHostSilo(CurrentServerSilo), !(_BYTE)v8)
    && (LODWORD(v8) = SepUpdateSiloInClientSecurity(v32, CurrentServerSilo), ClientSecurity = v8, (int)v8 < 0) )
  {
    LOBYTE(v8) = ObfDereferenceObjectWithTag(v16, 0x63436553u);
  }
  if ( ClientSecurity < 0 )
    goto LABEL_17;
  v7 = Object[0];
  v17 = 1;
LABEL_18:
  v38 = *((_QWORD *)v7 + 3);
  v37 = *((_QWORD *)v7 + 2);
  v18 = KeGetCurrentThread();
  --v18->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)v7 + 6), 1u);
  v39 = *((_QWORD *)v7 + 7);
  ExReleaseResourceLite(*((PERESOURCE *)v7 + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v17 )
    ObfDereferenceObjectWithTag(Object[0], 0x63436553u);
  *a3 = v37;
  a3[1] = v38;
  LOBYTE(v8) = v39;
  a3[2] = v39;
  *a4 |= 0x8000000u;
  return v8;
}
