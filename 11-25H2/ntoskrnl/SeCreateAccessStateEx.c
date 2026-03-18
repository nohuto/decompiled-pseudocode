/*
 * XREFs of SeCreateAccessStateEx @ 0x1408F3A90
 * Callers:
 *     CmpDoAccessCheckOnKCB @ 0x1407CBCA8 (CmpDoAccessCheckOnKCB.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspInsertProcess @ 0x1408F3D10 (PspInsertProcess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1408F4150 (CmpCheckKeySecurityDescriptorAccess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E3020 (SepCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall SeCreateAccessStateEx(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, int a5, _DWORD *a6)
{
  _QWORD *v10; // rbx
  ULONG_PTR v11; // rax
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v14; // r15
  __int64 *v15; // r14
  void *v16; // r14
  _QWORD *v17; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-30h]

  v19 = *(_QWORD *)(a2 + 464);
  v18 = 0LL;
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 1440) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v14 = (signed __int64 *)(a1 + 1424);
      --CurrentThread->KernelApcDisable;
      v15 = KeAbPreAcquire(a1 + 1424, 0LL);
      if ( _InterlockedCompareExchange64(v14, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v14, 0, v15, (unsigned __int64)v14);
      if ( v15 )
        *((_BYTE *)v15 + 10) = 1;
      if ( (*(_DWORD *)(a1 + 1440) & 8) != 0 )
      {
        v16 = (void *)(*(_QWORD *)(a1 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v16, 0x75536553u);
        LODWORD(v18) = *(_DWORD *)(a1 + 1336) & 3;
      }
      else
      {
        v16 = 0LL;
      }
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v14);
      KeAbPostRelease((ULONG_PTR)v14);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v10 = v16;
    }
    else
    {
      v10 = 0LL;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v17 = v10;
  v11 = PsReferencePrimaryTokenWithTag(a2, 0x75536553u);
  *((_QWORD *)&v18 + 1) = v11;
  if ( SeTokenLeakTracking )
  {
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 1144) + 284LL));
      if ( v11 == SepTokenLeakToken )
        __debugbreak();
      v10 = v17;
    }
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10[143] + 284LL));
      if ( v17 == (_QWORD *)SepTokenLeakToken )
        __debugbreak();
    }
  }
  return SepCreateAccessStateFromSubjectContext(&v17, a3, a4, a5, a6);
}
