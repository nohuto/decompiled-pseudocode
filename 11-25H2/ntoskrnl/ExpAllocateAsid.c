/*
 * XREFs of ExpAllocateAsid @ 0x14064CB78
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x14064D138 (ExpShareAddressSpaceWithDevice.c)
 *     IommuPasidDeviceCreate @ 0x1406F7E70 (IommuPasidDeviceCreate.c)
 * Callees:
 *     ExpAcquireSvmAgentsLock @ 0x14064CB1C (ExpAcquireSvmAgentsLock.c)
 *     ExpReleaseSvmAgentsLock @ 0x14064D100 (ExpReleaseSvmAgentsLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAllocateAsid(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int8 v4; // bp
  __int64 v5; // rbx
  unsigned int v6; // edi
  _QWORD *Pool2; // rsi
  _QWORD *v8; // r14
  __int64 *v10; // rax
  unsigned int i; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
LABEL_2:
  v4 = ExpAcquireSvmAgentsLock(&LockHandle);
  while ( 1 )
  {
    v5 = (unsigned int)dword_140EFA064;
    if ( (_DWORD)dword_140EFA064 != dword_140EFA068 )
      break;
    LOBYTE(v3) = v4;
    if ( (_DWORD)dword_140EFA064 == ExpSvmAgents )
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
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      return 0LL;
    v4 = ExpAcquireSvmAgentsLock(&LockHandle);
    if ( (_DWORD)v5 == (_DWORD)dword_140EFA064 )
    {
      v8 = qword_140EFA070;
      if ( qword_140EFA070 )
        memmove(Pool2, qword_140EFA070, 24 * v5);
      memset_0(&Pool2[3 * v5], 0, 24LL * (v6 - (unsigned int)v5));
      if ( !qword_140EFA070 )
      {
        *Pool2 = -1LL;
        Pool2[1] = 1LL;
        ++dword_140EFA068;
      }
      qword_140EFA070 = Pool2;
      Pool2 = v8;
      LODWORD(dword_140EFA064) = v6;
      if ( !v8 )
        continue;
    }
    LOBYTE(v3) = v4;
    ExpReleaseSvmAgentsLock(&LockHandle, v3);
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_2;
  }
  v10 = (__int64 *)qword_140EFA070;
  for ( i = 0; i < (unsigned int)dword_140EFA064; ++i )
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
  ++dword_140EFA068;
  ExpReleaseSvmAgentsLock(&LockHandle, v3);
  return i + 1;
}
