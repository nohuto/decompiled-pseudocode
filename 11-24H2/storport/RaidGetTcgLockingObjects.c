/*
 * XREFs of RaidGetTcgLockingObjects @ 0x14008CDB4
 * Callers:
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x14007C7A8 (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x14008108C (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x14008AC00 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x14008AF58 (RaidAssignTcgRangeLockingObject.c)
 *     RaidGetTcgConfigInformation @ 0x14008C7E8 (RaidGetTcgConfigInformation.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     TcglibCloseSession @ 0x14013BB98 (TcglibCloseSession.c)
 *     TcglibGetLockingObjects @ 0x14013C208 (TcglibGetLockingObjects.c)
 *     TcglibOpenSession @ 0x14013C388 (TcglibOpenSession.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidGetTcgLockingObjects(int *a1, _QWORD *a2, char *a3)
{
  int v4; // eax
  __int64 v6; // rbp
  __int64 v7; // rsi
  int LockingObjects; // ebx
  size_t v10; // rbx
  void *Pool; // rax
  void *v12; // rdi
  __int64 i; // rcx
  __int64 v14; // rdx
  _OWORD v15[3]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h]

  v16 = 0LL;
  v4 = *a1;
  memset(v15, 0, sizeof(v15));
  if ( v4 == 1431193940 )
  {
    if ( (*((_BYTE *)a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v6 = *((_QWORD *)a1 + 448);
    if ( !v6 )
      return (unsigned int)-1073741637;
    v7 = *((_QWORD *)a1 + 449);
  }
  else
  {
    if ( v4 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v6 = *((_QWORD *)a1 + 757);
    if ( !v6 )
      return (unsigned int)-1073741637;
    v7 = *((_QWORD *)a1 + 758);
  }
  if ( !v7 )
    return (unsigned int)-1073741637;
  v10 = (unsigned int)(80 * *(_DWORD *)(v7 + 128));
  Pool = (void *)RaidAllocatePool(256LL, v10, 1129603410LL, *((_QWORD *)a1 + 1));
  v12 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741801;
  memset_0(Pool, 0, v10);
  LockingObjects = TcglibOpenSession(v6, 2LL, v15);
  if ( LockingObjects < 0 )
  {
    RtlStringCbCopyA(a3, 0x20uLL, "TcglibOpenSession");
LABEL_22:
    ExFreePoolWithTag(v12, 0x43546152u);
    return (unsigned int)LockingObjects;
  }
  LockingObjects = TcglibGetLockingObjects(v6, v15, *(unsigned int *)(v7 + 128), v12);
  if ( LockingObjects >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 128); *((_QWORD *)v12 + v14 + 7) *= *(unsigned int *)(v7 + 100) )
    {
      v14 = 10 * i;
      i = (unsigned int)(i + 1);
      *((_QWORD *)v12 + v14 + 6) *= *(unsigned int *)(v7 + 100);
    }
    *a2 = v12;
    v12 = 0LL;
  }
  else
  {
    RtlStringCbCopyA(a3, 0x20uLL, "TcglibGetLockingObjects");
  }
  TcglibCloseSession(v6, v15);
  if ( v12 )
    goto LABEL_22;
  return (unsigned int)LockingObjects;
}
