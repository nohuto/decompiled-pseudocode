/*
 * XREFs of SeCreateClientSecurity @ 0x1408A6230
 * Callers:
 *     EtwpUpdateTrace @ 0x140893BB4 (EtwpUpdateTrace.c)
 *     AlpcpCreateSecurityContext @ 0x1408AFF04 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateClientPort @ 0x140916890 (AlpcpCreateClientPort.c)
 *     NtImpersonateThread @ 0x140A1F3E0 (NtImpersonateThread.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 *     EtwpFixBootLoggers @ 0x140C2D2BC (EtwpFixBootLoggers.c)
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
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  char v4; // si
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  PSID *v11; // rdi
  NTSTATUS result; // eax
  NTSTATUS v13; // ebx
  signed __int64 *p_WaitBlockList; // r12
  __int64 *v15; // rdi
  char v16[8]; // [rsp+60h] [rbp-68h] BYREF
  PSID SourceSid; // [rsp+68h] [rbp-60h] BYREF
  _KPROCESS *v18; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *v19; // [rsp+78h] [rbp-50h]
  unsigned __int8 v20; // [rsp+D0h] [rbp+8h] BYREF
  BOOLEAN v21; // [rsp+E0h] [rbp+18h]

  v21 = RemoteSession;
  v4 = 0;
  v7 = 0;
  v20 = 0;
  v16[0] = 0;
  SourceSid = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( ClientThread == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = ClientThread->Process;
  if ( (*(_DWORD *)(&ClientThread[1].SwapListEntry + 1) & 8) == 0 )
    goto LABEL_4;
  v18 = ClientThread->Process;
  p_WaitBlockList = (signed __int64 *)&ClientThread[1].WaitBlockList;
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  v15 = KeAbPreAcquire((__int64)&ClientThread[1].WaitBlockList, 0LL);
  if ( _InterlockedCompareExchange64(p_WaitBlockList, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(p_WaitBlockList, 0, v15, (unsigned __int64)p_WaitBlockList);
  if ( v15 )
    *((_BYTE *)v15 + 10) = 1;
  if ( (*(_DWORD *)(&ClientThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v11 = (PSID *)(*(_QWORD *)((char *)&ClientThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObjectWithTag(v11, 0x63436553u);
    v7 = *((_DWORD *)&ClientThread[1].0 + 1) & 3;
    v4 = (*(_BYTE *)(&ClientThread[1].MiscFlags + 1) & 4) != 0;
    v20 = BYTE2(v18[3].ActiveGroupsMask.Masks[1]);
  }
  else
  {
    v11 = 0LL;
  }
  if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_WaitBlockList);
  KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
  KeLeaveCriticalRegionThread((__int64)v19);
  if ( !v11 )
  {
LABEL_4:
    v11 = (PSID *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x63436553u);
    v20 = BYTE2(Process[3].ActiveGroupsMask.Masks[1]);
    v4 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(v11[138], &v20, v16, &SourceSid);
  result = SepCreateClientSecurityEx((int)v11, v4, v7, 0, 0LL, v16[0], SourceSid, (__int64)ClientContext);
  v13 = result;
  if ( result < 0 || !ClientSecurityQos->ContextTrackingMode )
  {
    ObfDereferenceObjectWithTag(v11, 0x63436553u);
    return v13;
  }
  return result;
}
