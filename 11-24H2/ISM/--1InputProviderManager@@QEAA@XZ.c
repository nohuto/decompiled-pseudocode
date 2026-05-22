/*
 * XREFs of ??1InputProviderManager@@QEAA@XZ @ 0x180098A6C
 * Callers:
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$4 @ 0x1801D34DE (_DeviceInputHost--DeviceInputHost_--_1_--dtor$4.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800A2FC4 (--$_Destroy_range@V-$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV-$all.c)
 */

void __fastcall InputProviderManager::~InputProviderManager(InputProviderManager *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<InputProvider>>(v2, *((_QWORD *)this + 1));
    std::_Deallocate<16,0>(
      *(char **)this,
      (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 2) - *(_QWORD *)this) >> 3)));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
}
