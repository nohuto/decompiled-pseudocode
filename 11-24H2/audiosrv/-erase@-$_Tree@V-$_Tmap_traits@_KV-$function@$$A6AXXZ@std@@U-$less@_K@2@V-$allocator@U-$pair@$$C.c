/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6AXXZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800E24F4
 * Callers:
 *     ?UnregisterBidirectionalModeChangedCallback@CBtAudioResourceManagerBase@@UEAAJI@Z @ 0x1800E1BC0 (-UnregisterBidirectionalModeChangedCallback@CBtAudioResourceManagerBase@@UEAAJI@Z.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6AXXZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1800E20B0 (-_Erase@-$_Tree@V-$_Tmap_traits@_KV-$function@$$A6AXXZ@std@@U-$less@_K@2@V-$allocator@U-$pair@$$.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,std::function<void (void)>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::function<void (void)>>>,0>>::erase(
        __int64 *a1,
        unsigned __int64 *a2)
{
  __int64 v2; // r10
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // r11
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = v4;
  if ( !*(_BYTE *)(v4 + 25) )
  {
    v6 = *a2;
    do
    {
      if ( *(_QWORD *)(v5 + 32) >= v6 )
      {
        if ( *(_BYTE *)(v3 + 25) && v6 < *(_QWORD *)(v5 + 32) )
          v3 = v5;
        v2 = v5;
        v5 = *(_QWORD *)v5;
      }
      else
      {
        v5 = *(_QWORD *)(v5 + 16);
      }
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  if ( !*(_BYTE *)(v3 + 25) )
    v4 = *(_QWORD *)v3;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    if ( *a2 >= *(_QWORD *)(v4 + 32) )
    {
      v4 = *(_QWORD *)(v4 + 16);
    }
    else
    {
      v3 = v4;
      v4 = *(_QWORD *)v4;
    }
  }
  v8[0] = v2;
  v8[1] = v3;
  return std::_Tree<std::_Tmap_traits<unsigned __int64,std::function<void (void)>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::function<void (void)>>>,0>>::_Erase(
           a1,
           v8);
}
