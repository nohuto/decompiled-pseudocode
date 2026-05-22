/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18009064C
 * Callers:
 *     ??1?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x18009C488 (--1-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ??1InputStateManager@@MEAA@XZ @ 0x1800CCFC4 (--1InputStateManager@@MEAA@XZ.c)
 *     ??1SystemCursorController2@@UEAA@XZ @ 0x1800F6428 (--1SystemCursorController2@@UEAA@XZ.c)
 *     ??1SystemCursorService2@@UEAA@XZ @ 0x1800F909C (--1SystemCursorService2@@UEAA@XZ.c)
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x1800FC838 (--1MPCInputRouter@@EEAA@XZ.c)
 *     ??1DragNDropProcessor@@UEAA@XZ @ 0x18014A81C (--1DragNDropProcessor@@UEAA@XZ.c)
 *     ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x18014A8A8 (--1MessageInfo@DragNDropProcessor@@QEAA@XZ.c)
 *     ??1ResizeProcessor@@UEAA@XZ @ 0x18015055C (--1ResizeProcessor@@UEAA@XZ.c)
 *     ??1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ @ 0x1801535C0 (--1EdgyDragMessageInfo@EdgyProcessor@@QEAA@XZ.c)
 *     ??1EdgyProcessor@@UEAA@XZ @ 0x180153698 (--1EdgyProcessor@@UEAA@XZ.c)
 *     ??1ControllerNavigationManager@@UEAA@XZ @ 0x180175610 (--1ControllerNavigationManager@@UEAA@XZ.c)
 *     ?UpdateBamoProperties@PenHapticDevice@@QEAAXXZ @ 0x180188668 (-UpdateBamoProperties@PenHapticDevice@@QEAAXXZ.c)
 *     ??1PenHapticInterface@@UEAA@XZ @ 0x18018E91C (--1PenHapticInterface@@UEAA@XZ.c)
 *     ??1InputInfoValidator@@UEAA@XZ @ 0x18019C520 (--1InputInfoValidator@@UEAA@XZ.c)
 *     ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z @ 0x18019C678 (-ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@_N@Z.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x18019E714 (--1DWMInputRouter@@MEAA@XZ.c)
 *     ??1DWMCursorBroker@@MEAA@XZ @ 0x1801C6F60 (--1DWMCursorBroker@@MEAA@XZ.c)
 *     _InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__ @ 0x1801DA030 (_InputSinkDataCache--GetInstance_--_2_--_dynamic_atexit_destructor_for__instance__.c)
 *     _dynamic_atexit_destructor_for__VirtualTouchpadControllerProxy::s_configuredControllers__ @ 0x1801DA1D0 (_dynamic_atexit_destructor_for__VirtualTouchpadControllerProxy--s_configuredControllers__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800906A0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>(
        __int64 a1)
{
  char *v2; // rcx

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
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v2,
    *(_QWORD *)(a1 + 8));
  std::_Deallocate<16,0>(*(char **)(a1 + 8), (const struct std::nothrow_t *)0x20);
}
