/*
 * XREFs of ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x1800D546C
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800D2C40 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A14C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PartitionSetExcludeFromDDA@CVisualProxy@@QEAAJ_N@Z @ 0x180105B40 (-PartitionSetExcludeFromDDA@CVisualProxy@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateFilteredVisualList(CProjectionBorderManager *this)
{
  unsigned int i; // ebx
  __int64 v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
  {
    v3 = *(_QWORD *)(56LL * i + *((_QWORD *)this + 50));
    if ( v3 )
    {
      v4 = CVisualProxy::PartitionSetExcludeFromDDA(*(CVisualProxy **)(v3 + 16), 1);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x128,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)v4);
    }
  }
  return 0LL;
}
