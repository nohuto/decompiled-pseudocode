/*
 * XREFs of IovUtilIsWdmStack @ 0x140B92C78
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x140BA5760 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140BA58F0 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PpvUtilIsPdo @ 0x140B82C90 (PpvUtilIsPdo.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140B92A30 (IovUtilGetBottomDeviceObjectWithTag.c)
 */

_BOOL8 __fastcall IovUtilIsWdmStack(_QWORD *a1)
{
  PVOID BottomDeviceObjectWithTag; // rax
  BOOL IsPdo; // ebx
  PVOID v3; // rcx

  BottomDeviceObjectWithTag = IovUtilGetBottomDeviceObjectWithTag(a1);
  IsPdo = PpvUtilIsPdo((__int64)BottomDeviceObjectWithTag);
  ObfDereferenceObjectWithTag(v3, 0x49667256u);
  return IsPdo;
}
