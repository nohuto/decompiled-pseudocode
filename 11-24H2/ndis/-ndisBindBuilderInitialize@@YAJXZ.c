/*
 * XREFs of ?ndisBindBuilderInitialize@@YAJXZ @ 0x14018DDB8
 * Callers:
 *     ?ndisBindInitialize@@YAJXZ @ 0x14018DD14 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     memset @ 0x1400E7500 (memset.c)
 *     ??0?$KHashTableBase@$00@Rtl@@QEAA@_K@Z @ 0x140144CA0 (--0-$KHashTableBase@$00@Rtl@@QEAA@_K@Z.c)
 *     ?ndisBindBuilderCleanup@@YAXXZ @ 0x140145AC4 (-ndisBindBuilderCleanup@@YAXXZ.c)
 *     ndisEnsureBindingInfoLoaded @ 0x140145FC0 (ndisEnsureBindingInfoLoaded.c)
 *     ndisBindBuilderLoadSettings @ 0x14018DE7C (ndisBindBuilderLoadSettings.c)
 */

__int64 ndisBindBuilderInitialize(void)
{
  PVOID PoolWithTag; // rax
  __int64 v1; // rbx
  unsigned int Settings; // ebx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x4742444Eu);
  v1 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x68uLL);
    Rtl::KHashTableBase<1>::KHashTableBase<1>(v1);
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_QWORD *)(v1 + 40) = 0LL;
    *(_QWORD *)(v1 + 48) = 0LL;
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_QWORD *)(v1 + 64) = 0LL;
    *(_QWORD *)(v1 + 72) = 0LL;
    *(_QWORD *)(v1 + 80) = 0LL;
    *(_QWORD *)(v1 + 88) = 0LL;
    *(_WORD *)(v1 + 96) = 0;
    qword_14011D088 = (PVOID)v1;
    Settings = ndisBindBuilderLoadSettings();
    if ( Settings || *((_BYTE *)qword_14011D088 + 97) && (Settings = ndisEnsureBindingInfoLoaded()) != 0 )
    {
      ndisBindBuilderCleanup();
      return Settings;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    qword_14011D088 = 0LL;
    return 3221225626LL;
  }
}
