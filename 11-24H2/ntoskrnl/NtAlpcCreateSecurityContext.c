/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x14089D0F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     IoThreadToProcess @ 0x140438740 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1408923C8 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpStartInitialization @ 0x140894E74 (AlpcpStartInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x140894EE0 (AlpcAddHandleTableEntry.c)
 *     AlpcpInsertResourcePort @ 0x1408966E0 (AlpcpInsertResourcePort.c)
 *     AlpcpDeleteBlob @ 0x14089CCE0 (AlpcpDeleteBlob.c)
 *     PsChargeProcessPagedPoolQuota @ 0x14089EAD0 (PsChargeProcessPagedPoolQuota.c)
 *     AlpcpReferenceBlob @ 0x14089EB60 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     SeCreateClientSecurity @ 0x14089EDC0 (SeCreateClientSecurity.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpEndInitialization @ 0x140A0C980 (AlpcpEndInitialization.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  ULONG_PTR v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  int PreviousMode; // edx
  __int64 v8; // rcx
  unsigned __int64 v9; // xmm1_8
  struct _SECURITY_QUALITY_OF_SERVICE *QoS; // rsi
  __int64 v11; // rdx
  int v12; // edi
  char *v13; // r13
  PEPROCESS v14; // rdi
  __int64 Pool2; // rax
  ULONG_PTR v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rtt
  PVOID v19; // rdi
  volatile signed __int64 *v20; // rdi
  char *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rax
  char v25; // [rsp+30h] [rbp-98h]
  PVOID Object; // [rsp+40h] [rbp-88h] BYREF
  PVOID v27; // [rsp+48h] [rbp-80h]
  ULONG_PTR v28; // [rsp+50h] [rbp-78h]
  PETHREAD ClientThread; // [rsp+58h] [rbp-70h]
  ULONG_PTR v30; // [rsp+60h] [rbp-68h] BYREF
  __m128i v31; // [rsp+68h] [rbp-60h]
  ALPC_HANDLE ContextHandle; // [rsp+78h] [rbp-50h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+80h] [rbp-48h] BYREF

  v31 = 0LL;
  LODWORD(ContextHandle) = 0;
  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  v5 = 0LL;
  v28 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    v12 = -1073741811;
    goto LABEL_36;
  }
  PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
  v25 = PreviousMode;
  if ( (_BYTE)PreviousMode )
  {
    if ( ((unsigned __int8)SecurityAttribute & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)SecurityAttribute < 0x7FFFFFFF0000LL )
      v8 = (__int64)SecurityAttribute;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 23) = *(_BYTE *)(v8 + 23);
    v31 = *(__m128i *)&SecurityAttribute->Flags;
    ContextHandle = SecurityAttribute->ContextHandle;
    v9 = _mm_srli_si128(v31, 8).m128i_u64[0];
    QoS = (struct _SECURITY_QUALITY_OF_SERVICE *)v9;
    if ( v9 )
    {
      v11 = v9;
      if ( v9 >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      RtlCopyVolatileMemory(&ClientSecurityQos, (const void *)v11, 0xCuLL);
      LOBYTE(PreviousMode) = v25;
    }
  }
  else
  {
    v31 = *(__m128i *)&SecurityAttribute->Flags;
    ContextHandle = SecurityAttribute->ContextHandle;
    QoS = SecurityAttribute->QoS;
    if ( QoS )
      ClientSecurityQos = *QoS;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v13 = (char *)Object;
  if ( v12 >= 0 )
  {
    if ( !QoS )
      ClientSecurityQos = *(struct _SECURITY_QUALITY_OF_SERVICE *)((char *)Object + 260);
    ClientThread = KeGetCurrentThread();
    v14 = IoThreadToProcess(ClientThread);
    v27 = v14;
    Pool2 = ExAllocatePool2(0x100uLL, 0xA0uLL, 0x65536C41u);
    if ( !Pool2 )
      goto LABEL_37;
    *(_WORD *)(Pool2 + 16) = 768;
    *(_DWORD *)(Pool2 + 18) = 0;
    *(_WORD *)(Pool2 + 22) = 0;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    *(_BYTE *)(Pool2 + 16) &= ~2u;
    *(_QWORD *)(Pool2 + 24) = 1LL;
    v16 = Pool2 + 48;
    if ( Pool2 == -48 )
      goto LABEL_37;
    memset_0((void *)(Pool2 + 48), 0, 0x70uLL);
    *(_QWORD *)(v16 + 8) = -1LL;
    _m_prefetchw(&v14[3].ProcessLock);
    while ( 1 )
    {
      v17 = *(_QWORD *)&v14[3].ProcessLock;
      if ( v17 < 0xA0 )
        break;
      v18 = *(_QWORD *)&v14[3].ProcessLock;
      if ( v18 == _InterlockedCompareExchange64((volatile signed __int64 *)&v14[3].ProcessLock, v17 - 160, v17) )
      {
        v12 = 0;
        goto LABEL_20;
      }
    }
    v12 = PsChargeProcessPagedPoolQuota(v14, 160LL);
LABEL_20:
    if ( v12 >= 0 )
    {
      v12 = SeCreateClientSecurity(ClientThread, &ClientSecurityQos, 0, (PSECURITY_CLIENT_CONTEXT)(v16 + 32));
      if ( v12 >= 0 )
      {
        v19 = v27;
        ObfReferenceObjectWithTag(v27, 0x63706C41u);
        *(_QWORD *)(v16 + 16) = v19;
        v20 = (volatile signed __int64 *)(v13 + 352);
        v21 = (char *)KeAbPreAcquire((__int64)(v13 + 352), 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13 + 44, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v13 + 44, 0, v21, (__int64)(v13 + 352));
        if ( v21 )
          v21[10] = 1;
        if ( (*((_DWORD *)v13 + 104) & 0x20) != 0 )
        {
          if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v13 + 44);
          KeAbPostRelease((ULONG_PTR)(v13 + 352));
        }
        else
        {
          AlpcpStartInitialization(v16);
          AlpcpReferenceBlob(v16);
          v22 = *((_QWORD *)v13 + 2) + 40LL;
          *(_QWORD *)v16 = v22;
          v30 = v16;
          v23 = AlpcAddHandleTableEntry(v22, &v30);
          *(_QWORD *)(v16 + 8) = v23;
          if ( v23 != -1 )
          {
            PsReferenceSiloContext(v13);
            *(_QWORD *)(v16 + 24) = v13;
            AlpcpInsertResourcePort((__int64)v13, v16);
            if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v13 + 44);
            KeAbPostRelease((ULONG_PTR)(v13 + 352));
            AlpcpEndInitialization(v16);
            v5 = v16;
            v28 = v16;
            v12 = 0;
            goto LABEL_33;
          }
          if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v13 + 44);
          KeAbPostRelease((ULONG_PTR)(v13 + 352));
          *(_QWORD *)v16 = 0LL;
          AlpcpEndInitialization(v16);
        }
        AlpcpDereferenceBlobEx(v16);
LABEL_37:
        v12 = -1073741670;
LABEL_35:
        ObfDereferenceObject(v13);
        goto LABEL_36;
      }
      AlpcpReleasePagedPoolQuota((ULONG_PTR)v27, 0xA0uLL);
    }
    AlpcpDereferenceBlobEx(v16);
LABEL_33:
    if ( v12 >= 0 )
    {
      SecurityAttribute->ContextHandle = *(ALPC_HANDLE *)(v5 + 8);
      AlpcpDereferenceBlobEx(v5);
    }
    goto LABEL_35;
  }
LABEL_36:
  KeLeaveCriticalRegionThread();
  return v12;
}
