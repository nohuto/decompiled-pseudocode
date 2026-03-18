/*
 * XREFs of ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x140052FC0
 * Callers:
 *     ??2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140052F90 (--2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUT.c)
 * Callees:
 *     memset @ 0x1400AC800 (memset.c)
 */

char *__fastcall FxObjectAndHandleHeaderInit(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        char *AllocationStart,
        unsigned __int16 ObjectSize,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObjectType ObjectType)
{
  char *v6; // rsi
  __int64 v7; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8

  v6 = AllocationStart;
  if ( FxDriverGlobals->FxVerifierHandle )
  {
    v6 = AllocationStart + 48;
    *(_OWORD *)AllocationStart = 0LL;
    *((_OWORD *)AllocationStart + 1) = 0LL;
    *((_OWORD *)AllocationStart + 2) = 0LL;
    *((_DWORD *)AllocationStart + 8) = 1146058822;
  }
  if ( ObjectType != FxObjectTypeExternal )
    return v6;
  v7 = ObjectSize;
  *(_QWORD *)&v6[ObjectSize + 8] = 0LL;
  *(_QWORD *)&v6[ObjectSize + 16] = 0LL;
  *(_QWORD *)&v6[ObjectSize + 24] = 0LL;
  *(_QWORD *)&v6[ObjectSize + 32] = 0LL;
  *(_QWORD *)&v6[ObjectSize + 40] = 0LL;
  *(_QWORD *)&v6[ObjectSize] = v6;
  if ( Attributes )
  {
    ContextTypeInfo = Attributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = Attributes->ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
      memset(&v6[v7 + 48], 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    *(_QWORD *)&v6[v7 + 32] = Attributes->ContextTypeInfo;
  }
  return v6;
}
