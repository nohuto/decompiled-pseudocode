/*
 * XREFs of IovpBuildDriverObjectList @ 0x140B82894
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1407442A0 (ObEnumerateObjectsByType.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14041D310 (ObReferenceObjectSafe.c)
 *     PnpIsLegacyDriver @ 0x1409C6164 (PnpIsLegacyDriver.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char __fastcall IovpBuildDriverObjectList(__int64 a1)
{
  ULONG_PTR Pool2; // rax
  _QWORD *v3; // rbx

  if ( !(unsigned int)PnpIsLegacyDriver(a1) )
    goto LABEL_6;
  Pool2 = ExAllocatePool2(0x40uLL, 0x10uLL, 0x6F7649uLL);
  v3 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    if ( ObReferenceObjectSafe(a1) )
    {
      v3[1] = a1;
      *v3 = IovDriverListHead;
      IovDriverListHead = v3;
    }
    else
    {
      ExFreePoolWithTag(v3, 0);
    }
LABEL_6:
    LOBYTE(Pool2) = 1;
  }
  return Pool2;
}
