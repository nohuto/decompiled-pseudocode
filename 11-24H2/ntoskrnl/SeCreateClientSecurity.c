/*
 * XREFs of SeCreateClientSecurity @ 0x14089EDC0
 * Callers:
 *     AlpcpCreateClientPort @ 0x140868FD0 (AlpcpCreateClientPort.c)
 *     NtAlpcCreateSecurityContext @ 0x14089D0F0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x14089E878 (AlpcpCreateSecurityContext.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     NtImpersonateThread @ 0x140A1D8E0 (NtImpersonateThread.c)
 *     EtwpUpdateTrace @ 0x140ADA038 (EtwpUpdateTrace.c)
 *     EtwpFixBootLoggers @ 0x140C406E8 (EtwpFixBootLoggers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1403E3A30 (SepReconcileTrustSidWithProcessProtection.c)
 *     PspUnlockThreadSecurityShared @ 0x14040AFC0 (PspUnlockThreadSecurityShared.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  int v8; // r15d
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbp
  PSID *v11; // rsi
  int v12; // ebx
  __int64 v13; // r14
  NTSTATUS result; // eax
  NTSTATUS v15; // ebx
  char *v16; // rsi
  __int64 v17; // r14
  char v18[8]; // [rsp+60h] [rbp-48h] BYREF
  struct _KTHREAD *v19; // [rsp+68h] [rbp-40h]
  PSID SourceSid[2]; // [rsp+70h] [rbp-38h] BYREF
  _KPROCESS *v21; // [rsp+B0h] [rbp+8h] BYREF

  v8 = 0;
  v18[0] = 0;
  SourceSid[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( ClientThread == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = ClientThread->Process;
  if ( (*(_DWORD *)(&ClientThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v21 = ClientThread->Process;
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v16 = (char *)KeAbPreAcquire((__int64)&ClientThread[1].WaitBlockList, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ClientThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&ClientThread[1].WaitBlockList,
        0,
        v16,
        (__int64)&ClientThread[1].WaitBlockList);
    if ( v16 )
      v16[10] = 1;
    if ( (*(_DWORD *)(&ClientThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v11 = (PSID *)(*(_QWORD *)((char *)&ClientThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v11, 0x63436553u);
      v8 = *((_DWORD *)&ClientThread[1].0 + 1) & 3;
      v17 = *((_BYTE *)&ClientThread[1].MiscFlags + 4) >> 2;
      LOBYTE(v21) = BYTE2(v21[3].ActiveGroupsMask.Masks[1]);
      v13 = v17 & 1;
      PspUnlockThreadSecurityShared((__int64)ClientThread);
      if ( v11 )
      {
        v12 = 2;
        goto LABEL_5;
      }
    }
    else
    {
      PspUnlockThreadSecurityShared((__int64)ClientThread);
    }
  }
  v11 = (PSID *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x63436553u);
  LOBYTE(v21) = BYTE2(Process[3].ActiveGroupsMask.Masks[1]);
  v12 = 1;
  LOBYTE(v13) = 0;
LABEL_5:
  SepReconcileTrustSidWithProcessProtection(v11[138], (unsigned __int8 *)&v21, v18, SourceSid);
  result = SepCreateClientSecurityEx(
             (int)v11,
             (int)ClientSecurityQos,
             RemoteSession,
             v12,
             v13,
             v8,
             0,
             0LL,
             v18[0],
             SourceSid[0],
             (__int64)ClientContext);
  v15 = result;
  if ( result < 0 || !ClientSecurityQos->ContextTrackingMode )
  {
    ObfDereferenceObjectWithTag(v11, 0x63436553u);
    return v15;
  }
  return result;
}
