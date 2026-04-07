/*
 * XREFs of ??1?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@QEAA@XZ @ 0x1800B3620
 * Callers:
 *     _CDisplayAnimatedVisual::CDisplayAnimatedVisual_::_1_::dtor$1 @ 0x18006748A (_CDisplayAnimatedVisual--CDisplayAnimatedVisual_--_1_--dtor$1.c)
 *     _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$3 @ 0x1800678BD (_CDesktopManager--CreateMonitorRenderTargets_--_1_--dtor$3.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CDWMDisplay const *>::~vector<CDWMDisplay const *>(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
