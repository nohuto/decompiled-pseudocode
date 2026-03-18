/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@PEAXULSEENTRY@CLogicalSurfaceHandleMap@@@@QEAAXPEAULSEENTRY@CLogicalSurfaceHandleMap@@@Z @ 0x1801FBE6C
 * Callers:
 *     ??1CRedirectedGDISurface@@MEAA@XZ @ 0x1801FBDDC (--1CRedirectedGDISurface@@MEAA@XZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180268434 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 *     ??_GCLogicalSurfaceHandleMap@@UEAAPEAXI@Z @ 0x180268610 (--_GCLogicalSurfaceHandleMap@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::RemoveElement(
        struct _RTL_GENERIC_TABLE *a1,
        void *a2)
{
  if ( !RtlDeleteElementGenericTable(a1, a2) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
