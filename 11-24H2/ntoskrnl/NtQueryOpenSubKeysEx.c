/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x1407D01B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404590C0 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByNameEx @ 0x1408679A4 (ObReferenceObjectByNameEx.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     CmpInitializeParseContext @ 0x14092D400 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 *     CmpSearchForOpenSubKeys @ 0x140ABB5C8 (CmpSearchForOpenSubKeys.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BB97D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall NtQueryOpenSubKeysEx(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  SIZE_T v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // ebx
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

  v6 = a2;
  memset(v30, 0, 72);
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
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v15 = (__int64)a4;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    ProbeForWrite(a3, v6, 4u);
  }
  v13 = ObReferenceObjectByNameEx(
          a1,
          0,
          131097,
          (_DWORD)CmKeyObjectType,
          PreviousMode,
          (__int64)&v30[0].StaticBitmap[8],
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
        CmpAttachToRegistryProcess((PRKAPC_STATE)&v30[0].StaticBitmap[2]);
        CmpSearchForOpenSubKeys(v17[1], 0LL, Src);
        CmpDetachFromRegistryProcess(&v30[0].StaticBitmap[2]);
        v13 = DWORD1(v27);
        CmpUnlockRegistry(v18);
        v23 = 0;
        *a4 = v27;
        v19 = (char *)Src[1];
        *a3 = *(_DWORD *)Src[1];
        if ( v13 >= 0 )
        {
          v20 = v19 - (char *)a3;
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
          memmove(a3, v19, v16);
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
  CmpCleanupThreadInfo((_KAFFINITY_EX **)v30);
  return (unsigned int)v13;
}
