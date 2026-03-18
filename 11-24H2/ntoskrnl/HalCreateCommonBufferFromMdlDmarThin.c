/*
 * XREFs of HalCreateCommonBufferFromMdlDmarThin @ 0x140551960
 * Callers:
 *     <none>
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpDmaDereferenceDomainObject @ 0x1403A92FC (HalpDmaDereferenceDomainObject.c)
 *     HalpAllocateCommonBufferEntry @ 0x140411084 (HalpAllocateCommonBufferEntry.c)
 *     HalpDmaReferenceDomainObject @ 0x14041119C (HalpDmaReferenceDomainObject.c)
 *     HalpCreateCommonBufferFromMdlVerifyParams @ 0x14054EBA8 (HalpCreateCommonBufferFromMdlVerifyParams.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalCreateCommonBufferFromMdlDmarThin(
        __int64 a1,
        struct _MDL *a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5)
{
  __int64 *v5; // rsi
  int CommonBufferFromMdlVerifyParams; // eax
  int CommonBufferEntry; // ebx
  __int64 v8; // rax
  PMDL v9; // rdi
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  PVOID MappedSystemVa; // rax
  __int64 v15; // r9
  PMDL MemoryDescriptorList; // [rsp+48h] [rbp-39h] BYREF
  __int128 v18; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-21h]
  _QWORD *v20; // [rsp+68h] [rbp-19h]
  __int128 v21; // [rsp+70h] [rbp-11h] BYREF
  __int128 v22; // [rsp+80h] [rbp-1h]
  __int64 v23; // [rsp+90h] [rbp+Fh]

  v5 = *(__int64 **)(a1 + 512);
  MemoryDescriptorList = a2;
  v20 = a5;
  v23 = 0LL;
  LODWORD(v19) = 0;
  v21 = 0LL;
  v22 = 0LL;
  v18 = 0LL;
  CommonBufferFromMdlVerifyParams = HalpCreateCommonBufferFromMdlVerifyParams(
                                      (__int64 **)&MemoryDescriptorList,
                                      a3,
                                      a4,
                                      (__int64)&v21);
  CommonBufferEntry = CommonBufferFromMdlVerifyParams;
  if ( CommonBufferFromMdlVerifyParams >= 0 )
  {
    CommonBufferEntry = HalpDmaReferenceDomainObject((__int64)v5);
    if ( CommonBufferEntry >= 0 )
    {
      v8 = v5[7];
      if ( v8 )
        *(_BYTE *)(v8 + 524) = 1;
      v9 = MemoryDescriptorList;
      v10 = *((_QWORD *)&v22 + 1);
      v11 = v22;
      v12 = *((_QWORD *)&v22 + 1) + MemoryDescriptorList->ByteOffset;
      if ( (_DWORD)v23 )
      {
        if ( (_DWORD)v23 == 1 )
          v13 = 2LL;
        else
          v13 = 3LL;
      }
      else
      {
        v13 = 1LL;
      }
      LODWORD(v18) = 2;
      *((_QWORD *)&v18 + 1) = (char *)MemoryDescriptorList + 8 * (v12 >> 12) + 48;
      v19 = (unsigned __int64)v22 >> 12;
      CommonBufferEntry = guard_dispatch_icall_no_overrides(v5[5], v13, &v18, 0LL);
      if ( CommonBufferEntry >= 0 )
      {
        if ( (v9->MdlFlags & 5) != 0 )
          MappedSystemVa = v9->MappedSystemVa;
        else
          MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000000u);
        CommonBufferEntry = HalpAllocateCommonBufferEntry(
                              (__int64)v9,
                              (unsigned __int64)MappedSystemVa + v10,
                              0LL,
                              (__int64)v5,
                              0,
                              0LL);
        if ( CommonBufferEntry >= 0 )
        {
          *v20 = 0LL;
          return (unsigned int)CommonBufferEntry;
        }
        guard_dispatch_icall_no_overrides(v5[5], 0LL, v11 >> 12, v15);
      }
      HalpDmaDereferenceDomainObject(v5);
    }
  }
  else if ( (unsigned int)(CommonBufferFromMdlVerifyParams + 1073741585) <= 1 )
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)CommonBufferEntry;
}
