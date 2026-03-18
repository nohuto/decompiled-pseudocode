/*
 * XREFs of ?RestoreImmutableMigrationData@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GPUP_RESTORE_IMMUTABLE_MIGRATION_DATA@@@Z @ 0x14018B500
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetLiveMigrationImmutableDataSize@DXGK_VIRTUAL_GPU_GPUP@@QEAAII@Z @ 0x14018B7A0 (-GetLiveMigrationImmutableDataSize@DXGK_VIRTUAL_GPU_GPUP@@QEAAII@Z.c)
 *     ?DdiRestoreImmutableMigrationData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_RESTORE_IMMUTABLE_MIGRATION_DATA@@@Z @ 0x140213F80 (-DdiRestoreImmutableMigrationData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GPUP_RESTORE_IMMUTABLE_MIGRA.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::RestoreImmutableMigrationData(
        ADAPTER_RENDER **this,
        struct _DXGKARG_GPUP_RESTORE_IMMUTABLE_MIGRATION_DATA *a2)
{
  unsigned int *v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  const wchar_t *v6; // r9
  unsigned int LiveMigrationImmutableDataSize; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ecx
  __int64 v11; // rbx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // rax
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int *v18; // rdi
  unsigned int i; // ecx
  ADAPTER_RENDER *v20; // r11
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // [rsp+20h] [rbp-38h]
  __int64 v24; // [rsp+20h] [rbp-38h]
  __int64 v25; // [rsp+28h] [rbp-30h]
  __int64 v26; // [rsp+28h] [rbp-30h]
  __int64 v27; // [rsp+28h] [rbp-30h]
  __int64 v28; // [rsp+28h] [rbp-30h]
  __int64 v29; // [rsp+30h] [rbp-28h]

  v2 = (unsigned int *)*((_QWORD *)a2 + 2);
  if ( !v2 || *((_QWORD *)a2 + 1) < 8uLL )
  {
    WdLogSingleEntry0(2LL);
    v5 = 448LL;
    v6 = L"Invalid data or data size passed to RestoreImmutableMigrationData";
    WdLogGlobalForLineNumber = 448;
    goto LABEL_20;
  }
  v4 = *v2;
  if ( (unsigned int)v4 > 1 )
  {
    WdLogSingleEntry1(2LL, v4);
    v5 = *v2;
    v6 = L"Invalid immutable data version %d";
    WdLogGlobalForLineNumber = 456;
LABEL_20:
    v25 = 0LL;
    goto LABEL_21;
  }
  LiveMigrationImmutableDataSize = DXGK_VIRTUAL_GPU_GPUP::GetLiveMigrationImmutableDataSize(
                                     (DXGK_VIRTUAL_GPU_GPUP *)this,
                                     v4);
  v10 = v2[1];
  if ( v10 != LiveMigrationImmutableDataSize )
  {
    v11 = LiveMigrationImmutableDataSize;
    WdLogSingleEntry2(2LL, v10, LiveMigrationImmutableDataSize);
    v5 = v2[1];
    v6 = L"Invalid immutable data size %d, expected %d";
    v25 = v11;
    WdLogGlobalForLineNumber = 463;
LABEL_21:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v6, v5, v25, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v12 = v2[2];
  v13 = *((_DWORD *)this[14] + 3);
  if ( v12 != v13 )
  {
    WdLogSingleEntry2(2LL, v12, v13);
    v14 = v2[2];
    v26 = *((unsigned int *)this[14] + 3);
    WdLogGlobalForLineNumber = 471;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid current partition count %d, expected %d",
      v14,
      v26,
      0LL,
      0LL,
      0LL);
    return 3221225858LL;
  }
  v16 = v2[3];
  v17 = *((_DWORD *)this + 42);
  if ( v16 != v17 )
  {
    WdLogSingleEntry2(2LL, v16, v17);
    v27 = *((unsigned int *)this + 42);
    v23 = v2[3];
    WdLogGlobalForLineNumber = 477;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid number of segments %d, expected %d",
      v23,
      v27,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v18 = v2 + 4;
  for ( i = 0; i < v17; ++i )
  {
    v20 = this[23];
    v21 = 112LL * i;
    if ( v18[2] != *(_DWORD *)((char *)v20 + v21 + 24)
      || v18[3] != *(_DWORD *)((char *)v20 + v21 + 28)
      || *(_QWORD *)v18 != *(_QWORD *)((char *)v20 + v21 + 16) )
    {
      WdLogSingleEntry3(2LL, v18[2], v18[3], *(_QWORD *)v18);
      v29 = *(_QWORD *)v18;
      v28 = v18[3];
      v24 = v18[2];
      WdLogGlobalForLineNumber = 492;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid allocation info. Alignment: %d DriverSegmentId %d Size 0x%I64x",
        v24,
        v28,
        v29,
        0LL,
        0LL);
      return 3221225485LL;
    }
    v18 += 4;
  }
  v22 = v9 - (unsigned int)((_DWORD)v18 - *(_DWORD *)(v8 + 16));
  *(_QWORD *)(v8 + 16) = v18;
  *(_QWORD *)(v8 + 8) = v22;
  return ADAPTER_RENDER::DdiRestoreImmutableMigrationData(
           this[1],
           (struct _DXGKARG_GPUP_RESTORE_IMMUTABLE_MIGRATION_DATA *)v8);
}
