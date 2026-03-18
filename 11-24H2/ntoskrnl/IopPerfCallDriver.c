/*
 * XREFs of IopPerfCallDriver @ 0x14049F664
 * Callers:
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x140375990 (IofCallDriverSpecifyReturn.c)
 *     IovpCallDriverNoIrpTracking @ 0x140B82908 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140B82950 (IovpCallDriverWithStackBuffer.c)
 *     IovCallDriver @ 0x140BA7D40 (IovCallDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     IopfCallDriver @ 0x1403741A0 (IopfCallDriver.c)
 *     IopAllocateIrpExtension @ 0x140375A80 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x140480B68 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallReturnEvent @ 0x14049F74C (IopPerfLogCallReturnEvent.c)
 *     IopPerfLogCallEvent @ 0x14049F7BC (IopPerfLogCallEvent.c)
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
