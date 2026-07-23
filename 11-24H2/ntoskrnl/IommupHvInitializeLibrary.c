/*
 * XREFs of IommupHvInitializeLibrary @ 0x140C16944
 * Callers:
 *     IommuInitializeLibrary @ 0x140562064 (IommuInitializeLibrary.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     MmAllocateContiguousNodeMemory @ 0x1403958D0 (MmAllocateContiguousNodeMemory.c)
 *     MmFreeContiguousMemory @ 0x140398060 (MmFreeContiguousMemory.c)
 *     HalpInterruptSetIdtEntry @ 0x140558090 (HalpInterruptSetIdtEntry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IommupHvInitializeLibrary(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rsi
  PVOID *Pool2; // rbp
  int v5; // r15d
  char v6; // al
  int v7; // r14d
  unsigned int i; // r12d
  unsigned __int64 v10; // r15
  char *ContiguousNodeMemory; // rax
  __int64 v12; // rdx
  unsigned int j; // edi
  PVOID *v14; // rdi
  char *v15; // rax
  __int64 v16; // rdx
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-28h]

  v2 = 0;
  v18 = 0;
  LODWORD(v3) = 0;
  Pool2 = 0LL;
  v5 = 0;
  v17 = 0LL;
  if ( !qword_140FC11F8 )
    return 3221225659LL;
  guard_dispatch_icall_no_overrides(&v17, a2);
  v6 = v17;
  if ( (v17 & 1) == 0 && (!HalpHvParaVirtIommuDomain || (v17 & 4) == 0) )
    return 3221225659LL;
  v7 = DWORD1(v17);
  if ( v18 && v18 < DWORD1(v17) )
    v7 = v18;
  if ( (v17 & 1) != 0 )
  {
    v3 = HIDWORD(v17);
    if ( !HIDWORD(v17) )
      v3 = 1LL;
    Pool2 = (PVOID *)ExAllocatePool2(0x40uLL, (unsigned int)((_DWORD)v3 << 6), 0x496C6148uLL);
    if ( !Pool2 )
      return 3221225626LL;
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned int)v3 )
      {
        v6 = v17;
        goto LABEL_28;
      }
      v10 = (unsigned __int64)i << 6;
      *(_DWORD *)((char *)Pool2 + v10) = i;
      ContiguousNodeMemory = (char *)MmAllocateContiguousNodeMemory(0x2000LL, 0, -1, 0, 4, 0x80000000);
      *(PVOID *)((char *)Pool2 + v10 + 8) = ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      *(PVOID *)((char *)Pool2 + v10 + 16) = ContiguousNodeMemory + 4096;
      MmGetPhysicalAddress(ContiguousNodeMemory);
      v5 = guard_dispatch_icall_no_overrides(i, 128LL);
      if ( v5 < 0 )
        goto LABEL_19;
      ++v2;
    }
    v5 = -1073741670;
LABEL_19:
    for ( j = 0; j < v2; ++j )
      guard_dispatch_icall_no_overrides(j, v12);
    if ( (_DWORD)v3 )
    {
      v14 = Pool2 + 1;
      do
      {
        if ( *v14 )
          MmFreeContiguousMemory(*v14);
        v14 += 8;
        --v3;
      }
      while ( v3 );
    }
    ExFreePoolWithTag(Pool2, 0x496C6148u);
  }
  else
  {
LABEL_28:
    if ( (v6 & 1) != 0 )
      IommupHvSvmEnabled = 1;
    if ( HalpHvParaVirtIommuDomain && (v6 & 4) != 0 )
    {
      IommupHvPasidEnabled = 1;
      IommupHvPasidInitialDomainId = _InterlockedIncrement(&HalpIommuDomainId);
    }
    IommupHvMaximumAsids = v7;
    if ( IommupHvSvmEnabled )
    {
      IommupHvPageRequestQueueCount = v3;
      IommupHvPageRequestQueues = (__int64)Pool2;
      if ( (_DWORD)v3 )
      {
        v15 = (char *)(Pool2 + 4);
        v16 = (unsigned int)v3;
        do
        {
          *((_QWORD *)v15 - 1) = 0LL;
          *(_QWORD *)v15 = 0LL;
          *((_DWORD *)v15 + 2) = 0;
          *((_QWORD *)v15 + 3) = 0LL;
          *((_QWORD *)v15 + 2) = IommupHvGetPageFault;
          v15 += 64;
          --v16;
        }
        while ( v16 );
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
  return (unsigned int)v5;
}
