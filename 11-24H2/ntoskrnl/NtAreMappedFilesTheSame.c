/*
 * XREFs of NtAreMappedFilesTheSame @ 0x1408E8130
 * Callers:
 *     <none>
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     MiDereferenceVad @ 0x140260450 (MiDereferenceVad.c)
 *     MiUnlockVadShared @ 0x1402BA960 (MiUnlockVadShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiLockVadShared @ 0x1402FC580 (MiLockVadShared.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     MiVadDeleted @ 0x140428540 (MiVadDeleted.c)
 *     MiDereferenceControlAreaFile @ 0x14042C500 (MiDereferenceControlAreaFile.c)
 *     MiVadIsMetadataBitmap @ 0x1408E8D78 (MiVadIsMetadataBitmap.c)
 */

__int64 __fastcall NtAreMappedFilesTheSame(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdi
  signed __int64 *v13; // r14
  __int64 *v14; // r12
  __int64 *v15; // r15
  __int64 v16; // r12
  __int64 v17; // r15
  int v18; // ebx
  unsigned int v19; // edi
  ULONG_PTR v20; // rax
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = MiObtainReferencedVadEx(a1, 2LL, &v38);
  v6 = v5;
  if ( !v5 )
    return 3221225793LL;
  MiUnlockVadShared((__int64)CurrentThread, v5);
  v7 = MiObtainReferencedVadEx(a2, 2LL, &v38);
  v8 = v7;
  if ( !v7 )
  {
    MiLockVadShared((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVadShared(v6, v26, v27, v28);
    return 3221225793LL;
  }
  if ( v6 == v7 )
  {
    MiDereferenceVad(v6);
    MiUnlockAndDereferenceVadShared(v8, v29, v30, v31);
    return 0LL;
  }
  else if ( (unsigned int)MiVadIsMetadataBitmap(v6) || (unsigned int)MiVadIsMetadataBitmap(v8) )
  {
    MiUnlockAndDereferenceVadShared(v8, v9, v10, v11);
    MiLockVadShared((__int64)CurrentThread, v6);
    MiUnlockAndDereferenceVadShared(v6, v22, v23, v24);
    return 3221225496LL;
  }
  else
  {
    if ( a1 <= a2 )
    {
      MiUnlockVadShared((__int64)CurrentThread, v8);
      MiLockVadShared((__int64)CurrentThread, v6);
      v13 = (signed __int64 *)(v8 + 40);
      v21 = KeAbPreAcquire(v8 + 40, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 40), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v8 + 40), 0, v21, v8 + 40);
      if ( v21 )
        *((_BYTE *)v21 + 10) = 1;
    }
    else
    {
      v12 = KeAbPreAcquire(v6 + 40, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 40), 0, v12, v6 + 40);
      if ( v12 )
        *((_BYTE *)v12 + 10) = 1;
      v13 = (signed __int64 *)(v8 + 40);
    }
    if ( (unsigned int)MiVadDeleted(v6) || (unsigned int)MiVadDeleted(v8) )
    {
      v19 = -1073741503;
      v18 = -1073741503;
    }
    else if ( !_bittest((const signed __int32 *)(v6 + 48), 0x15u)
           && !_bittest((const signed __int32 *)(v8 + 48), 0x15u)
           && (v14 = *(__int64 **)(v6 + 72)) != 0LL
           && (v15 = *(__int64 **)(v8 + 72)) != 0LL
           && (v16 = *v14) != 0
           && (v17 = *v15) != 0
           && *(_QWORD *)(v16 + 64)
           && *(_QWORD *)(v17 + 64) )
    {
      v20 = MiReferenceControlAreaFile(v17);
      v19 = -1073741612;
      v18 = -1073741612;
      if ( v16 == *(_QWORD *)(*(_QWORD *)(v20 + 40) + 16LL) )
      {
        v19 = 0;
        v18 = 0;
      }
      MiDereferenceControlAreaFile(v17, v20);
    }
    else
    {
      v18 = -1073741800;
      v19 = -1073741800;
    }
    if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v13);
      v19 = v18;
    }
    KeAbPostRelease((ULONG_PTR)v13);
    MiUnlockAndDereferenceVadShared(v6, v32, v33, v34);
    MiLockVadShared((__int64)CurrentThread, v8);
    MiUnlockAndDereferenceVadShared(v8, v35, v36, v37);
    return v19;
  }
}
