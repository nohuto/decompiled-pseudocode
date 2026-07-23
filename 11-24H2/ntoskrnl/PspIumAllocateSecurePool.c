/*
 * XREFs of PspIumAllocateSecurePool @ 0x1405E3AD8
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocateSecurePoolMemory @ 0x14067DD58 (MmAllocateSecurePoolMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspIumAllocateSecurePool(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // r12
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 Pool2; // rax
  unsigned int SecurePoolMemory; // esi
  PVOID MappedSystemVa; // rsi
  __int64 i; // r12
  __int64 v11; // rax
  PMDL v12; // r14
  size_t v13; // r8
  PMDL *v15; // r14
  PMDL v16; // rdi
  PMDL MemoryDescriptorList[2]; // [rsp+30h] [rbp-39h] BYREF
  struct _MDL v18; // [rsp+40h] [rbp-29h] BYREF
  __int64 v19; // [rsp+70h] [rbp+7h]
  _QWORD v20[3]; // [rsp+78h] [rbp+Fh]

  v1 = (*(_DWORD *)(a1 + 40) & 0x2000) == 0;
  memset(&v18, 0, sizeof(v18));
  v19 = 0LL;
  v3 = 2LL;
  *(_OWORD *)MemoryDescriptorList = 0LL;
  if ( v1 )
  {
    LODWORD(v4) = *(_DWORD *)(a1 + 44);
    if ( (_DWORD)v4 )
    {
      v5 = *(_QWORD *)(a1 + 32) >> 12;
      v6 = 0LL;
      while ( (_DWORD)v4 )
      {
        v4 = (unsigned int)(v4 - 1);
        v5 = (((8 * v5) & 0xFFF) != 0) + ((8 * v5) >> 12);
        v20[v4] = v5;
        if ( (unsigned int)v6 < 2 )
        {
          Pool2 = ExAllocatePool2(0x40uLL, 8 * (v5 & 0xFFFFFFFFFFFFFLL) + 48, 0x6C644Du);
          MemoryDescriptorList[v6] = (PMDL)Pool2;
          if ( !Pool2 )
          {
            SecurePoolMemory = -1073741670;
            goto LABEL_23;
          }
          *(_QWORD *)Pool2 = 0LL;
          *(_QWORD *)(Pool2 + 32) = 0LL;
          *(_DWORD *)(Pool2 + 44) = 0;
          *(_DWORD *)(Pool2 + 40) = 0;
          *(_DWORD *)(Pool2 + 8) = 131120;
        }
        v6 = (unsigned int)(v6 + 1);
      }
      MappedSystemVa = (PVOID)(a1 + 64);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 44); i = (unsigned int)(i + 1) )
      {
        LODWORD(v6) = v6 - 1;
        v11 = v6 & 1;
        v12 = MemoryDescriptorList[v11];
        if ( (v12->MdlFlags & 1) != 0 )
          MmUnmapLockedPages(v12->MappedSystemVa, MemoryDescriptorList[v11]);
        v13 = 8LL * v20[i];
        v12->ByteCount = LODWORD(v20[i]) << 12;
        memmove(&v12[1], MappedSystemVa, v13);
        if ( (v12->MdlFlags & 5) == 0 )
          MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000010u);
        if ( (v12->MdlFlags & 1) == 0 )
          return 3221225626LL;
        MappedSystemVa = v12->MappedSystemVa;
      }
      v3 = 2LL;
    }
  }
  SecurePoolMemory = MmAllocateSecurePoolMemory(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
LABEL_23:
  if ( (v18.MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v18.MappedSystemVa, &v18);
  v15 = MemoryDescriptorList;
  do
  {
    v16 = *v15;
    if ( *v15 )
    {
      if ( (v16->MdlFlags & 1) != 0 )
        MmUnmapLockedPages(v16->MappedSystemVa, *v15);
      ExFreePoolWithTag(v16, 0);
    }
    ++v15;
    --v3;
  }
  while ( v3 );
  return SecurePoolMemory;
}
