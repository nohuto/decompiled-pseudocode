/*
 * XREFs of ?UnregisterObserverClient@?$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x180139980
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RPEAUIInputTarget@@@?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@std@@QEBA_KAEBQEAUIInputTarget@@@Z @ 0x180023BDC (--$-RPEAUIInputTarget@@@-$_Uhash_compare@PEAUIInputTarget@@U-$hash@PEAUIInputTarget@@@std@@U-$eq.c)
 *     ?SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ @ 0x180097440 (-SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ.c)
 *     ??$find@X@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@1@AEBQEAUIHeatSystemContextClient@@@Z @ 0x180099C4C (--$find@X@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSyste.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180139174 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KUInputObserverClient@-$CBaseInputObserverS.c)
 *     ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x180139778 (-GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z.c)
 *     ?UpdateObservationState@?$CBaseInputObserverServer@$0L@@@AEAAXXZ @ 0x180139A60 (-UpdateObservationState@-$CBaseInputObserverServer@$0L@@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseInputObserverServer<11>::UnregisterObserverClient(
        __int64 a1,
        __int64 a2,
        struct BamoInputObserverClientProxy *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  int v6; // eax
  __int64 v7; // rax
  __int64 *v8; // r10
  __int64 v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 ClientId; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+20h] BYREF

  ClientId = GetClientId(a3);
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::find<void>(
    (_QWORD *)(a1 + 160),
    &v15,
    (__int64)&ClientId);
  v5 = v15;
  if ( v15 != *(_QWORD *)(a1 + 168) )
  {
    if ( *(_DWORD *)(v15 + 32) == 4 )
    {
      v6 = *(_DWORD *)(a1 + 224);
      if ( !v6 )
        msl::utilities::SafeIntErrorPolicy_SafeIntException::SafeIntOnOverflow();
      *(_DWORD *)(a1 + 224) = v6 - 1;
    }
    v7 = std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>::operator()<IInputTarget *>(
           v4,
           v5 + 16);
    v10 = *(_QWORD *)(a1 + 184);
    v11 = 2 * (*(_QWORD *)(a1 + 208) & v7);
    if ( *(__int64 **)(v10 + 16 * (*(_QWORD *)(a1 + 208) & v7) + 8) == v8 )
    {
      if ( *(__int64 **)(v10 + 16 * (*(_QWORD *)(a1 + 208) & v7)) == v8 )
        *(_QWORD *)(v10 + 16 * (*(_QWORD *)(a1 + 208) & v7)) = v9;
      else
        v9 = v8[1];
      *(_QWORD *)(v10 + 8 * v11 + 8) = v9;
    }
    else if ( *(__int64 **)(v10 + 16 * (*(_QWORD *)(a1 + 208) & v7)) == v8 )
    {
      *(_QWORD *)(v10 + 16 * (*(_QWORD *)(a1 + 208) & v7)) = *v8;
    }
    v12 = *v8;
    --*(_QWORD *)(a1 + 176);
    *(_QWORD *)v8[1] = v12;
    *(_QWORD *)(v12 + 8) = v8[1];
    std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>,void *>>>(
      v12,
      (__int64)v8);
    CBaseInputObserverServer<11>::UpdateObservationState(a1);
  }
  return 0LL;
}
