/*
 * XREFs of ?SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z @ 0x14003A634
 * Callers:
 *     DxgkAllocateAdlCB @ 0x14003A570 (DxgkAllocateAdlCB.c)
 *     SysMmTestLockObject @ 0x140095F50 (SysMmTestLockObject.c)
 * Callees:
 *     ?SmmValidateParameters@@YA_NPEBUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x14003A684 (-SmmValidateParameters@@YA_NPEBUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1402877FC (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 */

__int64 __fastcall SysMmLockObject(struct SYSMM_ADAPTER_OBJECT *a1)
{
  bool v2; // al
  unsigned int v3; // edx

  v2 = SmmValidateParameters((struct SYSMM_ADAPTER_OBJECT *)((char *)a1 - 64));
  v3 = 0;
  if ( !v2 )
    return 3221225485LL;
  if ( (*((_DWORD *)a1 - 5) & 1) == 0 )
    return (unsigned int)SmmLockPagedObject((struct SYSMM_ADAPTER_OBJECT *)((char *)a1 - 64), a1);
  return v3;
}
