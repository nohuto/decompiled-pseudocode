/*
 * XREFs of ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x1800A75D8
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800A6FF0 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?_Tidy@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXXZ @ 0x18001BD30 (-_Tidy@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@AEA.c)
 *     ??$_Destroy_range@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Windows@@QEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x18001BDA8 (--$_Destroy_range@V-$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$unique@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@std@@U?$equal_to@X@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@0@V10@0U?$equal_to@X@0@@Z @ 0x1800A74F8 (--$unique@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@VString@Internal@Windows@@@std@@@s.c)
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x1800A7C34 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ??$_Move_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEAV123@00@Z @ 0x18018A740 (--$_Move_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEA.c)
 *     ??$_Reallocate@$0A@@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXAEA_K@Z @ 0x18029D154 (--$_Reallocate@$0A@@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@s.c)
 *     ??$_Emplace_reallocate@VString@Internal@Windows@@@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAPEAVString@Internal@Windows@@QEAV234@$$QEAV234@@Z @ 0x1803144AC (--$_Emplace_reallocate@VString@Internal@Windows@@@-$vector@VString@Internal@Windows@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall BroadcastDVRComponent::GetSortedUniqueProcessList(HSTRING *a1, __int64 *a2, __int64 a3)
{
  HSTRING *v5; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r12
  HSTRING *v9; // rdi
  HRESULT v10; // eax
  HSTRING v11; // rbx
  HSTRING v12; // rcx
  HSTRING *v13; // rsi
  char v14; // r9
  Windows::Internal::String *v15; // rbx
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  HSTRING *v17; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  HSTRING *v19; // [rsp+70h] [rbp+8h] BYREF
  HSTRING newString; // [rsp+78h] [rbp+10h] BYREF

  v19 = a1;
  v16 = 0LL;
  v5 = 0LL;
  v17 = 0LL;
  v6 = (a2[1] - *a2) >> 4;
  v19 = (HSTRING *)v6;
  if ( v6 )
  {
    if ( v6 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<Windows::Internal::String>::_Reallocate<0>(&v16, &v19);
    v5 = v17;
  }
  v7 = *a2;
  v8 = a2[1];
  v9 = (HSTRING *)*((_QWORD *)&v16 + 1);
  while ( v7 != v8 )
  {
    v19 = 0LL;
    newString = 0LL;
    v10 = WindowsDuplicateString(*(HSTRING *)(v7 + 8), &newString);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x888,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v10);
      std::vector<Windows::Internal::String>::_Tidy((__int64)&v16);
      return;
    }
    v11 = newString;
    v19 = (HSTRING *)newString;
    WindowsDeleteString(0LL);
    if ( v9 == v5 )
    {
      std::vector<Windows::Internal::String>::_Emplace_reallocate<Windows::Internal::String>(&v16, v9, &v19);
      v5 = v17;
      v9 = (HSTRING *)*((_QWORD *)&v16 + 1);
      v12 = (HSTRING)v19;
    }
    else
    {
      *v9 = v11;
      v12 = 0LL;
      *((_QWORD *)&v16 + 1) = ++v9;
    }
    if ( v12 )
      WindowsDeleteString(v12);
    v7 += 16LL;
  }
  v13 = (HSTRING *)v16;
  std::_Sort_unchecked<Windows::Internal::String *,std::less<void>>(v16, v9, (__int64)((__int64)v9 - v16) >> 3, 0LL);
  std::unique<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Windows::Internal::String>>>,std::equal_to<void>>(
    &v19,
    v13,
    v9,
    v14);
  if ( v19 != v9 )
  {
    v15 = (Windows::Internal::String *)std::_Move_unchecked<Windows::Internal::String *,Windows::Internal::String *>(
                                         v9,
                                         v9,
                                         v19);
    std::_Destroy_range<std::allocator<Windows::Internal::String>>(v15, (Windows::Internal::String *)v9);
    v9 = (HSTRING *)v15;
    *((_QWORD *)&v16 + 1) = v15;
  }
  if ( (__int128 *)a3 != &v16 )
  {
    std::vector<Windows::Internal::String>::_Tidy(a3);
    *(_QWORD *)a3 = v13;
    *(_QWORD *)(a3 + 8) = v9;
    *(_QWORD *)(a3 + 16) = v5;
    v16 = 0LL;
    v17 = 0LL;
  }
  std::vector<Windows::Internal::String>::_Tidy((__int64)&v16);
}
