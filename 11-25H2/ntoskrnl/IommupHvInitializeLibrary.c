/*
 * XREFs of IommupHvInitializeLibrary @ 0x140C038B4
 * Callers:
 *     IommuInitializeLibrary @ 0x140561B94 (IommuInitializeLibrary.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x140414C00 (MmAllocateContiguousNodeMemory.c)
 *     HalpInterruptSetIdtEntry @ 0x140557B60 (HalpInterruptSetIdtEntry.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 IommupHvInitializeLibrary()
{
  unsigned int v0; // r13d
  __int64 v1; // rsi
  PVOID *Pool2; // rbp
  int v3; // r15d
  char v4; // al
  int v5; // r14d
  unsigned int i; // r12d
  unsigned __int64 v8; // r15
  char *ContiguousNodeMemory; // rax
  unsigned int j; // edi
  PVOID *v11; // rdi
  char *v12; // rax
  __int64 v13; // rdx
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-28h]

  v0 = 0;
  v15 = 0;
  LODWORD(v1) = 0;
  Pool2 = 0LL;
  v3 = 0;
  v14 = 0LL;
  if ( !qword_140FC07F8 )
    return 3221225659LL;
  guard_dispatch_icall_no_overrides(&v14);
  v4 = v14;
  if ( (v14 & 1) == 0 && (!HalpHvParaVirtIommuDomain || (v14 & 4) == 0) )
    return 3221225659LL;
  v5 = DWORD1(v14);
  if ( v15 && v15 < DWORD1(v14) )
    v5 = v15;
  if ( (v14 & 1) != 0 )
  {
    v1 = HIDWORD(v14);
    if ( !HIDWORD(v14) )
      v1 = 1LL;
    Pool2 = (PVOID *)ExAllocatePool2(0x40uLL, (unsigned int)((_DWORD)v1 << 6), 0x496C6148uLL);
    if ( !Pool2 )
      return 3221225626LL;
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned int)v1 )
      {
        v4 = v14;
        goto LABEL_28;
      }
      v8 = (unsigned __int64)i << 6;
      *(_DWORD *)((char *)Pool2 + v8) = i;
      ContiguousNodeMemory = (char *)MmAllocateContiguousNodeMemory(0x2000LL, 0, -1, 0, 4, 0x80000000);
      *(PVOID *)((char *)Pool2 + v8 + 8) = ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      *(PVOID *)((char *)Pool2 + v8 + 16) = ContiguousNodeMemory + 4096;
      MmGetPhysicalAddress(ContiguousNodeMemory);
      v3 = guard_dispatch_icall_no_overrides(i);
      if ( v3 < 0 )
        goto LABEL_19;
      ++v0;
    }
    v3 = -1073741670;
LABEL_19:
    for ( j = 0; j < v0; ++j )
      guard_dispatch_icall_no_overrides(j);
    if ( (_DWORD)v1 )
    {
      v11 = Pool2 + 1;
      do
      {
        if ( *v11 )
          MmFreeContiguousMemory(*v11);
        v11 += 8;
        --v1;
      }
      while ( v1 );
    }
    ExFreePoolWithTag(Pool2, 0x496C6148u);
  }
  else
  {
LABEL_28:
    if ( (v4 & 1) != 0 )
      IommupHvSvmEnabled = 1;
    if ( HalpHvParaVirtIommuDomain && (v4 & 4) != 0 )
    {
      IommupHvPasidEnabled = 1;
      IommupHvPasidInitialDomainId = _InterlockedIncrement(&HalpIommuDomainId);
    }
    IommupHvMaximumAsids = v5;
    if ( IommupHvSvmEnabled )
    {
      IommupHvPageRequestQueueCount = v1;
      IommupHvPageRequestQueues = (__int64)Pool2;
      if ( (_DWORD)v1 )
      {
        v12 = (char *)(Pool2 + 4);
        v13 = (unsigned int)v1;
        do
        {
          *((_QWORD *)v12 - 1) = 0LL;
          *(_QWORD *)v12 = 0LL;
          *((_DWORD *)v12 + 2) = 0;
          *((_QWORD *)v12 + 3) = 0LL;
          *((_QWORD *)v12 + 2) = IommupHvGetPageFault;
          v12 += 64;
          --v13;
        }
        while ( v13 );
      }
      HalpInterruptSetIdtEntry(
        0xCEu,
        (__int64 (__fastcall *)(struct _KINTERRUPT *, void *))IommupHvInterruptRoutine,
        12,
        1LL,
        -1LL);
    }
    IommupHvGlobalPushLock = 0LL;
  }
  return (unsigned int)v3;
}
