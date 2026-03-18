/*
 * XREFs of SmmCreatePhysicalObject @ 0x1400113D0
 * Callers:
 *     SmmCreatePhysicalObjectForPhysicalMemory @ 0x14005B590 (SmmCreatePhysicalObjectForPhysicalMemory.c)
 *     ?SysMmCreateSectionPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKPEAU_OBJECT_ATTRIBUTES@@KPEAXW4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14027F4A0 (-SysMmCreateSectionPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKPEAU_OBJECT_ATTRIBUTES@@KPEAXW4_MEMO.c)
 *     ?SysMmCreateVirtualMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKKW4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14027F698 (-SysMmCreateVirtualMemoryPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKKW4_MEMORY_CACHING_TYPE@@QEAXW.c)
 * Callees:
 *     SmmDestroyPhysicalObject @ 0x140010DE8 (SmmDestroyPhysicalObject.c)
 *     SmmCreatePhysicalObjectInternal @ 0x140011870 (SmmCreatePhysicalObjectInternal.c)
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x140011B10 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SmmCreatePhysicalObject(
        struct SYSMM_ADAPTER *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        struct SYSMM_PHYSICAL_OBJECT **a9,
        _QWORD *a10)
{
  _QWORD *v10; // rbx
  struct SYSMM_PHYSICAL_OBJECT *PhysicalObjectInternal; // rax
  struct SYSMM_PHYSICAL_OBJECT *v16; // rdi
  int v17; // eax
  unsigned int v18; // esi

  v10 = 0LL;
  if ( a2 != 2 && (a6 & 2) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(
      0,
      262146,
      -1,
      (unsigned int)L"(CreateFlags & SYSMM_PHYSICAL_OBJECT_CREATE_FLAG_LEGACY_MDL_CREATION) == 0",
      644LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  PhysicalObjectInternal = (struct SYSMM_PHYSICAL_OBJECT *)SmmCreatePhysicalObjectInternal(a2, a3, a4, a5, a6, a7, a8);
  v16 = PhysicalObjectInternal;
  if ( PhysicalObjectInternal )
  {
    if ( !a1 )
    {
LABEL_6:
      *a10 = v10;
      *a9 = v16;
      return 0LL;
    }
    v17 = SmmOpenPhysicalObject(PhysicalObjectInternal, a1);
    v18 = v17;
    if ( v17 >= 0 )
    {
      v10 = (_QWORD *)((char *)v16 + 64);
      goto LABEL_6;
    }
    WdLogSingleEntry3(3LL, v16, a1, v17);
    WdLogGlobalForLineNumber = 667;
    SmmDestroyPhysicalObject(v16, 0);
    return v18;
  }
  else
  {
    *a9 = 0LL;
    *a10 = 0LL;
    return 3221225495LL;
  }
}
