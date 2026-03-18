/*
 * XREFs of ?UpdateLiveMigrationAllocIndex@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ @ 0x140214514
 * Callers:
 *     ?LiveMigrationTransferDirtyContent@DXGK_VIRTUAL_GPU_GPUP@@UEAAJIW4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x1402132D0 (-LiveMigrationTransferDirtyContent@DXGK_VIRTUAL_GPU_GPUP@@UEAAJIW4_DXGK_GPUP_MIGRATIONTYPE@@PEA_.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::UpdateLiveMigrationAllocIndex(DXGK_VIRTUAL_GPU_GPUP *this)
{
  __int64 i; // rax
  _DWORD *v3; // rcx
  _DWORD *v4; // rdi

  for ( i = *((unsigned int *)this + 82); (unsigned int)i < *((_DWORD *)this + 42); *((_DWORD *)this + 82) = i )
  {
    v3 = (_DWORD *)(*((_QWORD *)this + 23) + 32LL + 112 * i);
    v4 = v3 + 19;
    if ( v3[18] && (unsigned int)RtlNumberOfSetBitsInRange(v3, (unsigned int)*v4, (unsigned int)(*v3 - *v4)) )
      break;
    *v4 = 0;
    i = (unsigned int)(*((_DWORD *)this + 82) + 1);
  }
}
