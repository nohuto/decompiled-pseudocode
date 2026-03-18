/*
 * XREFs of DpiKsrGetSavedAdapterState @ 0x140250EA4
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x140217710 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiKsrIsSoftBoot @ 0x140250F80 (DpiKsrIsSoftBoot.c)
 */

__int64 __fastcall DpiKsrGetSavedAdapterState(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rdx
  _QWORD *v4; // r8
  _QWORD *v5; // r9
  _DWORD *v6; // r10
  _QWORD *v7; // r11
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // eax

  if ( !(unsigned __int8)DpiKsrIsSoftBoot(a1, a2, a3, a3) )
    return 3221225473LL;
  v9 = qword_1401612C0;
  *v4 = 0LL;
  *v3 = 0;
  v10 = 0;
  v11 = v9 + 29;
  while ( v10 < *(_DWORD *)(v9 + 4) )
  {
    v12 = *(_QWORD *)v11 - v7[616];
    if ( *(_QWORD *)v11 == v7[616] )
      v12 = *(_QWORD *)(v11 + 8) - v7[617];
    if ( !v12 )
    {
      if ( !*(_BYTE *)(v11 + 24) )
      {
        v7[337] = *(_QWORD *)(v11 + 16);
        v13 = *(_DWORD *)(qword_1401612C0 + 8);
        if ( v13 >= *(_DWORD *)(qword_1401612C0 + 4) )
        {
          WdLogSingleEntry1(2LL, -1073741823LL);
          WdLogGlobalForLineNumber = 1353;
          return 3221225473LL;
        }
        *(_DWORD *)(qword_1401612C0 + 8) = v13 + 1;
        *(_BYTE *)(v11 + 24) = 1;
      }
      *v5 = v11 + 32;
      *v6 = *(_DWORD *)(v11 + 28);
      return 0LL;
    }
    v11 += *(unsigned int *)(v11 + 28) + 32LL;
    ++v10;
  }
  return 0LL;
}
