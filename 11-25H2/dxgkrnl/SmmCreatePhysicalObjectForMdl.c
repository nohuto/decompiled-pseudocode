/*
 * XREFs of SmmCreatePhysicalObjectForMdl @ 0x1400112E8
 * Callers:
 *     ?SysMmCreatePhysicalObjectForExistingMdl@@YAJPEAUSYSMM_ADAPTER@@PEAU_MDL@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14000FA0C (-SysMmCreatePhysicalObjectForExistingMdl@@YAJPEAUSYSMM_ADAPTER@@PEAU_MDL@@QEAXW4SYSMM_PHYSICAL_O.c)
 *     DxgkMapMdlToIoMmuCB @ 0x140056940 (DxgkMapMdlToIoMmuCB.c)
 *     SysMmTestCreatePhysicalObjectForExistingMdl @ 0x140093860 (SysMmTestCreatePhysicalObjectForExistingMdl.c)
 * Callees:
 *     SmmDestroyPhysicalObject @ 0x140010DE8 (SmmDestroyPhysicalObject.c)
 *     SmmCreatePhysicalObjectInternal @ 0x140011870 (SmmCreatePhysicalObjectInternal.c)
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x140011B10 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 */

__int64 __fastcall SmmCreatePhysicalObjectForMdl(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        struct SYSMM_PHYSICAL_OBJECT **a7,
        _QWORD *a8)
{
  struct SYSMM_PHYSICAL_OBJECT *PhysicalObjectInternal; // rax
  struct SYSMM_PHYSICAL_OBJECT *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  _QWORD *v13; // rcx
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  PhysicalObjectInternal = (struct SYSMM_PHYSICAL_OBJECT *)SmmCreatePhysicalObjectInternal(
                                                             2,
                                                             *(_DWORD *)(a2 + 40),
                                                             (unsigned int)&v15,
                                                             a3,
                                                             a4,
                                                             a5,
                                                             a6);
  v10 = PhysicalObjectInternal;
  if ( PhysicalObjectInternal )
  {
    if ( a1 )
    {
      v11 = SmmOpenPhysicalObject(PhysicalObjectInternal, a1);
      v12 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry3(3LL, v10, a1, v11);
        WdLogGlobalForLineNumber = 667;
        SmmDestroyPhysicalObject(v10, 0);
        return v12;
      }
      v13 = (_QWORD *)((char *)v10 + 64);
    }
    else
    {
      v13 = 0LL;
    }
    v12 = 0;
    *a8 = v13;
    *a7 = v10;
  }
  else
  {
    v12 = -1073741801;
    *a7 = 0LL;
    *a8 = 0LL;
  }
  return v12;
}
