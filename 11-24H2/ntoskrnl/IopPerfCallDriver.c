/*
 * XREFs of IopPerfCallDriver @ 0x14049A4AC
 * Callers:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x1404999F0 (IofCallDriverSpecifyReturn.c)
 *     IovpCallDriverNoIrpTracking @ 0x140B84908 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140B84950 (IovpCallDriverWithStackBuffer.c)
 *     IovCallDriver @ 0x140BA9D40 (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x14025CA60 (IopfCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     IopAllocateIrpExtension @ 0x140435420 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14047B638 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallReturnEvent @ 0x14049A594 (IopPerfLogCallReturnEvent.c)
 *     IopPerfLogCallEvent @ 0x14049A604 (IopPerfLogCallEvent.c)
 */

__int64 __fastcall IopPerfCallDriver(PVOID Object, ULONG_PTR a2)
{
  unsigned __int32 v4; // ebx
  unsigned int v5; // ebp
  __int64 IrpExtension; // rcx

  if ( (IopPerfStatus & 2) != 0 && IopIrpHasValidCombinationOfExtensionTypes(a2, 1) )
  {
    IrpExtension = IopAllocateIrpExtension(a2, 1);
    if ( IrpExtension )
      *(_QWORD *)(IrpExtension + 40) = MEMORY[0xFFFFF78000000014];
  }
  if ( (IopPerfStatus & 1) != 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v4 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
    IopPerfLogCallEvent(*((_QWORD *)Object + 1), a2, v4);
    v5 = IopfCallDriver((__int64)Object, a2);
    IopPerfLogCallReturnEvent(a2, v4);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  else
  {
    return (unsigned int)IopfCallDriver((__int64)Object, a2);
  }
  return v5;
}
