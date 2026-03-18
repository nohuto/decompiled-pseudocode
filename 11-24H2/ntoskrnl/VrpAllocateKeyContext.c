/*
 * XREFs of VrpAllocateKeyContext @ 0x1409FE79C
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409FE37C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x140A73F7C (VrpPreLoadKey.c)
 *     VrpPostOpenOrCreate @ 0x140AE85D0 (VrpPostOpenOrCreate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall VrpAllocateKeyContext(PVOID Object)
{
  __int64 Pool2; // rbx

  Pool2 = ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(Object, 0x67655256u);
    *(_QWORD *)(Pool2 + 40) = Object;
  }
  return Pool2;
}
