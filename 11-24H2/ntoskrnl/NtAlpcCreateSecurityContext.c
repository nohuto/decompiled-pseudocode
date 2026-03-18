/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x140894C50
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     IoThreadToProcess @ 0x140441CC0 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14088DADC (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140893140 (AlpcpDeleteBlob.c)
 *     AlpcpInsertResourcePort @ 0x140893BB8 (AlpcpInsertResourcePort.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140896630 (PsChargeProcessPagedPoolQuota.c)
 *     AlpcpReferenceBlob @ 0x1408966C0 (AlpcpReferenceBlob.c)
 *     SeCreateClientSecurity @ 0x140896720 (SeCreateClientSecurity.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpStartInitialization @ 0x140940834 (AlpcpStartInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x1409408A0 (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x140A14170 (AlpcpEndInitialization.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall NtAlpcCreateSecurityContext(HANDLE Handle, int a2, __m128i *a3)
{
  ULONG_PTR v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v8; // rcx
  unsigned __int64 v9; // xmm1_8
  struct _SECURITY_QUALITY_OF_SERVICE *v10; // rsi
  __int64 v11; // rdx
  NTSTATUS v12; // edi
  char *v13; // r13
  PEPROCESS v14; // rdi
  __int64 Pool2; // rax
  ULONG_PTR v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  __int64 v20; // rtt
  PVOID v21; // rdi
  volatile signed __int64 *v22; // rdi
  _QWORD *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // edx
  KPROCESSOR_MODE v32; // [rsp+30h] [rbp-98h]
  PVOID Object; // [rsp+40h] [rbp-88h] BYREF
  PVOID v34; // [rsp+48h] [rbp-80h]
  ULONG_PTR v35; // [rsp+50h] [rbp-78h]
  PETHREAD ClientThread; // [rsp+58h] [rbp-70h]
  ULONG_PTR v37; // [rsp+60h] [rbp-68h] BYREF
  __m128i v38; // [rsp+68h] [rbp-60h]
  __int64 v39; // [rsp+78h] [rbp-50h]
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+80h] [rbp-48h] BYREF

  v38 = 0LL;
  LODWORD(v39) = 0;
  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  v5 = 0LL;
  v35 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    v12 = -1073741811;
    goto LABEL_36;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v32 = PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a3 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a3;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 23) = *(_BYTE *)(v8 + 23);
    v38 = *a3;
    v39 = a3[1].m128i_i64[0];
    v9 = _mm_srli_si128(v38, 8).m128i_u64[0];
    v10 = (struct _SECURITY_QUALITY_OF_SERVICE *)v9;
    if ( v9 )
    {
      v11 = v9;
      if ( v9 >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      RtlCopyVolatileMemory(&ClientSecurityQos, (const void *)v11, 0xCuLL);
      PreviousMode = v32;
    }
  }
  else
  {
    v38 = *a3;
    v39 = a3[1].m128i_i64[0];
    v10 = (struct _SECURITY_QUALITY_OF_SERVICE *)a3->m128i_i64[1];
    if ( v10 )
      ClientSecurityQos = *v10;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  v13 = (char *)Object;
  if ( v12 >= 0 )
  {
    if ( !v10 )
      ClientSecurityQos = *(struct _SECURITY_QUALITY_OF_SERVICE *)((char *)Object + 260);
    ClientThread = KeGetCurrentThread();
    v14 = IoThreadToProcess(ClientThread);
    v34 = v14;
    Pool2 = ExAllocatePool2(0x100uLL);
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
      v19 = *(_QWORD *)&v14[3].ProcessLock;
      if ( v19 < 0xA0 )
        break;
      v20 = *(_QWORD *)&v14[3].ProcessLock;
      if ( v20 == _InterlockedCompareExchange64((volatile signed __int64 *)&v14[3].ProcessLock, v19 - 160, v19) )
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
        v21 = v34;
        ObfReferenceObjectWithTag(v34, 0x63706C41u);
        *(_QWORD *)(v16 + 16) = v21;
        v22 = (volatile signed __int64 *)(v13 + 352);
        v23 = KeAbPreAcquire((__int64)(v13 + 352), 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13 + 44, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)v13 + 44, 0, v23, (__int64)(v13 + 352));
        if ( v23 )
          *((_BYTE *)v23 + 10) = 1;
        if ( (*((_DWORD *)v13 + 104) & 0x20) != 0 )
        {
          if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v13 + 44);
          KeAbPostRelease((ULONG_PTR)(v13 + 352));
          v31 = 1;
        }
        else
        {
          AlpcpStartInitialization(v16);
          AlpcpReferenceBlob(v16);
          v24 = *((_QWORD *)v13 + 2) + 40LL;
          *(_QWORD *)v16 = v24;
          v37 = v16;
          v25 = AlpcAddHandleTableEntry(v24, &v37);
          *(_QWORD *)(v16 + 8) = v25;
          if ( v25 != -1 )
          {
            PsReferenceSiloContext(v13);
            *(_QWORD *)(v16 + 24) = v13;
            AlpcpInsertResourcePort((__int64)v13, v16);
            if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v13 + 44);
            KeAbPostRelease((ULONG_PTR)(v13 + 352));
            AlpcpEndInitialization(v16);
            v5 = v16;
            v35 = v16;
            v12 = 0;
            goto LABEL_33;
          }
          if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v13 + 44);
          KeAbPostRelease((ULONG_PTR)(v13 + 352));
          *(_QWORD *)v16 = 0LL;
          AlpcpEndInitialization(v16);
          v31 = 2;
        }
        AlpcpDereferenceBlobEx(v16, v31, v29, v30);
LABEL_37:
        v12 = -1073741670;
LABEL_35:
        ObfDereferenceObject(v13);
        goto LABEL_36;
      }
      AlpcpReleasePagedPoolQuota((ULONG_PTR)v34, 0xA0uLL);
    }
    AlpcpDereferenceBlobEx(v16, 1, v17, v18);
LABEL_33:
    if ( v12 >= 0 )
    {
      a3[1].m128i_i64[0] = *(_QWORD *)(v5 + 8);
      AlpcpDereferenceBlobEx(v5, 1, v26, v27);
    }
    goto LABEL_35;
  }
LABEL_36:
  KeLeaveCriticalRegionThread();
  return (unsigned int)v12;
}
