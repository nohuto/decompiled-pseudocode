/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x1407C0AA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140458628 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     CmpInitializeParseContext @ 0x140913DE0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     CmpSearchForOpenSubKeys @ 0x140AB7288 (CmpSearchForOpenSubKeys.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

NTSTATUS __cdecl NtQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  SIZE_T v6; // rsi
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  NTSTATUS v13; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v15; // rcx
  size_t v16; // r14
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  char *v19; // rdx
  signed __int64 v20; // r10
  unsigned int v21; // r9d
  char v23; // [rsp+40h] [rbp-298h]
  char v24; // [rsp+41h] [rbp-297h]
  PVOID Object; // [rsp+48h] [rbp-290h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-288h] BYREF
  __int128 v27; // [rsp+60h] [rbp-278h]
  __int128 v28; // [rsp+70h] [rbp-268h]
  int v29; // [rsp+80h] [rbp-258h]
  _KAFFINITY_EX v30[2]; // [rsp+88h] [rbp-250h] BYREF

  v6 = BufferLength;
  v7 = (int)TargetKey;
  memset(v30, 0, 64);
  memset_0(&v30[0].StaticBitmap[8], 0, 0x1D0uLL);
  v29 = 0;
  Object = 0LL;
  CmpInitializeParseContext(&v30[0].StaticBitmap[8]);
  *(_OWORD *)Src = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v23 = 0;
  CmpInitializeThreadInfo(v30);
  v24 = CmpAcquireShutdownRundown(v9, v8, v10, v11);
  if ( !v24 )
  {
    v13 = -1073741431;
    goto LABEL_22;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v13 = -1073741727;
    goto LABEL_22;
  }
  if ( (unsigned int)v6 < 8 )
  {
    v13 = -1073741789;
    goto LABEL_22;
  }
  if ( (v6 & 1) != 0 )
    goto LABEL_8;
  if ( PreviousMode == 1 )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)RequiredSize < 0x7FFFFFFF0000LL )
      v15 = (__int64)RequiredSize;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    ProbeForWrite(Buffer, v6, 4u);
  }
  v13 = ObReferenceObjectByNameEx(
          v7,
          0,
          131097,
          (_DWORD)CmKeyObjectType,
          PreviousMode,
          (unsigned int)&v30[0].StaticBitmap[8],
          (__int64)&Object);
  if ( v13 >= 0 )
  {
    LODWORD(Src[0]) = v6;
    v16 = v6;
    Src[1] = (void *)CmpAllocateTransientPoolWithQuota();
    if ( Src[1] )
    {
      CmpLockRegistryExclusive();
      v23 = 1;
      v17 = Object;
      v13 = CmpPerformKeyBodyDeletionCheck(Object, 0LL);
      if ( v13 >= 0 )
      {
        if ( (*(_DWORD *)(v17[1] + 184LL) & 0x40000) == 0 )
        {
LABEL_8:
          v13 = -1073741811;
          goto LABEL_22;
        }
        *(_DWORD *)Src[1] = 0;
        LODWORD(v27) = 8;
        *((_QWORD *)&v28 + 1) = (char *)Src[1] + v16;
        *(_QWORD *)&v28 = v17;
        *(_QWORD *)((char *)&v27 + 4) = 0x800000000LL;
        CmpAttachToRegistryProcess((PRKAPC_STATE)&v30[0].StaticBitmap[1]);
        CmpSearchForOpenSubKeys(v17[1], 0LL, Src);
        CmpDetachFromRegistryProcess(&v30[0].StaticBitmap[1]);
        v13 = DWORD1(v27);
        CmpUnlockRegistry(v18);
        v23 = 0;
        *RequiredSize = v27;
        v19 = (char *)Src[1];
        *(_DWORD *)Buffer = *(_DWORD *)Src[1];
        if ( v13 >= 0 )
        {
          v20 = v19 - (_BYTE *)Buffer;
          v21 = 0;
          if ( *(_DWORD *)v19 )
          {
            do
            {
              *(_QWORD *)&v19[24 * ++v21] -= v20;
              v19 = (char *)Src[1];
            }
            while ( v21 < *(_DWORD *)Src[1] );
          }
          memmove(Buffer, v19, v16);
          v13 = 0;
        }
      }
    }
    else
    {
      v13 = -1073741670;
    }
  }
LABEL_22:
  if ( v23 )
    CmpUnlockRegistry(v12);
  CmpCleanupParseContext(&v30[0].StaticBitmap[8], 0LL);
  if ( v24 )
    CmpReleaseShutdownRundown();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Src[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
  CmCleanupThreadInfo((_KAFFINITY_EX **)v30);
  return v13;
}
