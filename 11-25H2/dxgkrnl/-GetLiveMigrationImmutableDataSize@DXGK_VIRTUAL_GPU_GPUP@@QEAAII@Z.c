/*
 * XREFs of ?GetLiveMigrationImmutableDataSize@DXGK_VIRTUAL_GPU_GPUP@@QEAAII@Z @ 0x140189550
 * Callers:
 *     ?RestoreImmutableMigrationData@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GPUP_RESTORE_IMMUTABLE_MIGRATION_DATA@@@Z @ 0x1401892B0 (-RestoreImmutableMigrationData@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GPUP_RESTORE_IMMUTABLE_M.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::GetLiveMigrationImmutableDataSize(DXGK_VIRTUAL_GPU_GPUP *this, int a2)
{
  if ( a2 == 1 )
    return (unsigned int)(16 * (*((_DWORD *)this + 42) + 1));
  else
    return 0LL;
}
