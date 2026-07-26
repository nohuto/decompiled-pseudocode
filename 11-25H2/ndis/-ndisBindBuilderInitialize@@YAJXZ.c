/*
 * XREFs of ?ndisBindBuilderInitialize@@YAJXZ @ 0x140198DF0
 * Callers:
 *     ?ndisBindInitialize@@YAJXZ @ 0x140198D4C (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     memset @ 0x1400EE380 (memset.c)
 *     ??0?$KHashTableBase@$00@Rtl@@QEAA@_K@Z @ 0x14014F960 (--0-$KHashTableBase@$00@Rtl@@QEAA@_K@Z.c)
 *     ?ndisBindBuilderCleanup@@YAXXZ @ 0x140150784 (-ndisBindBuilderCleanup@@YAXXZ.c)
 *     ndisEnsureBindingInfoLoaded @ 0x140150C80 (ndisEnsureBindingInfoLoaded.c)
 *     ndisBindBuilderLoadSettings @ 0x140198EB4 (ndisBindBuilderLoadSettings.c)
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
    qword_140127138 = (PVOID)v1;
    Settings = ndisBindBuilderLoadSettings();
    if ( Settings || *((_BYTE *)qword_140127138 + 97) && (Settings = ndisEnsureBindingInfoLoaded()) != 0 )
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
    qword_140127138 = 0LL;
    return 3221225626LL;
  }
}
