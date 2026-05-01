/*
 * XREFs of ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x18003D05C
 * Callers:
 *     ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x18003D964 (-CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180002C38 (--3@YAXPEAX@Z.c)
 *     memset_0 @ 0x180002E14 (memset_0.c)
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x1800415F8 (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CQueryKnownGameList,CQueryKnownGameList,unsigned short const * &>(
        struct _RTL_CRITICAL_SECTION **a1,
        const unsigned __int16 **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rax
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v7; // edi

  *a1 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)operator new(0x328uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
    return 2147942414LL;
  v4->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&KnownGameList::IQueryKnownGameList::`vftable';
  v4->RecursionCount = 1;
  v4->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KnownGameList::IQueryKnownGameList>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v5->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CQueryKnownGameList::`vftable';
  v5->OwningThread = 0LL;
  v5->LockSemaphore = (HANDLE)-1LL;
  v5[18].LockSemaphore = 0LL;
  v5[18].SpinCount = 0LL;
  InitializeCriticalSectionEx(v5 + 19, 0, 0);
  LODWORD(v5[20].DebugInfo) = 0;
  memset_0(&v5->SpinCount, 0, 0x2C4uLL);
  v7 = CQueryKnownGameList::RuntimeClassInitialize((CQueryKnownGameList *)v5, *a2);
  if ( v7 >= 0 )
  {
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->CriticalSection)(v5);
    *a1 = v5;
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->ProcessLocksList.Flink)(v5);
    return 0;
  }
  else
  {
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v5->DebugInfo->ProcessLocksList.Flink)(v5);
  }
  return (unsigned int)v7;
}
