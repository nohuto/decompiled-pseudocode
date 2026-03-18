/*
 * XREFs of HalCreateCommonBufferFromMdl @ 0x14054FDB0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpDmaDereferenceDomainObject @ 0x1403A92FC (HalpDmaDereferenceDomainObject.c)
 *     HalpAllocateCommonBufferEntry @ 0x140411084 (HalpAllocateCommonBufferEntry.c)
 *     HalpDmaReferenceDomainObject @ 0x14041119C (HalpDmaReferenceDomainObject.c)
 *     HalpCreateCommonBufferFromMdlVerifyParams @ 0x14054EBA8 (HalpCreateCommonBufferFromMdlVerifyParams.c)
 *     MmGetCacheAttributeEx @ 0x14066F620 (MmGetCacheAttributeEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalCreateCommonBufferFromMdl(
        __int64 a1,
        struct _MDL *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rsi
  char v6; // r12
  int CommonBufferFromMdlVerifyParams; // eax
  int CacheAttribute; // ebx
  PMDL v9; // r13
  unsigned __int64 v10; // r14
  _QWORD *v11; // r15
  __int64 v12; // rax
  unsigned __int64 *v13; // r11
  __int64 i; // r15
  unsigned __int64 v15; // r8
  int v16; // ecx
  unsigned int v17; // edx
  unsigned __int64 v18; // r10
  __int64 v19; // rbx
  __int64 v20; // r9
  unsigned int v21; // ecx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 *v24; // rdx
  bool v25; // cc
  char v26; // al
  PVOID MappedSystemVa; // rax
  char v29; // [rsp+40h] [rbp-81h]
  char v30; // [rsp+41h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+48h] [rbp-79h] BYREF
  int v32; // [rsp+50h] [rbp-71h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-69h]
  unsigned __int64 *v34; // [rsp+60h] [rbp-61h]
  _QWORD *v35; // [rsp+68h] [rbp-59h]
  unsigned __int64 *v36; // [rsp+70h] [rbp-51h]
  __int64 v37; // [rsp+78h] [rbp-49h]
  __int128 v38; // [rsp+80h] [rbp-41h] BYREF
  unsigned __int64 v39; // [rsp+90h] [rbp-31h]
  __int64 v40; // [rsp+98h] [rbp-29h]
  unsigned __int64 *v41; // [rsp+A0h] [rbp-21h]
  __int128 v42; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v43; // [rsp+B8h] [rbp-9h]
  __int64 v44; // [rsp+C8h] [rbp+7h]

  v5 = *(_QWORD *)(a1 + 512);
  MemoryDescriptorList = a2;
  v41 = a5;
  v37 = a1;
  v44 = 0LL;
  LODWORD(v39) = 0;
  v32 = 0;
  v34 = 0LL;
  v42 = 0LL;
  v36 = 0LL;
  v6 = 0;
  v43 = 0LL;
  v33 = 0LL;
  v38 = 0LL;
  v30 = 0;
  v29 = 0;
  CommonBufferFromMdlVerifyParams = HalpCreateCommonBufferFromMdlVerifyParams(
                                      (__int64 **)&MemoryDescriptorList,
                                      a3,
                                      a4,
                                      (__int64)&v42);
  CacheAttribute = CommonBufferFromMdlVerifyParams;
  if ( CommonBufferFromMdlVerifyParams < 0 )
  {
    if ( (unsigned int)(CommonBufferFromMdlVerifyParams + 1073741585) <= 1 )
      return (unsigned int)-1073741811;
    return (unsigned int)CacheAttribute;
  }
  v9 = MemoryDescriptorList;
  v40 = *((_QWORD *)&v43 + 1);
  v10 = v43;
  v11 = &MemoryDescriptorList[1].Next
      + ((*((_QWORD *)&v43 + 1) + (unsigned __int64)MemoryDescriptorList->ByteOffset) >> 12);
  v35 = v11;
  if ( (_DWORD)v44 )
  {
    if ( (_DWORD)v44 == 1 )
      LODWORD(MemoryDescriptorList) = 2;
    else
      LODWORD(MemoryDescriptorList) = 3;
  }
  else
  {
    LODWORD(MemoryDescriptorList) = 1;
  }
  CacheAttribute = HalpDmaReferenceDomainObject(v5);
  if ( CacheAttribute >= 0 )
  {
    v12 = *(_QWORD *)(v5 + 56);
    if ( v12 )
      *(_BYTE *)(v12 + 524) = 1;
    if ( BYTE4(v44) )
    {
      v13 = (unsigned __int64 *)&v42 + 1;
      v34 = (unsigned __int64 *)&v42;
      v36 = (unsigned __int64 *)&v42 + 1;
    }
    else
    {
      v13 = v36;
    }
    if ( !*(_BYTE *)(v37 + 445) )
    {
      for ( i = 0LL; (unsigned int)i < v10 >> 12; i = (unsigned int)(i + 1) )
      {
        CacheAttribute = MmGetCacheAttributeEx(v35[i] << 12, 0LL, &v32);
        if ( CacheAttribute < 0 )
          goto LABEL_61;
        if ( v32 )
        {
          CacheAttribute = -1073741811;
          goto LABEL_61;
        }
      }
      v11 = v35;
      v6 = 0;
      v13 = v36;
    }
    LODWORD(v38) = 2;
    v15 = v10 >> 12;
    v39 = v10 >> 12;
    *((_QWORD *)&v38 + 1) = v11;
    v16 = *(_DWORD *)(v5 + 48);
    if ( v16 && (unsigned int)(v16 - 1) > 1 )
    {
LABEL_48:
      CacheAttribute = guard_dispatch_icall_no_overrides(
                         *(_QWORD *)(v5 + 40),
                         (unsigned int)MemoryDescriptorList,
                         &v38,
                         0LL);
      if ( CacheAttribute >= 0 )
      {
        v18 = v33;
        v19 = (__int64)v9;
        v30 = 1;
LABEL_51:
        if ( (v9->MdlFlags & 5) != 0 )
        {
          MappedSystemVa = v9->MappedSystemVa;
        }
        else
        {
          MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000000u);
          v18 = v33;
        }
        CacheAttribute = HalpAllocateCommonBufferEntry(v19, (unsigned __int64)MappedSystemVa + v40, v18, v5, 0, 0LL);
        if ( CacheAttribute >= 0 )
        {
          *v41 = v33;
          return (unsigned int)CacheAttribute;
        }
      }
      v18 = v33;
      v6 = v29;
      v26 = v30;
      goto LABEL_57;
    }
    v17 = 1;
    v18 = *v11 << 12;
    v19 = 0LL;
    v33 = v18;
    v35 = 0LL;
    while ( 1 )
    {
      v20 = v17;
      if ( v17 >= v15 )
        break;
      if ( v11[v17] - 1LL != v11[v17 - 1] )
      {
        CacheAttribute = -1073741811;
        goto LABEL_46;
      }
      ++v17;
    }
    v21 = *(_DWORD *)(v37 + 448);
    if ( v21 < 0x40 )
      v22 = (1LL << v21) - 1;
    else
      v22 = -1LL;
    if ( v13 )
    {
      v23 = *v13;
      if ( *v13 >= v22 )
        v23 = v22;
      v24 = v34;
      *v13 = v23;
      if ( v18 < *v24 )
        goto LABEL_39;
      v25 = v18 + v10 - 1 <= v23;
    }
    else
    {
      v25 = v18 + v10 - 1 <= v22;
    }
    if ( v25 )
    {
      if ( *(_DWORD *)(v5 + 48) == 1 )
      {
        CacheAttribute = guard_dispatch_icall_no_overrides(
                           *(_QWORD *)(v5 + 40),
                           (unsigned int)MemoryDescriptorList,
                           &v38,
                           v20);
        if ( CacheAttribute < 0 )
          goto LABEL_61;
        v18 = v33;
        v19 = (__int64)v35;
        v29 = 1;
        goto LABEL_51;
      }
      if ( (_DWORD)v44 == 2 )
      {
        v29 = 0;
        goto LABEL_51;
      }
      CacheAttribute = -1073741637;
      goto LABEL_46;
    }
LABEL_39:
    CacheAttribute = -1073741811;
LABEL_46:
    if ( *(_DWORD *)(v5 + 48) == 2 )
      goto LABEL_48;
    v26 = 0;
LABEL_57:
    if ( v6 )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 40), &v38, v15, v20);
    }
    else if ( v26 )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 40), v18, v10 >> 12, v20);
    }
LABEL_61:
    HalpDmaDereferenceDomainObject((__int64 *)v5);
  }
  return (unsigned int)CacheAttribute;
}
