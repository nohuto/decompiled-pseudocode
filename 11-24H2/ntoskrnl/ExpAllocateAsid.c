/*
 * XREFs of ExpAllocateAsid @ 0x1406570F8
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x1406576CC (ExpShareAddressSpaceWithDevice.c)
 *     IommuPasidDeviceCreate @ 0x140701910 (IommuPasidDeviceCreate.c)
 * Callees:
 *     ExpAcquireSvmAgentsLock @ 0x14065709C (ExpAcquireSvmAgentsLock.c)
 *     ExpAllocateReservedAsids @ 0x1406572AC (ExpAllocateReservedAsids.c)
 *     ExpReleaseSvmAgentsLock @ 0x140657694 (ExpReleaseSvmAgentsLock.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAllocateAsid(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int8 v4; // bp
  __int64 v5; // rbx
  unsigned int v6; // edi
  char *Pool2; // rsi
  char *v8; // r14
  __int64 *v10; // rax
  unsigned int i; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
LABEL_2:
  v4 = ExpAcquireSvmAgentsLock(&LockHandle);
  while ( 1 )
  {
    v5 = (unsigned int)dword_140EFA6C4;
    if ( (_DWORD)dword_140EFA6C4 != dword_140EFA6C8 )
      break;
    LOBYTE(v3) = v4;
    if ( (_DWORD)dword_140EFA6C4 == ExpSvmAgents )
    {
      ExpReleaseSvmAgentsLock(&LockHandle, v3);
      return 0LL;
    }
    ExpReleaseSvmAgentsLock(&LockHandle, v3);
    v6 = v5 + 64;
    if ( (int)v5 + 64 >= (unsigned int)v5 )
    {
      if ( v6 > ExpSvmAgents )
        v6 = ExpSvmAgents;
    }
    else
    {
      v6 = ExpSvmAgents;
    }
    Pool2 = (char *)ExAllocatePool2(0x40uLL, 24LL * v6, 0x73417845u);
    if ( !Pool2 )
      return 0LL;
    v4 = ExpAcquireSvmAgentsLock(&LockHandle);
    if ( (_DWORD)v5 == (_DWORD)dword_140EFA6C4 )
    {
      v8 = (char *)qword_140EFA6D0;
      if ( qword_140EFA6D0 )
        memmove(Pool2, qword_140EFA6D0, 24 * v5);
      memset_0(&Pool2[24 * v5], 0, 24LL * (v6 - (unsigned int)v5));
      if ( !qword_140EFA6D0 )
        ExpAllocateReservedAsids(Pool2);
      qword_140EFA6D0 = Pool2;
      Pool2 = v8;
      LODWORD(dword_140EFA6C4) = v6;
      if ( !v8 )
        continue;
    }
    LOBYTE(v3) = v4;
    ExpReleaseSvmAgentsLock(&LockHandle, v3);
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_2;
  }
  v10 = (__int64 *)qword_140EFA6D0;
  for ( i = 0; i < (unsigned int)dword_140EFA6C4; ++i )
  {
    if ( !*v10 )
      break;
    v10 += 3;
  }
  v10[1] = 1LL;
  *((_BYTE *)v10 + 16) = 0;
  if ( !a2 )
    a2 = -2LL;
  LOBYTE(v3) = v4;
  *v10 = a2;
  ++dword_140EFA6C8;
  ExpReleaseSvmAgentsLock(&LockHandle, v3);
  return i + 1;
}
