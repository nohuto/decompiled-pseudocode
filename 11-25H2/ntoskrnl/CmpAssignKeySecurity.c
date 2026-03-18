/*
 * XREFs of CmpAssignKeySecurity @ 0x1407CD200
 * Callers:
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 * Callees:
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     CmpUnlockKcbStack @ 0x1408713D0 (CmpUnlockKcbStack.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879920 (CmpGetKeyNodeForKcb.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     CmLockHiveSecurityExclusive @ 0x14088709C (CmLockHiveSecurityExclusive.c)
 *     CmpLockKcbStackExclusive @ 0x140889540 (CmpLockKcbStackExclusive.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpCleanupKcbStack @ 0x140975FA0 (CmpCleanupKcbStack.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140976170 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpAssignSecurityToKcb @ 0x1409D27A0 (CmpAssignSecurityToKcb.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmUnlockHiveSecurity @ 0x140BA9AB8 (CmUnlockHiveSecurity.c)
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
