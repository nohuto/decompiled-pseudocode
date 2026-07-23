/*
 * XREFs of HalCreateCommonBufferFromMdl @ 0x14054D6F0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpAllocateCommonBufferEntry @ 0x140396510 (HalpAllocateCommonBufferEntry.c)
 *     HalpDmaReferenceDomainObject @ 0x140396628 (HalpDmaReferenceDomainObject.c)
 *     HalpDmaDereferenceDomainObject @ 0x140397F8C (HalpDmaDereferenceDomainObject.c)
 *     HalpCreateCommonBufferFromMdlVerifyParams @ 0x14054C4E8 (HalpCreateCommonBufferFromMdlVerifyParams.c)
 *     MmGetCacheAttributeEx @ 0x1406707F0 (MmGetCacheAttributeEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  int v15; // ecx
  unsigned int v16; // edx
  unsigned __int64 v17; // r10
  __int64 v18; // rbx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 *v22; // rdx
  bool v23; // cc
  char v24; // al
  char *MappedSystemVa; // rax
  char v27; // [rsp+40h] [rbp-81h]
  char v28; // [rsp+41h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+48h] [rbp-79h] BYREF
  int v30; // [rsp+50h] [rbp-71h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-69h]
  unsigned __int64 *v32; // [rsp+60h] [rbp-61h]
  _QWORD *v33; // [rsp+68h] [rbp-59h]
  unsigned __int64 *v34; // [rsp+70h] [rbp-51h]
  __int64 v35; // [rsp+78h] [rbp-49h]
  __int128 v36; // [rsp+80h] [rbp-41h] BYREF
  unsigned __int64 v37; // [rsp+90h] [rbp-31h]
  __int64 v38; // [rsp+98h] [rbp-29h]
  unsigned __int64 *v39; // [rsp+A0h] [rbp-21h]
  __int128 v40; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v41; // [rsp+B8h] [rbp-9h]
  __int64 v42; // [rsp+C8h] [rbp+7h]

  v5 = *(_QWORD *)(a1 + 512);
  MemoryDescriptorList = a2;
  v39 = a5;
  v35 = a1;
  v42 = 0LL;
  LODWORD(v37) = 0;
  v30 = 0;
  v32 = 0LL;
  v40 = 0LL;
  v34 = 0LL;
  v6 = 0;
  v41 = 0LL;
  v31 = 0LL;
  v36 = 0LL;
  v28 = 0;
  v27 = 0;
  CommonBufferFromMdlVerifyParams = HalpCreateCommonBufferFromMdlVerifyParams(
                                      (__int64 **)&MemoryDescriptorList,
                                      a3,
                                      a4,
                                      (__int64)&v40);
  CacheAttribute = CommonBufferFromMdlVerifyParams;
  if ( CommonBufferFromMdlVerifyParams < 0 )
  {
    if ( (unsigned int)(CommonBufferFromMdlVerifyParams + 1073741585) <= 1 )
      return (unsigned int)-1073741811;
    return (unsigned int)CacheAttribute;
  }
  v9 = MemoryDescriptorList;
  v38 = *((_QWORD *)&v41 + 1);
  v10 = v41;
  v11 = &MemoryDescriptorList[1].Next
      + ((*((_QWORD *)&v41 + 1) + (unsigned __int64)MemoryDescriptorList->ByteOffset) >> 12);
  v33 = v11;
  if ( (_DWORD)v42 )
  {
    if ( (_DWORD)v42 == 1 )
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
    if ( BYTE4(v42) )
    {
      v13 = (unsigned __int64 *)&v40 + 1;
      v32 = (unsigned __int64 *)&v40;
      v34 = (unsigned __int64 *)&v40 + 1;
    }
    else
    {
      v13 = v34;
    }
    if ( !*(_BYTE *)(v35 + 445) )
    {
      for ( i = 0LL; (unsigned int)i < v10 >> 12; i = (unsigned int)(i + 1) )
      {
        CacheAttribute = MmGetCacheAttributeEx(v33[i] << 12, 0LL, &v30);
        if ( CacheAttribute < 0 )
          goto LABEL_61;
        if ( v30 )
        {
          CacheAttribute = -1073741811;
          goto LABEL_61;
        }
      }
      v11 = v33;
      v6 = 0;
      v13 = v34;
    }
    LODWORD(v36) = 2;
    v37 = v10 >> 12;
    *((_QWORD *)&v36 + 1) = v11;
    v15 = *(_DWORD *)(v5 + 48);
    if ( v15 && (unsigned int)(v15 - 1) > 1 )
    {
LABEL_48:
      CacheAttribute = guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 40), (unsigned int)MemoryDescriptorList);
      if ( CacheAttribute >= 0 )
      {
        v17 = v31;
        v18 = (__int64)v9;
        v28 = 1;
LABEL_51:
        if ( (v9->MdlFlags & 5) != 0 )
        {
          MappedSystemVa = (char *)v9->MappedSystemVa;
        }
        else
        {
          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000000u);
          v17 = v31;
        }
        CacheAttribute = HalpAllocateCommonBufferEntry(v18, (_RTL_BALANCED_NODE *)&MappedSystemVa[v38], v17, v5, 0, 0LL);
        if ( CacheAttribute >= 0 )
        {
          *v39 = v31;
          return (unsigned int)CacheAttribute;
        }
      }
      v17 = v31;
      v6 = v27;
      v24 = v28;
      goto LABEL_57;
    }
    v16 = 1;
    v17 = *v11 << 12;
    v18 = 0LL;
    v31 = v17;
    v33 = 0LL;
    while ( v16 < v10 >> 12 )
    {
      if ( v11[v16] - 1LL != v11[v16 - 1] )
      {
        CacheAttribute = -1073741811;
        goto LABEL_46;
      }
      ++v16;
    }
    v19 = *(_DWORD *)(v35 + 448);
    if ( v19 < 0x40 )
      v20 = (1LL << v19) - 1;
    else
      v20 = -1LL;
    if ( v13 )
    {
      v21 = *v13;
      if ( *v13 >= v20 )
        v21 = v20;
      v22 = v32;
      *v13 = v21;
      if ( v17 < *v22 )
        goto LABEL_39;
      v23 = v17 + v10 - 1 <= v21;
    }
    else
    {
      v23 = v17 + v10 - 1 <= v20;
    }
    if ( v23 )
    {
      if ( *(_DWORD *)(v5 + 48) == 1 )
      {
        CacheAttribute = guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 40), (unsigned int)MemoryDescriptorList);
        if ( CacheAttribute < 0 )
          goto LABEL_61;
        v17 = v31;
        v18 = (__int64)v33;
        v27 = 1;
        goto LABEL_51;
      }
      if ( (_DWORD)v42 == 2 )
      {
        v27 = 0;
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
    v24 = 0;
LABEL_57:
    if ( v6 )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 40), &v36);
    }
    else if ( v24 )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 40), v17);
    }
LABEL_61:
    HalpDmaDereferenceDomainObject((__int64 *)v5);
  }
  return (unsigned int)CacheAttribute;
}
