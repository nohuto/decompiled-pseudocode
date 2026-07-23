/*
 * XREFs of HalCreateCommonBufferFromMdlDmaThin @ 0x14054EA60
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
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r11
  _QWORD *v15; // r11
  unsigned int i; // edx
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  char *MappedSystemVa; // rax
  unsigned __int64 *v23; // [rsp+40h] [rbp-61h]
  __int64 v24; // [rsp+48h] [rbp-59h]
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-49h] BYREF
  __int128 v27; // [rsp+60h] [rbp-41h]
  unsigned __int64 v28; // [rsp+70h] [rbp-31h]
  __int64 v29; // [rsp+78h] [rbp-29h]
  __int64 *v30; // [rsp+80h] [rbp-21h]
  __int128 v31; // [rsp+88h] [rbp-19h] BYREF
  __int128 v32; // [rsp+98h] [rbp-9h]
  __int64 v33; // [rsp+A8h] [rbp+7h]

  v5 = *(_QWORD *)(a1 + 512);
  MemoryDescriptorList = a2;
  v30 = a5;
  v33 = 0LL;
  LODWORD(v28) = 0;
  v24 = 0LL;
  v23 = 0LL;
  v31 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v32 = 0LL;
  v27 = 0LL;
  CommonBufferFromMdlVerifyParams = HalpCreateCommonBufferFromMdlVerifyParams(
                                      (__int64 **)&MemoryDescriptorList,
                                      a3,
                                      a4,
                                      (__int64)&v31);
  CommonBufferEntry = CommonBufferFromMdlVerifyParams;
  if ( CommonBufferFromMdlVerifyParams >= 0 )
  {
    CommonBufferEntry = HalpDmaReferenceDomainObject(v5);
    if ( CommonBufferEntry < 0 )
      return (unsigned int)CommonBufferEntry;
    v10 = *(_QWORD *)(v5 + 56);
    if ( v10 )
      *(_BYTE *)(v10 + 524) = 1;
    if ( BYTE4(v33) )
    {
      v23 = (unsigned __int64 *)&v31;
      v7 = (unsigned __int64 *)&v31 + 1;
    }
    v11 = MemoryDescriptorList;
    v12 = 0LL;
    v13 = v32;
    v14 = *((_QWORD *)&v32 + 1) + MemoryDescriptorList->ByteOffset;
    v29 = *((_QWORD *)&v32 + 1);
    v15 = &MemoryDescriptorList[1].Next + (v14 >> 12);
    if ( (_DWORD)v33 == 2 )
    {
      for ( i = 1; i < (unsigned __int64)v32 >> 12; ++i )
      {
        if ( v15[i] - 1LL != v15[i - 1] )
          goto LABEL_25;
      }
      v17 = *v15 << 12;
      v24 = v17;
      v18 = *(_DWORD *)(a1 + 448);
      if ( v18 < 0x40 )
        v19 = (1LL << v18) - 1;
      else
        v19 = -1LL;
      if ( !v7 )
      {
        if ( (unsigned __int64)v32 + v17 - 1 <= v19 )
          goto LABEL_29;
LABEL_25:
        CommonBufferEntry = -1073741811;
        goto LABEL_26;
      }
      v20 = *v7;
      if ( *v7 >= v19 )
        v20 = v19;
      *v7 = v20;
      if ( v17 < *v23 || v13 + v17 - 1 > v20 )
      {
        CommonBufferEntry = -1073741811;
        goto LABEL_26;
      }
    }
    else
    {
      CommonBufferEntry = -1073741637;
LABEL_26:
      if ( *(_DWORD *)(v5 + 48) != 2 )
      {
LABEL_31:
        if ( v6 )
          guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 40));
        goto LABEL_33;
      }
      LODWORD(v27) = 2;
      *((_QWORD *)&v27 + 1) = v15;
      v28 = v13 >> 12;
      CommonBufferEntry = guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 40));
      if ( CommonBufferEntry < 0 )
      {
LABEL_33:
        HalpDmaDereferenceDomainObject((__int64 *)v5);
        return (unsigned int)CommonBufferEntry;
      }
      v6 = 1;
      v12 = (__int64)v11;
    }
LABEL_29:
    if ( (v11->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)v11->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000000u);
    CommonBufferEntry = HalpAllocateCommonBufferEntry(v12, (_RTL_BALANCED_NODE *)&MappedSystemVa[v29], v24, v5, 0, 0LL);
    if ( CommonBufferEntry >= 0 )
    {
      *v30 = v24;
      return (unsigned int)CommonBufferEntry;
    }
    goto LABEL_31;
  }
  if ( (unsigned int)(CommonBufferFromMdlVerifyParams + 1073741585) <= 1 )
    return (unsigned int)-1073741811;
  return (unsigned int)CommonBufferEntry;
}
