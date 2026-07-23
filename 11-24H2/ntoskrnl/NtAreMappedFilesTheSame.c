/*
 * XREFs of NtAreMappedFilesTheSame @ 0x1408D8910
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     MiDereferenceVad @ 0x140290A60 (MiDereferenceVad.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiLockVadShared @ 0x140345480 (MiLockVadShared.c)
 *     MiUnlockVadShared @ 0x1403620A0 (MiUnlockVadShared.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     MiVadIsMetadataBitmap @ 0x1408D9558 (MiVadIsMetadataBitmap.c)
 */

NTSTATUS __cdecl NtAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  __int64 v2; // r9
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rdi
  signed __int64 *v15; // r14
  __int64 *v16; // r12
  __int64 *v17; // r15
  __int64 v18; // r12
  __int64 v19; // r15
  int v20; // ebx
  NTSTATUS v21; // edi
  ULONG_PTR v22; // rax
  char *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = MiObtainReferencedVadEx((unsigned __int64)File1MappedAsAnImage, 2LL, &v40, v2);
  v7 = v6;
  if ( !v6 )
    return -1073741503;
  MiUnlockVadShared((__int64)CurrentThread, v6);
  v9 = MiObtainReferencedVadEx((unsigned __int64)File2MappedAsFile, 2LL, &v40, v8);
  v10 = v9;
  if ( !v9 )
  {
    MiLockVadShared((__int64)CurrentThread, v7);
    MiUnlockAndDereferenceVadShared(v7, v28, v29, v30);
    return -1073741503;
  }
  if ( v7 == v9 )
  {
    MiDereferenceVad(v7);
    MiUnlockAndDereferenceVadShared(v10, v31, v32, v33);
    return 0;
  }
  else if ( (unsigned int)MiVadIsMetadataBitmap(v7) || (unsigned int)MiVadIsMetadataBitmap(v10) )
  {
    MiUnlockAndDereferenceVadShared(v10, v11, v12, v13);
    MiLockVadShared((__int64)CurrentThread, v7);
    MiUnlockAndDereferenceVadShared(v7, v24, v25, v26);
    return -1073741800;
  }
  else
  {
    if ( File1MappedAsAnImage <= File2MappedAsFile )
    {
      MiUnlockVadShared((__int64)CurrentThread, v10);
      MiLockVadShared((__int64)CurrentThread, v7);
      v15 = (signed __int64 *)(v10 + 40);
      v23 = (char *)KeAbPreAcquire(v10 + 40, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 40), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v10 + 40), 0, v23, v10 + 40);
      if ( v23 )
        v23[10] = 1;
    }
    else
    {
      v14 = (char *)KeAbPreAcquire(v7 + 40, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 40), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v7 + 40), 0, v14, v7 + 40);
      if ( v14 )
        v14[10] = 1;
      v15 = (signed __int64 *)(v10 + 40);
    }
    if ( (unsigned int)MiVadDeleted(v7) || (unsigned int)MiVadDeleted(v10) )
    {
      v21 = -1073741503;
      v20 = -1073741503;
    }
    else if ( !_bittest((const signed __int32 *)(v7 + 48), 0x15u)
           && !_bittest((const signed __int32 *)(v10 + 48), 0x15u)
           && (v16 = *(__int64 **)(v7 + 72)) != 0LL
           && (v17 = *(__int64 **)(v10 + 72)) != 0LL
           && (v18 = *v16) != 0
           && (v19 = *v17) != 0
           && *(_QWORD *)(v18 + 64)
           && *(_QWORD *)(v19 + 64) )
    {
      v22 = MiReferenceControlAreaFile(v19);
      v21 = -1073741612;
      v20 = -1073741612;
      if ( v18 == *(_QWORD *)(*(_QWORD *)(v22 + 40) + 16LL) )
      {
        v21 = 0;
        v20 = 0;
      }
      MiDereferenceControlAreaFile(v19, v22);
    }
    else
    {
      v20 = -1073741800;
      v21 = -1073741800;
    }
    if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v15);
      v21 = v20;
    }
    KeAbPostRelease((ULONG_PTR)v15);
    MiUnlockAndDereferenceVadShared(v7, v34, v35, v36);
    MiLockVadShared((__int64)CurrentThread, v10);
    MiUnlockAndDereferenceVadShared(v10, v37, v38, v39);
    return v21;
  }
}
