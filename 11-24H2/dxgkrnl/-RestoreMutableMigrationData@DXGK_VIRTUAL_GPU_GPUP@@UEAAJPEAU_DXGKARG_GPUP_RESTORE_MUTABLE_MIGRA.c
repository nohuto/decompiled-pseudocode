/*
 * XREFs of ?RestoreMutableMigrationData@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GPUP_RESTORE_MUTABLE_MIGRATION_DATA@@@Z @ 0x14021A2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiRestoreMutableMigrationData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_RESTORE_MUTABLE_MIGRATION_DATA@@@Z @ 0x1402141D8 (-DdiRestoreMutableMigrationData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_RESTORE_MUTABLE_MIGRATION.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::RestoreMutableMigrationData(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GPUP_RESTORE_MUTABLE_MIGRATION_DATA *a2,
        __int64 a3)
{
  return ADAPTER_RENDER::DdiRestoreMutableMigrationData(this[1], a2, a3);
}
