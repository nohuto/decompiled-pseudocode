/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180136FA4
 * Callers:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180136F70 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUInputObserverClient@-$CBaseInputObse.c)
 *     ?UnregisterObserverClient@?$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1801377B0 (-UnregisterObserverClient@-$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 )
  {
    *(_QWORD *)(a2 + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  std::_Deallocate<16,0>((char *)a2, (const struct std::nothrow_t *)0x28);
}
