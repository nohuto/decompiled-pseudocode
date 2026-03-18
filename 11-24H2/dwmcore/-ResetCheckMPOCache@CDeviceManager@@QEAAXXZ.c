/*
 * XREFs of ?ResetCheckMPOCache@CDeviceManager@@QEAAXXZ @ 0x180101868
 * Callers:
 *     ?UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ @ 0x180102CA0 (-UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1801DE7B0 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@.c)
 */

void __fastcall CDeviceManager::ResetCheckMPOCache(CDeviceManager *this)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  __int64 v3; // rdi

  EnterCriticalSection(&CriticalSection);
  v1 = xmmword_1803FAAF0;
  for ( i = qword_1803FAAE8; i != v1; i += 16LL )
  {
    v3 = *(_QWORD *)i;
    if ( !*(_DWORD *)(*(_QWORD *)i + 1112LL) && *(_QWORD *)(v3 + 1408) != *(_QWORD *)(v3 + 1416) )
    {
      std::_Destroy_range<std::allocator<std::unique_ptr<CCheckMPOCache>>>();
      *(_QWORD *)(v3 + 1416) = *(_QWORD *)(v3 + 1408);
    }
  }
  LeaveCriticalSection(&CriticalSection);
}
