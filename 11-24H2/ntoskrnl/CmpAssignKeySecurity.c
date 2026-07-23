/*
 * XREFs of CmpAssignKeySecurity @ 0x1407DCF10
 * Callers:
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 * Callees:
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879FC0 (CmpGetKeyNodeForKcb.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmLockHiveSecurityExclusive @ 0x14088427C (CmLockHiveSecurityExclusive.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088452C (CmpGetSecurityDescriptorNodeEx.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpCleanupKcbStack @ 0x14090AD10 (CmpCleanupKcbStack.c)
 *     CmpLockKcbStackExclusive @ 0x14090C338 (CmpLockKcbStackExclusive.c)
 *     CmpAssignSecurityToKcb @ 0x1409C5710 (CmpAssignSecurityToKcb.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmUnlockHiveSecurity @ 0x140BBB9C8 (CmUnlockHiveSecurity.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpAssignKeySecurity(__int64 a1, void *a2)
{
  char v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // r12
  int started; // ebx
  ULONG_PTR v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 KeyNodeForKcb; // rax
  unsigned int *v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rcx
  _OWORD v19[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+58h]

  v20 = 0LL;
  v4 = 0;
  HvpGetCellContextInitialize(&v20);
  memset(v19, 0, sizeof(v19));
  WORD1(v19[0]) = -1;
  v9 = CmpAcquireShutdownRundown(v6, v5, v7, v8);
  if ( v9 )
  {
    CmpLockRegistry();
    v11 = *(_QWORD *)(a1 + 8);
    v4 = 1;
    v12 = *(_QWORD *)(v11 + 32);
    started = CmpStartKcbStackForTopLayerKcb(v19, v11);
    if ( started >= 0 )
    {
      CmpLockKcbStackExclusive(v19);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        HvLockHiveFlusherShared(v12);
        CmLockHiveSecurityExclusive(v12);
        LOBYTE(v13) = 1;
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v11, &v20, v13);
        v21 = KeyNodeForKcb;
        *(_QWORD *)(a1 - 8) = 0LL;
        if ( !KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(v12 + 4112) & 0x20) != 0 && *(_DWORD *)(v12 + 1872) )
          a2 = (void *)(*(_QWORD *)(*(_QWORD *)(v12 + 1888) + 8LL) + 32LL);
        v15 = (unsigned int *)(KeyNodeForKcb + 44);
        started = CmpGetSecurityDescriptorNodeEx(
                    *(_QWORD *)(v11 + 32),
                    *(unsigned int *)(v11 + 40),
                    a2,
                    0,
                    KeyNodeForKcb + 44);
        if ( started >= 0 )
        {
          CmpAssignSecurityToKcb(v11, *v15, 0);
          started = 0;
        }
        if ( v21 )
        {
          v16 = *(_QWORD *)(v11 + 32);
          if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v16, &v20);
          else
            HvpReleaseCellPaged(v16, &v20);
        }
        CmUnlockHiveSecurity(v12);
        HvUnlockHiveFlusherShared(v12);
      }
      CmpUnlockKcbStack(v19);
    }
  }
  else
  {
    started = -1073741431;
  }
  CmpCleanupKcbStack(v19);
  if ( v4 )
    CmpUnlockRegistry(v17);
  if ( v9 )
    CmpReleaseShutdownRundown(v17);
  return (unsigned int)started;
}
