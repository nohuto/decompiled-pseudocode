/*
 * XREFs of ??2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140056F80
 * Callers:
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x140056E30 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x140056FB0 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 */

void *__fastcall FxMemoryBufferFromPoolLookaside::operator new(
        unsigned __int64 FxDriverGlobals,
        _FX_DRIVER_GLOBALS *ValidMemory,
        void *Attributes,
        _WDF_OBJECT_ATTRIBUTES *Size)
{
  return FxObjectAndHandleHeaderInit(ValidMemory, Attributes, 0x90u, Size, FxObjectTypeExternal);
}
