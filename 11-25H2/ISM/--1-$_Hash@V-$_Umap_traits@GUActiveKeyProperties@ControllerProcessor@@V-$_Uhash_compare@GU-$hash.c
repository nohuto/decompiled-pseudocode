/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18005BB50
 * Callers:
 *     ??1GestureServices@@UEAA@XZ @ 0x18013FB48 (--1GestureServices@@UEAA@XZ.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180177F84 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ??1ISMHeatFrameworkHost@@MEAA@XZ @ 0x1801840A4 (--1ISMHeatFrameworkHost@@MEAA@XZ.c)
 *     ??1PenEventsDispatcherPrincipal@@UEAA@XZ @ 0x18018EDEC (--1PenEventsDispatcherPrincipal@@UEAA@XZ.c)
 *     _PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal_::_1_::dtor$2 @ 0x1801C8394 (_PenEventsDispatcherPrincipal--PenEventsDispatcherPrincipal_--_1_--dtor$2.c)
 *     _GestureServices::GestureServices_::_1_::dtor$8 @ 0x1801C851B (_GestureServices--GestureServices_--_1_--dtor$8.c)
 *     _ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager_::_1_::dtor$5 @ 0x1801CAF9C (_ViewHierarchyWithWindowManager--ViewHierarchyWithWindowManager_--_1_--dtor$5.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$1 @ 0x1801D0ACD (_ControllerProcessor--ControllerProcessor_--_1_--dtor$1.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$2 @ 0x1801D0D4B (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$2.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$4 @ 0x1801D0D77 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$4.c)
 *     _dynamic_atexit_destructor_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x1801D2740 (_dynamic_atexit_destructor_for__ControllerProcessor--s_controllerCurrentKeyMap__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::~_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>(
        __int64 a1)
{
  char *v2; // rcx
  _QWORD **v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx

  v2 = *(char **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v3 = *(_QWORD ***)(a1 + 8);
  *v3[1] = 0LL;
  v4 = *v3;
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      operator delete(v4, (const struct std::nothrow_t *)0x18);
      v4 = v5;
    }
    while ( v5 );
  }
  operator delete(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x18);
}
