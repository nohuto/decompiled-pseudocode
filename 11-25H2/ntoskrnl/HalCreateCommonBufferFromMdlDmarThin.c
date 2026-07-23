/*
 * XREFs of HalCreateCommonBufferFromMdlDmarThin @ 0x14054F060
 * Callers:
 *     <none>
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404118D8 (HalpDmaDereferenceDomainObject.c)
 *     HalpAllocateCommonBufferEntry @ 0x1404147B4 (HalpAllocateCommonBufferEntry.c)
 *     HalpDmaReferenceDomainObject @ 0x1404148C8 (HalpDmaReferenceDomainObject.c)
 *     HalpCreateCommonBufferFromMdlVerifyParams @ 0x14054C298 (HalpCreateCommonBufferFromMdlVerifyParams.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  unsigned __int64 v11; // r8
  char *MappedSystemVa; // rax
  PMDL MemoryDescriptorList; // [rsp+48h] [rbp-39h] BYREF
  __int128 v15; // [rsp+50h] [rbp-31h]
  unsigned __int64 v16; // [rsp+60h] [rbp-21h]
  _QWORD *v17; // [rsp+68h] [rbp-19h]
  __int128 v18; // [rsp+70h] [rbp-11h] BYREF
  __int128 v19; // [rsp+80h] [rbp-1h]
  __int64 v20; // [rsp+90h] [rbp+Fh]

  v5 = *(__int64 **)(a1 + 512);
  MemoryDescriptorList = a2;
  v17 = a5;
  v20 = 0LL;
  LODWORD(v16) = 0;
  v18 = 0LL;
  v19 = 0LL;
  v15 = 0LL;
  CommonBufferFromMdlVerifyParams = HalpCreateCommonBufferFromMdlVerifyParams(
                                      (__int64 **)&MemoryDescriptorList,
                                      a3,
                                      a4,
                                      (__int64)&v18);
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
      v10 = *((_QWORD *)&v19 + 1);
      v11 = *((_QWORD *)&v19 + 1) + MemoryDescriptorList->ByteOffset;
      LODWORD(v15) = 2;
      *((_QWORD *)&v15 + 1) = (char *)MemoryDescriptorList + 8 * (v11 >> 12) + 48;
      v16 = (unsigned __int64)v19 >> 12;
      CommonBufferEntry = guard_dispatch_icall_no_overrides(v5[5]);
      if ( CommonBufferEntry >= 0 )
      {
        if ( (v9->MdlFlags & 5) != 0 )
          MappedSystemVa = (char *)v9->MappedSystemVa;
        else
          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000000u);
        CommonBufferEntry = HalpAllocateCommonBufferEntry(
                              (__int64)v9,
                              (_RTL_BALANCED_NODE *)&MappedSystemVa[v10],
                              0LL,
                              (__int64)v5,
                              0,
                              0LL);
        if ( CommonBufferEntry >= 0 )
        {
          *v17 = 0LL;
          return (unsigned int)CommonBufferEntry;
        }
        guard_dispatch_icall_no_overrides(v5[5]);
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
