/*
 * XREFs of VrpAllocateKeyContext @ 0x1409F7A0C
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409F75EC (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x140A6D8DC (VrpPreLoadKey.c)
 *     VrpPostOpenOrCreate @ 0x140AEB874 (VrpPostOpenOrCreate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall VrpAllocateKeyContext(PVOID Object)
{
  __int64 Pool2; // rbx

  Pool2 = ExAllocatePool2(0x100uLL, 0x30uLL, 0x67655256u);
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(Object, 0x67655256u);
    *(_QWORD *)(Pool2 + 40) = Object;
  }
  return Pool2;
}
