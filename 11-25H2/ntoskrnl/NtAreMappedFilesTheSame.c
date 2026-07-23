/*
 * XREFs of NtAreMappedFilesTheSame @ 0x1408D8E90
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiUnlockVadShared @ 0x1402A6620 (MiUnlockVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiLockVadShared @ 0x1402A7C94 (MiLockVadShared.c)
 *     MiDereferenceVad @ 0x1402A8080 (MiDereferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiVadDeleted @ 0x140432030 (MiVadDeleted.c)
 *     MiDereferenceControlAreaFile @ 0x140432C40 (MiDereferenceControlAreaFile.c)
 *     MiVadIsMetadataBitmap @ 0x1408D9B08 (MiVadIsMetadataBitmap.c)
 */

NTSTATUS __cdecl NtAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 *v9; // rdi
  signed __int64 *v10; // r14
  __int64 *v11; // r12
  __int64 *v12; // r15
  __int64 v13; // r12
  __int64 v14; // r15
  int v15; // ebx
  NTSTATUS v16; // edi
  ULONG_PTR v18; // rax
  __int64 *v19; // rbx
  int v20; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = MiObtainReferencedVadEx((unsigned __int64)File1MappedAsAnImage, 2, &v20);
  v6 = v5;
  if ( !v5 )
    return -1073741503;
  MiUnlockVadShared((__int64)CurrentThread, v5);
  v7 = MiObtainReferencedVadEx((unsigned __int64)File2MappedAsFile, 2, &v20);
  v8 = v7;
  if ( !v7 )
  {
    MiLockVadShared((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVadShared((PVOID)v6);
    return -1073741503;
  }
  if ( v6 == v7 )
  {
    MiDereferenceVad(v6);
    MiUnlockAndDereferenceVadShared((PVOID)v8);
    return 0;
  }
  else if ( (unsigned int)MiVadIsMetadataBitmap(v6) || (unsigned int)MiVadIsMetadataBitmap(v8) )
  {
    MiUnlockAndDereferenceVadShared((PVOID)v8);
    MiLockVadShared((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVadShared((PVOID)v6);
    return -1073741800;
  }
  else
  {
    if ( File1MappedAsAnImage <= File2MappedAsFile )
    {
      MiUnlockVadShared((__int64)CurrentThread, v8);
      MiLockVadShared((__int64)CurrentThread, v6);
      v10 = (signed __int64 *)(v8 + 40);
      v19 = KeAbPreAcquire(v8 + 40, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 40), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v8 + 40), 0, v19, v8 + 40);
      if ( v19 )
        *((_BYTE *)v19 + 10) = 1;
    }
    else
    {
      v9 = KeAbPreAcquire(v6 + 40, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 40), 0, v9, v6 + 40);
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
      v10 = (signed __int64 *)(v8 + 40);
    }
    if ( (unsigned int)MiVadDeleted(v6) || (unsigned int)MiVadDeleted(v8) )
    {
      v16 = -1073741503;
      v15 = -1073741503;
    }
    else if ( !_bittest((const signed __int32 *)(v6 + 48), 0x15u)
           && !_bittest((const signed __int32 *)(v8 + 48), 0x15u)
           && (v11 = *(__int64 **)(v6 + 72)) != 0LL
           && (v12 = *(__int64 **)(v8 + 72)) != 0LL
           && (v13 = *v11) != 0
           && (v14 = *v12) != 0
           && *(_QWORD *)(v13 + 64)
           && *(_QWORD *)(v14 + 64) )
    {
      v18 = MiReferenceControlAreaFile(v14);
      v16 = -1073741612;
      v15 = -1073741612;
      if ( v13 == *(_QWORD *)(*(_QWORD *)(v18 + 40) + 16LL) )
      {
        v16 = 0;
        v15 = 0;
      }
      MiDereferenceControlAreaFile(v14, v18);
    }
    else
    {
      v15 = -1073741800;
      v16 = -1073741800;
    }
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v10);
      v16 = v15;
    }
    KeAbPostRelease((ULONG_PTR)v10);
    MiUnlockAndDereferenceVadShared((PVOID)v6);
    MiLockVadShared((__int64)CurrentThread, v8);
    MiUnlockAndDereferenceVadShared((PVOID)v8);
    return v16;
  }
}
