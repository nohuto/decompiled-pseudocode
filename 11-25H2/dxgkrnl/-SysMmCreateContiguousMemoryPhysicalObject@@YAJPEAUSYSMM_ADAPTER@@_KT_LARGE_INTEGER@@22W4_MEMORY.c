/*
 * XREFs of ?SysMmCreateContiguousMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAX@Z @ 0x14001039C
 * Callers:
 *     DxgkAllocateContiguousMemoryCB @ 0x14000F8E0 (DxgkAllocateContiguousMemoryCB.c)
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x14000FC40 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     SysMmTestCreateContiguousMemoryPhysicalObject @ 0x140093730 (SysMmTestCreateContiguousMemoryPhysicalObject.c)
 * Callees:
 *     SmmDestroyPhysicalObject @ 0x140010DE8 (SmmDestroyPhysicalObject.c)
 *     SmmCreatePhysicalObjectInternal @ 0x140011870 (SmmCreatePhysicalObjectInternal.c)
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x140011B10 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SysMmCreateContiguousMemoryPhysicalObject(
        struct SYSMM_ADAPTER *a1,
        SIZE_T a2,
        PHYSICAL_ADDRESS a3,
        PHYSICAL_ADDRESS a4,
        PHYSICAL_ADDRESS BoundaryAddressMultiple,
        MEMORY_CACHING_TYPE CacheType,
        __int64 a7,
        int a8,
        struct SYSMM_PHYSICAL_OBJECT **a9,
        _QWORD *a10,
        _QWORD *a11)
{
  __int64 v13; // rbx
  PVOID ContiguousMemorySpecifyCache; // rax
  _QWORD *v15; // r15
  char *v16; // rdi
  struct SYSMM_PHYSICAL_OBJECT **v17; // r12
  void *v18; // rbp
  struct SYSMM_PHYSICAL_OBJECT *PhysicalObjectInternal; // rax
  struct SYSMM_PHYSICAL_OBJECT *v20; // rsi
  int v21; // eax
  unsigned int v22; // ebx
  __int64 result; // rax
  _QWORD *v24; // rcx
  PVOID v25; // [rsp+88h] [rbp+10h] BYREF

  if ( (a2 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(3LL, a2);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1152;
  }
  else
  {
    v13 = CacheType;
    ContiguousMemorySpecifyCache = MmAllocateContiguousMemorySpecifyCache(
                                     a2,
                                     a3,
                                     a4,
                                     BoundaryAddressMultiple,
                                     CacheType);
    v15 = a10;
    v16 = 0LL;
    v17 = a9;
    v18 = ContiguousMemorySpecifyCache;
    if ( ContiguousMemorySpecifyCache )
    {
      v25 = ContiguousMemorySpecifyCache;
      PhysicalObjectInternal = (struct SYSMM_PHYSICAL_OBJECT *)SmmCreatePhysicalObjectInternal(
                                                                 5,
                                                                 a2,
                                                                 (unsigned int)&v25,
                                                                 v13,
                                                                 0,
                                                                 a7,
                                                                 a8);
      v20 = PhysicalObjectInternal;
      if ( PhysicalObjectInternal )
      {
        if ( !a1 )
        {
LABEL_7:
          *v15 = v16;
          *v17 = v20;
          *a11 = v18;
          return 0LL;
        }
        v21 = SmmOpenPhysicalObject(PhysicalObjectInternal, a1);
        v22 = v21;
        if ( v21 >= 0 )
        {
          v16 = (char *)v20 + 64;
          goto LABEL_7;
        }
        WdLogSingleEntry3(3LL, v20, a1, v21);
        WdLogGlobalForLineNumber = 667;
        SmmDestroyPhysicalObject(v20);
      }
      else
      {
        *v17 = 0LL;
        v22 = -1073741801;
        *v15 = 0LL;
      }
      MmFreeContiguousMemory(v18);
    }
    else
    {
      _InterlockedIncrement(&dword_14015E648);
      WdLogSingleEntry2(6LL, a2, v13);
      WdLogGlobalForLineNumber = 1170;
      DxgkLogInternalTriageEvent(
        0,
        262145,
        -1,
        (unsigned int)L"Failed to allocate contiguous memory from MmAllocateContiguousMemorySpecifyCache, Size=%I64u, CacheType=%u",
        a2,
        v13,
        0LL,
        0LL,
        0LL);
      v22 = -1073741801;
    }
    v24 = a11;
    result = v22;
    *v17 = 0LL;
    *v15 = 0LL;
    *v24 = 0LL;
  }
  return result;
}
