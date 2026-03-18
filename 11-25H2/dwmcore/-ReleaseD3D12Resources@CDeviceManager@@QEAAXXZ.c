/*
 * XREFs of ?ReleaseD3D12Resources@CDeviceManager@@QEAAXXZ @ 0x1802C115C
 * Callers:
 *     ?ClearCachedBoundsData@CSuperWetInkManager@@QEAAXXZ @ 0x1801FB054 (-ClearCachedBoundsData@CSuperWetInkManager@@QEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801D13C0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@@@Z @ 0x18022D698 (-WaitForResult@-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@.c)
 *     ??R?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@QEBAXPEAV?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@Z @ 0x1802C232C (--R-$default_delete@V-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@QEBAXPEAV-$CAsyncTask@UD3D.c)
 */

void __fastcall CDeviceManager::ReleaseD3D12Resources(CDeviceManager *this)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx
  CDeviceManager *v6; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = this;
  v7 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  v1 = xmmword_180406B40;
  for ( i = qword_180406B38; i != v1; i += 16LL )
  {
    v3 = *(_QWORD *)i;
    v4 = *(_QWORD *)(*(_QWORD *)i + 1064LL);
    if ( v4 )
    {
      v6 = 0LL;
      CAsyncTask<CD3DDevice::D3D12Resources>::WaitForResult(v4, &v6);
      v5 = *(_QWORD *)(v3 + 1064);
      *(_QWORD *)(v3 + 1064) = 0LL;
      if ( v5 )
        std::default_delete<CAsyncTask<CD3DDevice::D3D12Resources>>::operator()();
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
}
