/*
 * XREFs of HalCreateCommonBufferFromMdlDmaThin @ 0x1405513C0
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

__int64 __fastcall HalCreateCommonBufferFromMdlDmaThin(
        __int64 a1,
        struct _MDL *a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5)
{
  __int64 v5; // r14
  char v6; // r12
  unsigned __int64 *v7; // r13
  int CommonBufferFromMdlVerifyParams; // eax
  int CommonBufferEntry; // ebx
  __int64 v10; // rax
  PMDL v11; // r15
  __int64 v12; // rbx
  int v13; // r8d
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r11
  _QWORD *v16; // r11
  unsigned int i; // edx
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 *v22; // r9
  __int64 v23; // rdx
  PVOID MappedSystemVa; // rax
  unsigned __int64 *v26; // [rsp+40h] [rbp-61h]
  __int64 v27; // [rsp+48h] [rbp-59h]
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-49h] BYREF
  __int128 v30; // [rsp+60h] [rbp-41h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-31h]
  __int64 v32; // [rsp+78h] [rbp-29h]
  __int64 *v33; // [rsp+80h] [rbp-21h]
  __int128 v34; // [rsp+88h] [rbp-19h] BYREF
  __int128 v35; // [rsp+98h] [rbp-9h]
  __int64 v36; // [rsp+A8h] [rbp+7h]

  v5 = *(_QWORD *)(a1 + 512);
  MemoryDescriptorList = a2;
  v33 = a5;
  v36 = 0LL;
  LODWORD(v31) = 0;
  v27 = 0LL;
  v26 = 0LL;
  v34 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v35 = 0LL;
  v30 = 0LL;
  CommonBufferFromMdlVerifyParams = HalpCreateCommonBufferFromMdlVerifyParams(
                                      (__int64 **)&MemoryDescriptorList,
                                      a3,
                                      a4,
                                      (__int64)&v34);
  CommonBufferEntry = CommonBufferFromMdlVerifyParams;
  if ( CommonBufferFromMdlVerifyParams >= 0 )
  {
    CommonBufferEntry = HalpDmaReferenceDomainObject(v5);
    if ( CommonBufferEntry < 0 )
      return (unsigned int)CommonBufferEntry;
    v10 = *(_QWORD *)(v5 + 56);
    if ( v10 )
      *(_BYTE *)(v10 + 524) = 1;
    if ( BYTE4(v36) )
    {
      v26 = (unsigned __int64 *)&v34;
      v7 = (unsigned __int64 *)&v34 + 1;
    }
    v11 = MemoryDescriptorList;
    v12 = 0LL;
    v13 = v36;
    v14 = v35;
    v15 = *((_QWORD *)&v35 + 1) + MemoryDescriptorList->ByteOffset;
    v32 = *((_QWORD *)&v35 + 1);
    v16 = &MemoryDescriptorList[1].Next + (v15 >> 12);
    if ( (_DWORD)v36 == 2 )
    {
      for ( i = 1; i < (unsigned __int64)v35 >> 12; ++i )
      {
        if ( v16[i] - 1LL != v16[i - 1] )
          goto LABEL_25;
      }
      v18 = *v16 << 12;
      v27 = v18;
      v19 = *(_DWORD *)(a1 + 448);
      if ( v19 < 0x40 )
        v20 = (1LL << v19) - 1;
      else
        v20 = -1LL;
      if ( !v7 )
      {
        if ( (unsigned __int64)v35 + v18 - 1 <= v20 )
          goto LABEL_35;
LABEL_25:
        CommonBufferEntry = -1073741811;
        goto LABEL_26;
      }
      v21 = *v7;
      v22 = v26;
      if ( *v7 >= v20 )
        v21 = v20;
      *v7 = v21;
      if ( v18 < *v26 || v14 + v18 - 1 > v21 )
      {
        v13 = v36;
        CommonBufferEntry = -1073741811;
        goto LABEL_27;
      }
    }
    else
    {
      CommonBufferEntry = -1073741637;
LABEL_26:
      v22 = v26;
LABEL_27:
      if ( *(_DWORD *)(v5 + 48) != 2 )
      {
LABEL_37:
        if ( v6 )
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 40), v27, v14 >> 12, v22);
        goto LABEL_39;
      }
      if ( v13 )
      {
        if ( v13 == 1 )
          v23 = 2LL;
        else
          v23 = 3LL;
      }
      else
      {
        v23 = 1LL;
      }
      LODWORD(v30) = 2;
      *((_QWORD *)&v30 + 1) = v16;
      v31 = v14 >> 12;
      CommonBufferEntry = guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 40), v23, &v30, 0LL);
      if ( CommonBufferEntry < 0 )
      {
LABEL_39:
        HalpDmaDereferenceDomainObject((__int64 *)v5);
        return (unsigned int)CommonBufferEntry;
      }
      v6 = 1;
      v12 = (__int64)v11;
    }
LABEL_35:
    if ( (v11->MdlFlags & 5) != 0 )
      MappedSystemVa = v11->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000000u);
    CommonBufferEntry = HalpAllocateCommonBufferEntry(v12, (unsigned __int64)MappedSystemVa + v32, v27, v5, 0, 0LL);
    if ( CommonBufferEntry >= 0 )
    {
      *v33 = v27;
      return (unsigned int)CommonBufferEntry;
    }
    goto LABEL_37;
  }
  if ( (unsigned int)(CommonBufferFromMdlVerifyParams + 1073741585) <= 1 )
    return (unsigned int)-1073741811;
  return (unsigned int)CommonBufferEntry;
}
