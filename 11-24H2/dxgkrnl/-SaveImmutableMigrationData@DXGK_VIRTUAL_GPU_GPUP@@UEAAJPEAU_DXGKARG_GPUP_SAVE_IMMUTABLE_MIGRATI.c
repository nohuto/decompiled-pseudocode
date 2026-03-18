/*
 * XREFs of ?SaveImmutableMigrationData@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GPUP_SAVE_IMMUTABLE_MIGRATION_DATA@@@Z @ 0x14021A300
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiSaveImmutableMigrationData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_SAVE_IMMUTABLE_MIGRATION_DATA@@@Z @ 0x140214430 (-DdiSaveImmutableMigrationData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_SAVE_IMMUTABLE_MIGRATION_D.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::SaveImmutableMigrationData(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct _DXGKARG_GPUP_SAVE_IMMUTABLE_MIGRATION_DATA *a2)
{
  _DWORD *v3; // r9
  unsigned int v4; // esi
  _DWORD *v5; // r10
  unsigned int v6; // r11d
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdi

  v3 = (_DWORD *)*((_QWORD *)a2 + 2);
  v4 = 16 * (*((_DWORD *)this + 42) + 1);
  if ( v3 )
  {
    *v3 = 1;
    v5 = v3 + 4;
    v6 = 0;
    v3[2] = *(_DWORD *)(*((_QWORD *)this + 14) + 12LL);
    for ( v3[3] = *((_DWORD *)this + 42); v6 < *((_DWORD *)this + 42); v5 += 4 )
    {
      v7 = v6++;
      v5[2] = *(_DWORD *)(*((_QWORD *)this + 23) + 112 * v7 + 24);
      v5[3] = *(_DWORD *)(*((_QWORD *)this + 23) + 112 * v7 + 28);
      *(_QWORD *)v5 = *(_QWORD *)(*((_QWORD *)this + 23) + 112 * v7 + 16);
    }
    v8 = (unsigned int)((_DWORD)v5 - *((_DWORD *)a2 + 4));
    v3[1] = v8;
    **((_QWORD **)a2 + 1) -= v8;
    *((_QWORD *)a2 + 2) = v5;
  }
  v9 = ADAPTER_RENDER::DdiSaveImmutableMigrationData(*((ADAPTER_RENDER **)this + 1), a2, (__int64)this);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( !*((_QWORD *)a2 + 2) )
      **((_QWORD **)a2 + 1) += v4;
  }
  else
  {
    WdLogSingleEntry1(2LL, v9);
    WdLogGlobalForLineNumber = 418;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The driver failed SaveImmutableMigrationData DDI call. Status: 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v10;
}
