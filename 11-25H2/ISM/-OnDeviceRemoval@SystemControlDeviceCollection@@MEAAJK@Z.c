/*
 * XREFs of ?OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z @ 0x180083CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@KV?$array@G$0BE@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800D8A48 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKV-$array@G$0BE@@std@@.c)
 *     ?CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800D8BF0 (-CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800DCAA0 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemControlDeviceCollection::OnDeviceRemoval(SystemControlDeviceCollection *this, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int16 *i; // rsi
  DWORD TickCount; // edi
  int ButtonInfo; // edi
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-C28h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C08h] BYREF
  _BYTE v18[8]; // [rsp+48h] [rbp-C00h] BYREF
  _BYTE v19[24]; // [rsp+50h] [rbp-BF8h] BYREF
  int v20; // [rsp+68h] [rbp-BE0h]
  wil::details::in1diag3 *retaddr; // [rsp+C48h] [rbp+0h]
  unsigned int v22; // [rsp+C58h] [rbp+10h] BYREF

  v22 = a2;
  memset_0(v19, 0, 0xBC0uLL);
  PerformanceCount.QuadPart = 0LL;
  v20 = 3008;
  v5 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
         v4,
         (__int64)&v22);
  v6 = *((_QWORD *)this + 348);
  v7 = 2 * (*((_QWORD *)this + 351) & v5);
  v8 = *((_QWORD *)this + 346);
  v9 = *(_QWORD *)(v6 + 8 * v7 + 8);
  if ( v9 == v8 )
  {
LABEL_6:
    v9 = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(v6 + 8 * v7);
    while ( a2 != *(_DWORD *)(v9 + 16) )
    {
      if ( v9 == v10 )
        goto LABEL_6;
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  if ( !v9 )
    v9 = *((_QWORD *)this + 346);
  if ( v9 == v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)0x80004005LL,
      v16);
    return 2147500037LL;
  }
  else
  {
    for ( i = (unsigned __int16 *)(v9 + 20); i != (unsigned __int16 *)(v9 + 60); ++i )
    {
      TickCount = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      ButtonInfo = SystemControlDeviceCollection::CreateButtonInfo(
                     (SystemControlDeviceCollection *)*i,
                     a2,
                     TickCount,
                     PerformanceCount,
                     *i,
                     0,
                     (struct InputInfo *)v19);
      if ( ButtonInfo < 0 )
      {
        v15 = 131LL;
        goto LABEL_18;
      }
      ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                     *((_QWORD *)this + 2),
                     v19);
      if ( ButtonInfo < 0 )
      {
        v15 = 137LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
          (const char *)(unsigned int)ButtonInfo,
          v16);
        return (unsigned int)ButtonInfo;
      }
    }
    ButtonInfo = HIDDeviceCollection::OnDeviceRemoval(this, a2);
    if ( ButtonInfo < 0 )
    {
      v15 = 141LL;
      goto LABEL_18;
    }
    std::_Hash<std::_Umap_traits<unsigned long,std::array<unsigned short,20>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::array<unsigned short,20>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::array<unsigned short,20>>>>>,0>(
      (char *)this + 2760,
      v18,
      v9);
    return 0LL;
  }
}
