/*
 * XREFs of IommupHvInitializeLibrary @ 0x140C14944
 * Callers:
 *     IommuInitializeLibrary @ 0x140564434 (IommuInitializeLibrary.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     MmFreeContiguousMemory @ 0x1403A93D0 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x140411690 (MmAllocateContiguousNodeMemory.c)
 *     HalpInterruptSetIdtEntry @ 0x14055A460 (HalpInterruptSetIdtEntry.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IommupHvInitializeLibrary(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r13d
  __int64 v5; // rsi
  PVOID *Pool2; // rbp
  int v7; // r15d
  char v8; // al
  int v9; // r14d
  unsigned int i; // r12d
  unsigned __int64 v12; // r15
  char *ContiguousNodeMemory; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned int j; // edi
  PVOID *v19; // rdi
  char *v20; // rax
  __int64 v21; // rdx
  __int128 v22; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-28h]

  v4 = 0;
  v23 = 0;
  LODWORD(v5) = 0;
  Pool2 = 0LL;
  v7 = 0;
  v22 = 0LL;
  if ( !qword_140FC0F98 )
    return 3221225659LL;
  guard_dispatch_icall_no_overrides(&v22, a2, a3, a4);
  v8 = v22;
  if ( (v22 & 1) == 0 && (!HalpHvParaVirtIommuDomain || (v22 & 4) == 0) )
    return 3221225659LL;
  v9 = DWORD1(v22);
  if ( v23 && v23 < DWORD1(v22) )
    v9 = v23;
  if ( (v22 & 1) != 0 )
  {
    v5 = HIDWORD(v22);
    if ( !HIDWORD(v22) )
      v5 = 1LL;
    Pool2 = (PVOID *)ExAllocatePool2(0x40uLL, (unsigned int)((_DWORD)v5 << 6), 0x496C6148uLL);
    if ( !Pool2 )
      return 3221225626LL;
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned int)v5 )
      {
        v8 = v22;
        goto LABEL_28;
      }
      v12 = (unsigned __int64)i << 6;
      *(_DWORD *)((char *)Pool2 + v12) = i;
      ContiguousNodeMemory = (char *)MmAllocateContiguousNodeMemory(0x2000LL, 0, -1, 0, 4, 0x80000000);
      *(PVOID *)((char *)Pool2 + v12 + 8) = ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      *(PVOID *)((char *)Pool2 + v12 + 16) = ContiguousNodeMemory + 4096;
      PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
      v7 = guard_dispatch_icall_no_overrides(i, 128LL, (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart, 206LL);
      if ( v7 < 0 )
        goto LABEL_19;
      ++v4;
    }
    v7 = -1073741670;
LABEL_19:
    for ( j = 0; j < v4; ++j )
      guard_dispatch_icall_no_overrides(j, v14, v15, v16);
    if ( (_DWORD)v5 )
    {
      v19 = Pool2 + 1;
      do
      {
        if ( *v19 )
          MmFreeContiguousMemory(*v19);
        v19 += 8;
        --v5;
      }
      while ( v5 );
    }
    ExFreePoolWithTag(Pool2, 0x496C6148u);
  }
  else
  {
LABEL_28:
    if ( (v8 & 1) != 0 )
      IommupHvSvmEnabled = 1;
    if ( HalpHvParaVirtIommuDomain && (v8 & 4) != 0 )
    {
      IommupHvPasidEnabled = 1;
      IommupHvPasidInitialDomainId = _InterlockedIncrement(&HalpIommuDomainId);
    }
    IommupHvMaximumAsids = v9;
    if ( IommupHvSvmEnabled )
    {
      IommupHvPageRequestQueueCount = v5;
      IommupHvPageRequestQueues = (__int64)Pool2;
      if ( (_DWORD)v5 )
      {
        v20 = (char *)(Pool2 + 4);
        v21 = (unsigned int)v5;
        do
        {
          *((_QWORD *)v20 - 1) = 0LL;
          *(_QWORD *)v20 = 0LL;
          *((_DWORD *)v20 + 2) = 0;
          *((_QWORD *)v20 + 3) = 0LL;
          *((_QWORD *)v20 + 2) = IommupHvGetPageFault;
          v20 += 64;
          --v21;
        }
        while ( v21 );
      }
      HalpInterruptSetIdtEntry(
        0xCEu,
        (__int64 (__fastcall *)(struct _KINTERRUPT *, void *, __int64, __int64))IommupHvInterruptRoutine,
        12,
        1LL,
        -1LL);
    }
    IommupHvGlobalPushLock = 0LL;
  }
  return (unsigned int)v7;
}
