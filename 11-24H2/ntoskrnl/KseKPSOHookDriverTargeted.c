/*
 * XREFs of KseKPSOHookDriverTargeted @ 0x1405CC010
 * Callers:
 *     <none>
 * Callees:
 *     KsepDebugPrint @ 0x1402CA2D8 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14048E6F8 (KsepLogError.c)
 *     RtlWriteRegistryValue @ 0x140A54360 (RtlWriteRegistryValue.c)
 */

__int64 KseKPSOHookDriverTargeted()
{
  NTSTATUS v0; // eax
  __int64 v1; // rcx
  char v2; // al
  int ValueData[6]; // [rsp+30h] [rbp-18h] BYREF

  ValueData[0] = 1;
  v0 = RtlWriteRegistryValue(2u, L"Session Manager\\Memory Management", L"KernelPadSectionsOverride", 4u, ValueData, 4u);
  if ( v0 < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v1 + 1] = v0;
    v2 = KsepDebugFlag;
    KsepHistoryErrors[2 * v1] = 1179791;
    if ( (v2 & 2) != 0 )
      KsepDebugPrint(12LL, (int)"KernelPadSectionsOverride shim: failed to set KernelPadSectionsOverride value.\n");
    KsepLogError(12LL, (__int64)"KernelPadSectionsOverride shim: failed to set KernelPadSectionsOverride value.\n");
  }
  return 3221226348LL;
}
