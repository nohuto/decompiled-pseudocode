/*
 * XREFs of ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x180252A2C
 * Callers:
 *     ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ @ 0x1800C2D54 (-CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ @ 0x18020F47C (-ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x180259AC0 (-ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ.c)
 *     ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x180289B20 (-ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARG.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180214CD4 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CSyncLockGroup_std::default_delete_CSyncLockGroup___________lambda_ba8dc3c680031872e33eb834ce4e6176___ @ 0x18023B1A8 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CSyncLo.c)
 *     ??1?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAA@XZ @ 0x180252B00 (--1-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@std@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@VCSyncLockGroup@@@std@@$0A@@?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180272DBC (--$-4U-$default_delete@VCSyncLockGroup@@@std@@$0A@@-$unique_ptr@VCSyncLockGroup@@U-$default_dele.c)
 */

void __fastcall CSyncLockGroup::RemoveRenderTarget(CSyncLockGroup *this, struct IMonitorTarget *a2)
{
  __int64 *v2; // rbx
  struct IMonitorTarget **v4; // rax
  struct IMonitorTarget **v5; // rcx
  struct IMonitorTarget **v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 16);
  v4 = (struct IMonitorTarget **)*((_QWORD *)this + 2);
  v5 = (struct IMonitorTarget **)*((_QWORD *)this + 3);
  while ( v4 != v5 && *v4 != a2 )
    ++v4;
  v6 = v4;
  if ( v4 != v5 )
  {
    while ( ++v4 != v5 )
    {
      if ( *v4 != a2 )
        *v6++ = *v4;
    }
  }
  detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
    v2,
    ((__int64)v6 - *v2) >> 3,
    1LL);
  if ( v2[1] == *v2 )
  {
    v7 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CSyncLockGroup_std::default_delete_CSyncLockGroup___________lambda_ba8dc3c680031872e33eb834ce4e6176___(
           &v10,
           CSyncLockGroup::g_syncLockGroups,
           xmmword_180406940);
    v8 = xmmword_180406940;
    v9 = *v7 + 8LL;
    if ( v9 != (_QWORD)xmmword_180406940 )
    {
      do
      {
        std::unique_ptr<CSyncLockGroup>::operator=<std::default_delete<CSyncLockGroup>,0>(v9 - 8, v9);
        v9 += 8LL;
      }
      while ( v9 != v8 );
      v8 = xmmword_180406940;
    }
    std::unique_ptr<CSyncLockGroup>::~unique_ptr<CSyncLockGroup>(v8 - 8);
    *(_QWORD *)&xmmword_180406940 = xmmword_180406940 - 8;
  }
}
