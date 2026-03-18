/*
 * XREFs of ?SysMmCreateSectionPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KKPEAU_OBJECT_ATTRIBUTES@@KPEAXW4_MEMORY_CACHING_TYPE@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140286810
 * Callers:
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x14001F0D0 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     SysMmTestCreateSectionPhysicalObject @ 0x140095E50 (SysMmTestCreateSectionPhysicalObject.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     SmmCreatePhysicalObject @ 0x140020860 (SmmCreatePhysicalObject.c)
 */

__int64 __fastcall SysMmCreateSectionPhysicalObject(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        struct SYSMM_PHYSICAL_OBJECT **a10,
        _QWORD *a11)
{
  __int64 result; // rax
  int v14; // ebp
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  _QWORD *v18; // r15
  int PhysicalObject; // r14d
  struct SYSMM_PHYSICAL_OBJECT **v20; // r12
  __int64 v21; // [rsp+50h] [rbp-38h] BYREF
  PVOID v22; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF

  if ( (a2 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(3LL, a2);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1595;
    return result;
  }
  Object = 0LL;
  v14 = a7;
  v15 = 0x8000000LL;
  if ( a7 )
  {
    v16 = a5;
    if ( a7 == 2 )
    {
      LODWORD(v16) = a5 | 0x400;
      v15 = 1207959552LL;
    }
  }
  else
  {
    v16 = a5;
    LODWORD(v16) = a5 | 0x200;
    v15 = 402653184LL;
  }
  v21 = a2;
  v17 = MmCreateSection(&Object, a3, a4, &v21, v16, v15, a6, 0LL);
  v18 = a11;
  PhysicalObject = v17;
  v20 = a10;
  if ( v17 >= 0 )
  {
    v22 = Object;
    PhysicalObject = SmmCreatePhysicalObject(a1, 1, a2, (int)&v22, v14, 0, a8, a9, a10, a11);
    if ( PhysicalObject >= 0 )
      return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_14016164C);
    WdLogSingleEntry3(6LL, a2, v15, v16);
    WdLogGlobalForLineNumber = 1636;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to create section object from MmCreateSection, Size=%I64u, Attributes=%u, PageProtection=%u",
      a2,
      v15,
      v16,
      0LL,
      0LL);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  *v20 = 0LL;
  result = (unsigned int)PhysicalObject;
  *v18 = 0LL;
  return result;
}
