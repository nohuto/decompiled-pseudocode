/*
 * XREFs of ?_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z @ 0x1800D3EE4
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800D2C40 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProjectionBorderManager::_FindProjectionVisualByAdapter(
        CProjectionBorderManager *this,
        const struct _LUID *a2,
        int a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  __int64 v7; // rcx
  DWORD LowPart; // edi
  __int64 v9; // rdx

  v3 = *((_DWORD *)this + 106);
  v4 = -1;
  v5 = 0;
  if ( v3 )
  {
    v7 = *((_QWORD *)this + 50);
    LowPart = a2->LowPart;
    while ( 1 )
    {
      v9 = 56LL * v5;
      if ( *(_DWORD *)(v9 + v7 + 24) == LowPart
        && *(_DWORD *)(v9 + v7 + 28) == a2->HighPart
        && *(_DWORD *)(v9 + v7 + 32) == a3 )
      {
        break;
      }
      if ( ++v5 >= v3 )
        return v4;
    }
    return v5;
  }
  return v4;
}
