/*
 * XREFs of NtQueryOpenSubKeys @ 0x1407D0490
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByNameEx @ 0x14086BC94 (ObReferenceObjectByNameEx.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmpInitializeParseContext @ 0x14092F540 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092F5F0 (CmpCleanupParseContext.c)
 *     CmpSearchForOpenSubKeys @ 0x140AB65E8 (CmpSearchForOpenSubKeys.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

NTSTATUS __cdecl NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  int v3; // ebx
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  char v10; // r14
  NTSTATUS v11; // ebx
  char PreviousMode; // dl
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  ULONG v15; // ebx
  __int64 v16; // rcx
  PVOID Object; // [rsp+48h] [rbp-250h] BYREF
  int v19; // [rsp+50h] [rbp-248h]
  _KAFFINITY_EX v20[2]; // [rsp+58h] [rbp-240h] BYREF

  v3 = (int)TargetKey;
  memset(v20, 0, 72);
  memset_0(&v20[0].StaticBitmap[8], 0, 0x1D0uLL);
  v19 = 0;
  Object = 0LL;
  CmpInitializeParseContext(&v20[0].StaticBitmap[8]);
  v4 = 0;
  CmpInitializeThreadInfo(v20);
  v10 = CmpAcquireShutdownRundown(v6, v5, v7, v8);
  if ( v10 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)HandleCount < 0x7FFFFFFF0000LL )
        v13 = (__int64)HandleCount;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
    v11 = ObReferenceObjectByNameEx(
            v3,
            0,
            131097,
            (_DWORD)CmKeyObjectType,
            PreviousMode,
            (__int64)&v20[0].StaticBitmap[8],
            (__int64)&Object);
    if ( v11 >= 0 )
    {
      CmpLockRegistryExclusive();
      v4 = 1;
      v14 = Object;
      v11 = CmpPerformKeyBodyDeletionCheck(Object, 0LL);
      if ( v11 >= 0 )
      {
        if ( (*(_DWORD *)(v14[1] + 184LL) & 0x40000) != 0 )
        {
          CmpAttachToRegistryProcess((PRKAPC_STATE)&v20[0].StaticBitmap[2]);
          v15 = CmpSearchForOpenSubKeys(v14[1], 0LL, 0LL);
          CmpDetachFromRegistryProcess(&v20[0].StaticBitmap[2]);
          CmpUnlockRegistry(v16);
          v4 = 0;
          *HandleCount = v15;
          v11 = 0;
        }
        else
        {
          v11 = -1073741811;
        }
      }
    }
  }
  else
  {
    v11 = -1073741431;
  }
  if ( v4 )
    CmpUnlockRegistry(v9);
  CmpCleanupParseContext(&v20[0].StaticBitmap[8], 0LL);
  if ( v10 )
    CmpReleaseShutdownRundown();
  if ( Object )
    ObfDereferenceObject(Object);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)v20);
  return v11;
}
